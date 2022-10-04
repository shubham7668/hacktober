const fileInput = document.querySelector(".file-input"),
filterOptions = document.querySelectorAll(".filter button"),
filterName = document.querySelector(".filter-info .name"),
filterValue = document.querySelector(".filter-info .value"),
filterSlider = document.querySelector(".slider input"),
rotateOptions = document.querySelectorAll(".rotate button"),
previewImg = document.querySelector(".preview-img img"),
resetFilterBtn = document.querySelector(".reset-filter"),
chooseImgBtn = document.querySelector(".choose-img"),
saveImgBtn = document.querySelector(".save-img");

//? by Default values for each Filter
let brightness = "100", saturation = "100", inversion = "0", grayscale = "0";

//? inital values: rotate is 0degree
let rotate = 0, flipHorizontal = 1, flipVertical = 1;



const loadImage = () => {       //? to get user selected file
    let file = fileInput.files[0];
    if(!file) return;     //? case when user clicked for selection, but didn't selected image
    previewImg.src = URL.createObjectURL(file);  //? passing file URL as preview image's source
    //:/ removing Disabled classs from buttons      
    previewImg.addEventListener("load", () => {
        resetFilterBtn.click();     //? resetting the previous filters if any
        document.querySelector(".container").classList.remove("disable");
    });
}



const applyFilter = () => {
    //? to apply the filters, we used Pure CSS properties
    previewImg.style.transform = `rotate(${rotate}deg) scale(${flipHorizontal}, ${flipVertical})`;
    previewImg.style.filter = `brightness(${brightness}%) saturate(${saturation}%) invert(${inversion}%) grayscale(${grayscale}%)`;
}



filterOptions.forEach(option => {       //? adding event listener to all Filter buttons
    option.addEventListener("click", () => {
        document.querySelectorAll(".btn").forEach(btn => {
            btn.classList.remove("active");
        });
        //? first removing active class from other buttons, and then adding it only to clicked button 
        option.classList.add("active");
        filterName.innerText = option.innerText;
        //? showing the values depending Active Filter
        if(option.id === "brightness") {
            filterSlider.max = "200";
            filterSlider.value = brightness;
            filterValue.innerText = `${brightness}%`;
        } else if(option.id === "saturation") {
            filterSlider.max = "200";
            filterSlider.value = saturation;
            filterValue.innerText = `${saturation}%`
        } else if(option.id === "inversion") {
            filterSlider.max = "100";
            filterSlider.value = inversion;
            filterValue.innerText = `${inversion}%`;
        } else {
            filterSlider.max = "100";
            filterSlider.value = grayscale;
            filterValue.innerText = `${grayscale}%`;
        }
    });
});


const updateFilter = () => {
    filterValue.innerText = `${filterSlider.value}%`;
    const selectedFilter = document.querySelector(".filter .active");
    if(selectedFilter.id === "brightness") {
        brightness = filterSlider.value;
    } else if(selectedFilter.id === "saturation") {
        saturation = filterSlider.value;
    } else if(selectedFilter.id === "inversion") {
        inversion = filterSlider.value;
    } else {
        grayscale = filterSlider.value;
    }
    applyFilter();
}


rotateOptions.forEach(option => {
    option.addEventListener("click", () => {       //? adding event listener to all Rotate/Flip buttons
        if(option.id === "left") {
            rotate -= 90;       //? rotating left by decreasing the degree
        } else if(option.id === "right") {
            rotate += 90;       //? rotating right by increasing the degree by 90
        } else if(option.id === "horizontal") {
            flipHorizontal = flipHorizontal === 1 ? -1 : 1;
            //? we are switching values b/w 1 & -1
        } else {
            flipVertical = flipVertical === 1 ? -1 : 1;
            //? we are switching values b/w 1 & -1
        }
        applyFilter();      //? after setting the values for variables right above, now we are applying them
    });
});


const resetFilter = () => {
    //? here we are resetting the default values for variables
    brightness = "100"; saturation = "100"; inversion = "0"; grayscale = "0";
    rotate = 0; flipHorizontal = 1; flipVertical = 1;
    filterOptions[0].click();   //? selecting brightness as default option
    applyFilter();      //? applying the changes
}


const saveImage = () => {
    const canvas = document.createElement("canvas");        //? creating canvas element
    const ctx = canvas.getContext("2d");     //? returns a drawing Context to the image
    canvas.width = previewImg.naturalWidth;     
    canvas.height = previewImg.naturalHeight;
    //? to set the canvas Width & Height equal to the previewImg Width & Height 
    
    ctx.filter = `brightness(${brightness}%) saturate(${saturation}%) invert(${inversion}%) grayscale(${grayscale}%)`;      //? to apply the selected filter, as we have just updated the preview, not the actual image

    ctx.translate(canvas.width / 2, canvas.height / 2);    //? translating canvas from preview

    if(rotate !== 0) {      //? rotating only if image is rotated in input
        ctx.rotate(rotate * Math.PI / 180);
    }
    ctx.scale(flipHorizontal, flipVertical);    //? applying flips Horizontally & Vertically

    ctx.drawImage(previewImg, -canvas.width / 2, -canvas.height / 2, canvas.width, canvas.height);      //? drawImage provides us different ways to draw an image onto Canvas
    //://   drawImage(imageToDraw, dx, dy, dWidth, dHeight)   
    
    const link = document.createElement("a");   //? creating an <a> (anchor) element
    link.download = "image.jpg";
    link.href = canvas.toDataURL();   //? returns a data URL containing a representation of Image
    link.click();    //? clicking that <a> tag to download image
}


//:?        Event Listeners             
filterSlider.addEventListener("input", updateFilter);
resetFilterBtn.addEventListener("click", resetFilter);
saveImgBtn.addEventListener("click", saveImage);
fileInput.addEventListener("change", loadImage);
chooseImgBtn.addEventListener("click", () => fileInput.click());        
previewImg.addEventListener("click", () => fileInput.click());

//? adding hidden button to be clicked for choosing image, to style components more easily






//:?    Dynamic Copyright Date in Footer 
let year = new Date().getFullYear();
currYear.innerHTML=year;

