import React, { useEffect, useState } from 'react';
import {Routes,Route} from "react-router-dom"
import  Navbar  from './components/Navbar';
import Coins from './components/Coins';
import { getAPI } from './config/GetApi';
import Coin from './Pages/Coin';

function App() {
  const [coins,setCoins]=useState([])

    useEffect(()=>{
   
      getAPI("https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=10&page=1&sparkline=false").then((res)=>{
        console.log(res.data);
        setCoins(res.data)
    }).catch((error) => {
      console.log(error)
    })
  },[])
  

 return (
    <div className="App">
      <Navbar/>
<Routes>
<Route path="/" element={<Coins coins={coins}/>}/>
    <Route path="/coin" element={<Coins coins={coins}/>}/>
    <Route  path='/coin/:coinId' element={<Coin/>}/>
 

</Routes>
    </div>
  );
}

export default App;
