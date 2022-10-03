// These rules match the format rules shown in Discord documentation:
// https://discord.com/developers/docs/reference#message-formatting-timestamp-styles
// The appearance function controls the preview generation logic.
var formatRules = [
    {
        name: "shorttime", code: "t", appearance: function (unixTimestamp) {
            let tempDate = new Date(unixTimestamp);
            return `${tempDate.getHours().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}:${tempDate.getMinutes().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}`
        }
    },
    {
        name: "longtime", code: "T", appearance: function (unixTimestamp) {
            let tempDate = new Date(unixTimestamp);
            return `${tempDate.getHours().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}:${tempDate.getMinutes().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}:${tempDate.getSeconds().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}`
        }
    },
    {
        name: "shortdate", code: "d", appearance: function (unixTimestamp) {
            let tempDate = new Date(unixTimestamp);
            return `${tempDate.getDate()}/${tempDate.getMonth() + 1}/${tempDate.getFullYear().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}`
        }
    },
    {
        name: "longdate", code: "D", appearance: function (unixTimestamp) {
            let tempDate = new Date(unixTimestamp);
            return `${tempDate.getDate()} ${tempDate.toLocaleString('default', { month: 'long' })} ${tempDate.getFullYear().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}`
        }
    },
    {
        name: "shortdatetime", code: "f", appearance: function (unixTimestamp) {
            let tempDate = new Date(unixTimestamp);
            return `${tempDate.getDate()} ${tempDate.toLocaleString('default', { month: 'long' })} ${tempDate.getFullYear().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})} ${tempDate.getHours().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}:${tempDate.getMinutes().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}`
        }
    },
    {
        name: "longdatetime", code: "F", appearance: function (unixTimestamp) {
            let tempDate = new Date(unixTimestamp);
            return `${tempDate.toLocaleString('default', { weekday: 'long' })}, ${tempDate.getDate()} ${tempDate.toLocaleString('default', { month: 'long' })} ${tempDate.getFullYear()} ${tempDate.getHours()}:${tempDate.getMinutes().toLocaleString('en-US', {minimumIntegerDigits: 2, useGrouping:false})}`
        }
    },
    {
        name: "relative", code: "R", appearance: function (unixTimestamp) {
            // Get difference between current user time and target time for the sake of the preview
            let tempDate = new Date(unixTimestamp);
            let dateNow = Date.now();
            let secondsDiff = Math.floor((tempDate - dateNow) / 1000);
            // Absolute awesome new API vvvvv
            const rtf1 = new Intl.RelativeTimeFormat('en', {
                style: 'long',
                numeric: 'auto',
                localeMatcher: "best fit"
            });

            // Return at the first suitable time scale -- eg. we won't show 0.005 years 
            // Works down based on scale, eg. years are bigger than seconds.
            let interval = secondsDiff / 31536000;
            if (interval > 1 || interval < -1) {
                return rtf1.format(Math.round(interval), 'years');
            }
            interval = secondsDiff / 2592000;
            if (interval > 1 || interval < -1) {
                return rtf1.format(Math.round(interval), 'months');
            }
            interval = secondsDiff / 86400;
            if (interval > 1 || interval < -1) {
                return rtf1.format(Math.round(interval), 'days');
            }
            interval = secondsDiff / 3600;
            if (interval > 1 || interval < -1) {
                return rtf1.format(Math.round(interval), 'hours');
            }
            interval = secondsDiff / 60;
            if (interval > 1 || interval < -1) {
                return rtf1.format(Math.round(interval), 'minutes');
            }
            return rtf1.format(secondsDiff, 'seconds');


        }
    },
];

// If the rules for how the elements in HTML are labelled eventually changes,
// That can be managed here. This decouples the data from the visuals.
// So if the table cell IDs changes to something like "code_shorttime",
// you'd change the snippet below to be something like `obj.c = "code_" + obj.name;`
// One for the user preview, one for the code snippet that gets generated.
var possibleCellIDs = new Array();
formatRules.forEach(obj => {
    possibleCellIDs.push(`a_${obj.name}`, `c_${obj.name}`)
    obj.a = "a_" + obj.name;
    obj.c = "c_" + obj.name;
})

// Discord-friendly Unix timestamps don't go so detailed as to include milliseconds properly.
// Divide by 1000 to remove that, add it back elsewhere in code if needed.
function unixTimestampGenerator(timestampJS) {
    let timestampProvided = new Date(timestampJS);
    let unixTimestamp = timestampProvided.getTime() / 1000;
    return unixTimestamp;
}

// Accessor for the HTML page to call all of this logic.
function getFormData() {
    let datetimeField = document.getElementById("i_datetime");
    tableGenerator(unixTimestampGenerator(datetimeField.value));
}

// Update the HTML table based on data that will be generated based on the Unix timestamp.
function tableGenerator(unixTimestamp) {
    let tableCells = Array.from(document.getElementsByTagName("td"));
    tableCells.forEach(cell => {
        // Returns the first matching object. Perfect for HTML IDs.
        let matchingRule = formatRules.find(obj => {
            return obj.a == cell.id || obj.c == cell.id
        });

        // If no matching table cell is found, matchingRule is falsey.
        if (matchingRule) {
            // The c and a part would be changed if the styling/structure for the identifiers change.
            // eg. substring instead of charAt, full string instead of single letter.
            if (cell.id.charAt(0) == "c") {
                // Easy string interpolation to build the Discord code snippet.
                cell.innerText = `<t:${unixTimestamp}:${matchingRule.code}>`
            }
            if (cell.id.charAt(0) == "a") {
                // The appearance functions use regular JS Unix timestamps,
                // so milliseconds must be added back in.
                // Could probably change that, really.
                cell.innerText = matchingRule.appearance(unixTimestamp * 1000);
            }
        }
    });

}