import React from 'react'
import {RiCoinsFill} from "react-icons/ri"
import {Link} from "react-router-dom"
import "./Navbar.css"
const Navbar = () => {
  return (
    <div className='Navbar'>
      <Link to='/'>
        <div className="header">
        <RiCoinsFill className='icon'/>
      <h1 className='heading'>Crypto Bazinga</h1>
      </div>
      </Link>
    </div>
  )
}

export default Navbar