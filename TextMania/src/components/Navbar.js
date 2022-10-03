import React from 'react'
import PropTypes from 'prop-types'
import { Link } from "react-router-dom";

export default function Navbar(props) {

    return (
        <nav className={`navbar navbar-expand-lg navbar-${props.theme} bg-${props.theme}`} style={{border:"2px solid black"}}>
            <div className="container-fluid">
                <Link className="navbar-brand" to="/">{ props.title }</Link>
                <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                    <span className="navbar-toggler-icon"></span>
                </button>
                <div className="collapse navbar-collapse" id="navbarSupportedContent">
                    <ul className="navbar-nav me-auto mb-2 mb-lg-0">
                        <li className="nav-item">
                            <Link className="nav-link" aria-current="page" to="/">Home</Link>
                        </li>
                        <li className="nav-item">
                            <Link className="nav-link" to="/about">About</Link>
                        </li>
                    </ul>
                    <div className={`form-check form-switch text-${props.theme==='light'?'dark':'light'}`}>
                        <input onClick={props.handleThemeChange} className="form-check-input" type="checkbox" id="flexSwitchCheckDefault"/>
                        <label className="form-check-label" htmlFor="flexSwitchCheckDefault">{`Enable ${props.theme==='light'?'dark':'light'} Mode`}</label>
                    </div>
                </div>
            </div>
        </nav>
    )

}

Navbar.propTypes = {
    title: PropTypes.string.isRequired
}

Navbar.defaultProps = {
    title: "Set title"
}