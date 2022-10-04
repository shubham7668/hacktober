const adviceCount = document.querySelector('.counter');
const adviceContent = document.querySelector('.advice-content');
const dice = document.querySelector('.dice');

async function getAdvice () {
    let num = Math.round(Math.random() * 224);
    let advice = await fetch ("https://api.adviceslip.com/advice/" + num);
    let data = await (advice.json());
    console.log(data);
    adviceCount.innerHTML = data.slip.id;
    adviceContent.innerHTML = '"' + data.slip.advice + '"';
}

getAdvice();
