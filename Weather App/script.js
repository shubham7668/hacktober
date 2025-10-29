let lon, lat;
const temperature = document.querySelector(".temp");
const summary = document.querySelector(".summary");
const loc = document.querySelector(".location");
const icon = document.querySelector(".icon");
const kelvin = 273;

window.addEventListener("load", () => {
  if (navigator.geolocation) {
    navigator.geolocation.getCurrentPosition(
      (position) => {
        lon = position.coords.longitude;
        lat = position.coords.latitude;
        const api = "6d055e39ee237af35ca066f35474e9df";
        const base = `https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lon}&appid=${api}`;

        fetch(base)
          .then((response) => response.json())
          .then((data) => {
            if (temperature && summary && loc && icon) {
              temperature.textContent = Math.floor(data.main.temp - kelvin) + "°C";
              summary.textContent = data.weather[0].description;
              loc.textContent = `${data.name}, ${data.sys.country}`;
              const iconCode = data.weather[0].icon;
              icon.innerHTML = `<img src="https://openweathermap.org/img/wn/${iconCode}@2x.png" style='height:10rem'/>`;
            }
          })
          .catch((err) => {
            console.error("Error fetching weather data:", err);
            summary.textContent = "Unable to fetch weather data.";
          });
      },
      (error) => {
        console.error("Geolocation error:", error);
        loc.textContent = "Location access denied.";
      }
    );
  } else {
    loc.textContent = "Geolocation not supported.";
  }
});
