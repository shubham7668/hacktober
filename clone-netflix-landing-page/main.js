const more = document.querySelector('.more');
const active = document.querySelector('.hide');
const Close = document.querySelector('.close');


more.addEventListener('click', function(){
    active.style.display = 'block';
    more.style.display = 'none';

});

Close.addEventListener('click', function(){
    active.style.display = 'none';
    more.style.display = 'block';

});
