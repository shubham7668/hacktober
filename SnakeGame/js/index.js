//:*     Game Constants & Variables         
//?     importing all sound files             
const foodSound = new Audio('../music/food.mp3');
const moveSound = new Audio('../music/move.mp3');
const gameOverSound = new Audio('../music/gameover.mp3');
const musicSound = new Audio('../music/music.mp3');


//?     initial state             
let inputDir = {
    x: 0,
    y: 0
};

let speed = 5;
let score = 0;
let lastPaintTime = 0;

let snakeArr = [
    { x: 13, y: 15 }
];
// this will be the location of Snake, now its only Head, but after eating, will contain locations of parts of body
// we are considering Top Left Corner as 0,0

let a = 2;
let b = 17;
/// our food will only be between 2 & 17, to make it easy   /// to make difficult, we can do from 1 to 18
let food = {
    x: Math.round(a+(b-a) * Math.random()),     //? this will generate random number between 'a' & 'b'
    y: Math.round(a+(b-a) * Math.random())
}





//:* Game Functions                             
function main(ctime) {
    window.requestAnimationFrame(main);     //? first (window.requestAnimationFrame(main)) gets called, which in turns calls main, and then main calls that function again, & a loop is created
    if ((ctime - lastPaintTime) / 1000 < 1 / speed) {
        //1/2 = .5 seconds
        return;
    }
    //? will paint only after 0.5 sec
    lastPaintTime = ctime;
    gameEngine();       /// this will be a function which will run game

}


function isCollide(snake){
    //:? if bump into yourself
    //? if snake's Head is equal to any part of the Body,then its Collided
    //:?   if bump into Wall    
    for(let i=1; i<snakeArr.length; i++){
        if((snake[i].x===snake[0].x) && (snake[i].y===snake[0].y)){
            return true;
        }
    }
    if(snake[0].x>18 || snake[0].x<=0 || snake[0].y>18 || snake[0].y<=0){
        return true;
    }
    return false;
}


function gameEngine() {
    //:/ Part 1: Updating the Snake Array & Food
    if(isCollide(snakeArr)){
        gameOverSound.play();
        musicSound.pause();
        inputDir = {x:0, y:0};
        alert("GAME OVER! 🐍 \nPress Enter↩ to Play Again🔁");
        snakeArr = [    //resetting Snake
            { x: 13, y: 15 }
        ];
        speed=5;
        musicSound.play();
        score=0;
        // location.reload();
    }


    //://   if food eaten by Snake, then Increment Score & Regenerate Food      
    if((snakeArr[0].y===food.y)&&(snakeArr[0].x===food.x)){
        //? here we checked if the location of Snake's head & food is same, then the food is eaten
        foodSound.play();
        score+=1;   //updating score
        currScore.innerHTML = "Score: " + score;
        if(score > hiscoreval){ //://   new Record  
            hiscoreval = score;
            localStorage.setItem('hiscore', hiscoreval);
            hiScoreBox.innerHTML = "Best: " + hiscoreval + "🏆";
        }

        //://   Updating Speed      
        speed = speed + (score/7.0);
        //? speed will increment after every 5 Blcoks consumed
        
        snakeArr.unshift({
            x: snakeArr[0].x + inputDir.x,
            y: snakeArr[0].y + inputDir.y
        });         //? here we added a block to the beginning to mark as new head

        
        food = {
            x: Math.round(a+(b-a) * Math.random()),     //? this will generate random number between 'a' & 'b'
            y: Math.round(a+(b-a) * Math.random())
        }
    }


    //://      Moving the Snake         
    //? moving the Body
    for(let i=snakeArr.length-2; i>=0; i--){
        //? we are starting from 2nd last block of snake
        const element = snakeArr[i];
        // snakeArr[i+1] = snakeArr[i];     //! will not work, because of Referrence problem, so we create an entirely new Object
        snakeArr[i+1] = {...snakeArr[i]};

    }
    
    //? moving the Head
    snakeArr[0].x += inputDir.x;
    snakeArr[0].y += inputDir.y;




    //:/ Part 2: Display the Snake and Food
    //://       Display Snake              
    board.innerHTML = "";  //to remove the previous snake display, before adding the new one
    snakeArr.forEach((e, index) => {
        snakeElement = document.createElement('div');
        snakeElement.style.gridRowStart = e.y;
        snakeElement.style.gridColumnStart = e.x;
        if (index === 0) {
            snakeElement.classList.add('head');
        }
        else {
            snakeElement.classList.add('snake');
        }
        board.appendChild(snakeElement);
    })

    //://       Display Food              
    foodElement = document.createElement('div');
    foodElement.style.gridRowStart = food.y;
    foodElement.style.gridColumnStart = food.x;
    foodElement.classList.add('food');
    board.appendChild(foodElement);

}










//:* main logic starts here (for looping too)     
let hiscore = localStorage.getItem("hiscore");
let hiscoreval;
if(hiscore===null){
    hiscoreval=0;
    localStorage.setItem("hiscore", JSON.stringify(hiscoreval));
}
else{
    hiscoreval=JSON.parse(hiscore);
    hiScoreBox.innerHTML = "Best: " + hiscore + "🏆";
}

window.requestAnimationFrame(main);
window.addEventListener('keydown', e => {
    musicSound.play();

    inputDir = { x: 0, y: 1 };    //game started
    moveSound.play();
    switch (e.key) {
        //?    we are considering top-left corner as origin 
        case "ArrowUp":
            console.log("Arrow-Up");
            inputDir.x = 0;
            inputDir.y = -1;
            break;

        case "ArrowDown":
            console.log("Arrow-Down");
            inputDir.x = 0;
            inputDir.y = 1;
            break;

        case "ArrowLeft":
            console.log("Arrow-Left");
            inputDir.x = -1;
            inputDir.y = 0;
            break;

        case "ArrowRight":
            console.log("Arrow-Right");
            inputDir.x = 1;
            inputDir.y = 0;
            break;

        default:
            break;
    }
})




//:?    Dynamic Date in Footer 
let year = new Date().getFullYear();
currYear.innerHTML=year;









if(window.innerWidth < 800){
    alert("SnakeMon🐍 is Played best in PC/Laptop. If you want to continue in Mobile, attach a controller.");
}
