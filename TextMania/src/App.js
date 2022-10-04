import './App.css';
import Navbar from './components/Navbar';
import Form from './components/Form';
import { useState } from 'react';
import About from './components/About';
import Footer from './components/Footer';
import Alert from './components/Alert';
import {
  BrowserRouter as Router,
  Switch,
  Route,
} from "react-router-dom";

function App() {

  const [theme, setTheme] = useState("light");
  const handleThemeChange = () => {
    if (theme === "light") {
      setTheme("dark");
      document.body.style.backgroundColor = "black";
      handleAlert("Dark Mode has been enabled !!", "success");
    }
    else {
      setTheme("light");
      document.body.style.backgroundColor = "white";
      handleAlert("Light Mode has been enabled !!", "success");
    }
  }

  const [text, setText] = useState("");

  const [alert, setAlert] = useState(null);
  const handleAlert = (message, type) => {
    setAlert({
      message,
      type
    })
    setTimeout(() => {
      setAlert(null);
    }, 1500)
  }
  
  return (
    <>
      <Router>
        <Navbar title="TextMania" theme={theme} handleThemeChange={handleThemeChange}/>
        <Alert alert={alert}/>
          <Switch>
            <Route exact path="/about">
              <About theme={theme} />
            </Route>
            <Route exact path="/">
              <Form heading="Enter text to be analyzed: " text={text} setText={setText} theme={theme} handleThemeChange={handleThemeChange} handleAlert={handleAlert}/>
            </Route>
          </Switch>
        <Footer theme={theme}/>
      </Router>
    </>
  );

}

export default App;
