 var num;
 var notsel;
 function sel(id)
 {
    
    var divs=document.getElementById('gole').getElementsByTagName('div');  
    for(var i=0;i<divs.length; i++) {
        if(divs[i]!=id) {  
            divs[i].className='golaa';
            
        }
        else{
            notsel=divs[i];
        }
    }
    id.className='goli'; 
    num=notsel.innerText 
   console.log(num)
}

let nilagola = document.querySelector("#div2");
  function showhidediv(){
      nilagola.classList.toggle("hide");
      document.getElementById('result').innerText = "You selected "+ num+" out of 5";
  }
 