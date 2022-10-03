// const fetch = require('node-fetch')

// function getRandomMeal() {

//      fetch('https://www.themealdb.com/api/json/v1/1/random.php')
//         .then((response) => {
//            response.json()      // It returns a Promise
//            .then((data)=>{
//                console.log(data)
//            })
//            .catch((e)=>{
//                console.log(e.name)
//            })
//         })
//         .catch((e) => {
//             console.log('In the Catch BLock')
//             console.log(e.name)
//             console.log(e.message)

//         })

// }


const mealsEl = document.getElementById('meals');
const favoriteContainer= document.getElementById('fav-meals');

const searchTerm=document.getElementById('search-term');

const searchBtn=document.getElementById("search");

const mealPopup=document.getElementById('meal-popup');

const popupCloseBtn=document.getElementById('close-popup');

const mealInfoEl=document.getElementById('meal-info')


async function getRandomMeal() {

    const response = await fetch('https://www.themealdb.com/api/json/v1/1/random.php');
    //console.log(typeof(response));    

    //response here will be js object
    //response.json() will be again be promise..
    //randomMeal will be again object 

    const respData = await response.json();
    const randomMeal = respData.meals[0];
    console.log(randomMeal);
    //console.log(typeof(randomMeal));

    addMeal(randomMeal, true);

}



async function getMealById(id) {
    const response = await fetch('https://www.themealdb.com/api/json/v1/1/lookup.php?i='+ id);
    const respData = await response.json();
    const meal = respData.meals[0];
    return meal;
}

async function getMealsBySearch(term) {
    const response = await fetch('https://www.themealdb.com/api/json/v1/1/search.php?s=' + term);
    const respData = await response.json();
    const meals = respData.meals;
    return meals;

}





function addMeal(mealData, random = false) {

    console.log(mealData);

    const meal = document.createElement('div')
    meal.classList.add('meal')

    meal.innerHTML =
        ` 
    <div class="meal-header">
        ${random ? `
        <span class="random">Random Recipe
        </span>`: ' '}
        <img 
             src="${mealData.strMealThumb}" 
             alt="${mealData.strMeal}"/>
    </div>
    <div class="meal-body">
         <h4>${mealData.strMeal}</h4>
         <button class="fav-btn" >
          <i class="fas fa-heart"></i>
         </button>
    </div>
    `;


    const btn = meal.querySelector('.meal-body .fav-btn')
    btn.addEventListener('click', (btn) => {
        //alert("added to the liked recipes");


        if (btn.target.classList.contains('active')) {
            removeMealLS(mealData.idMeal);
            btn.target.classList.remove("active");
        }
        else 
        {
            addMealLS(mealData.idMeal);
            btn.target.classList.add("active");
        }

      
        fetchFavMeals();
        //btn.target.classList.toggle("active");


    });
    meal.addEventListener('click',()=>{
         showMealInfo(mealData);
    });

    mealsEl.appendChild(meal);


}

function addMealLS(mealId) {
    const mealIds = getMealsLS();

    localStorage.setItem('mealIds', JSON.stringify([...mealIds, mealId]));
}

function removeMealLS(mealId) {

    const mealIds = getMealsLS();
    localStorage.setItem('mealIds', JSON.stringify(mealIds.filter(id => id !== mealId)));


}

function getMealsLS() {
    const mealIds = JSON.parse(localStorage.getItem('mealIds'));

    return mealIds === null ? [] : mealIds;
}


async function fetchFavMeals() {

    //clean the container
    favoriteContainer.innerHTML= " ";

    const mealIds = getMealsLS();

    const meals = [];

    for (let i = 0; i < mealIds.length; i++) {
        
        const mealId = mealIds[i];
        meal = await getMealById(mealId);

        addMealFav(meal)
       // meals.push(meal);
    }
    
    //console.log(meals);
    // in the above prog we converted the array of ids (mealsIds) of favourite meals into there corresponding array of  meals (meals)
    //add meals to the to the screen
}



function addMealFav(mealData) {

  

    const favMeal = document.createElement('li')
 
     favMeal.innerHTML =
        
        ` 
        <img src="${mealData.strMealThumb}" alt="${mealData.strMeal}">
        <span>${mealData.strMeal}</span>
        <buttonn class="clear"><i class="far fa-window-close"></i></button>
        
        `;

        const btn= favMeal.querySelector('.clear');
        btn.addEventListener('click',()=>{
            removeMealLS(mealData.idMeal);
            fetchFavMeals();
        })
        favoriteContainer.appendChild(favMeal);
}


function showMealInfo(mealData){


    //clean it up
      mealInfoEl.innerHTML="";

    //update the meal info
    const mealEl= document.createElement('div');

     mealEl.innerHTML=
     `
      <h1>${mealData.strMeal}</h1>
      <img src="${mealData.strMealThumb}" alt="" >
  
      <p>
      ${mealData.strInstructions}
      </p>
      <h4><u>Ingredients</u>-</h4>
      <ul>
          <li>${mealData.strIngredient1}</li>
          <li>${mealData.strIngredient2}</li>
          <li>${mealData.strIngredient3}</li>
          <li>${mealData.strIngredient4}</li>
          <li>${mealData.strIngredient5}</li>
          <li>${mealData.strIngredient6}</li>
          <li>${mealData.strIngredient7}</li>
  
      </ul>
    `                    

    
    
                   
    mealInfoEl.appendChild(mealEl);


    //show the popup
    mealPopup.classList.remove('hidden');
}




searchBtn.addEventListener("click",async ()=>{
   
    //cleaning the container
    mealsEl.innerHTML= ' ';
    const search= searchTerm.value;
    
    //console.log(await getMealsBySearch(search));
    const meals = await getMealsBySearch(search)

  

    if(meals){
    meals.forEach(meal =>{
        addMeal(meal);
    })
    } 

});


popupCloseBtn.addEventListener('click',()=>{
    mealPopup.classList.add('hidden');
 

});

getRandomMeal();
//fetchFavMeals();




//target property is used to return the element in the dom that triggers any particular event in the whole webpage