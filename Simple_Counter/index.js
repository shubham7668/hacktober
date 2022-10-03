let count = 0;
document.getElementById("decreasebtn").onclick = function(){
 count--;
 document.getElementById("counterlabel").innerText = count;
}

document.getElementById("increasebtn").onclick = function(){
    count++;
    document.getElementById("counterlabel").innerText = count;
}

document.getElementById("resetbtn").onclick = function(){
    count = 0;
    document.getElementById("counterlabel").innerText = count;
}
