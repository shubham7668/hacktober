button = document.querySelectorAll("li");
button.forEach(function (btn) {
  btn.onclick = () => {
    for (i = 0; i < button.length; i++) {
      button[i].classList.remove("active");
    }
    btn.classList.add("active");

    item = document.querySelectorAll(".item");

    for (j = 0; j < item.length; j++) {
      item[j].classList.add("hide");
    }
    let show = document.getElementsByClassName(btn.innerText);
    for (s = 0; s < show.length; s++) {
      show[s].classList.remove("hide");
    }
    if (btn.innerText == "All") {
      for (j = 0; j < item.length; j++) {
        item[j].classList.remove("hide");
      }
    }
  };
});
