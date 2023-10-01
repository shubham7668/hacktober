import React from 'react'

export default function Form(props) {

    const handleOnChange = (event) => {
        props.setText(event.target.value);
    }

    const handleUpClick = () => {
        props.setText(props.text.toUpperCase());
        props.handleAlert("Text Changed to Upperacase !!", "success");
    }

    const handleLowClick = () => {
        props.setText(props.text.toLowerCase());
        props.handleAlert("Text Changed to Loweracase !!", "success");
    }

    const handleClearClick = () => {
        props.setText("");
        props.handleAlert("Text Cleared !!", "success");
    }

    const handleRemoveSpaceClick = () => {
        props.setText(props.text.split(" ").filter(word => word.length !== 0).join(" "));
        props.handleAlert("Extra Spaces Removed !!", "success");
    }

    const handleCopyClick = () => {
        navigator.clipboard.writeText(props.text);
        props.handleAlert("Text Copied to ClipBoard !!", "success");
    }

    const myStyle = {
        color:`${props.theme==='light'?'black':'white'}`,
        backgroundColor:`${props.theme==='light'?'white':'black'}`,
    }

    return (
        <>
            <div className={`my-5 container text-${props.theme==='light'?'dark':'light'}`}>
                <label htmlFor="textBox" className="form-label"><h1>{ props.heading }</h1></label>
                <textarea className="form-control mt-3" style={myStyle} value={ props.text } onChange={ handleOnChange } id="textBox" rows="10"></textarea>
                <button disabled={props.text.length === 0} className="btn btn-primary my-2" onClick={ handleUpClick }>Convert to Uppercase</button>
                <button disabled={props.text.length === 0} className="btn btn-success mx-3 my-2" onClick={ handleLowClick }>Convert to Lowercase</button>
                <button disabled={props.text.length === 0} className="btn btn-secondary my-2" onClick={ handleCopyClick }>Copy Text</button>
                <button disabled={props.text.length === 0} className="btn btn-danger mx-3 my-2" onClick={ handleRemoveSpaceClick }>Remove Extra Spaces</button>
                <button disabled={props.text.length === 0} className="btn btn-info my-2" onClick={ handleClearClick }>Clear Text</button>
            </div>
            <div className={`container text-${props.theme==='light'?'dark':'light'}`} style={{fontSize:"20px"}}>
                <h1 className='my-3'>Text Specifications: </h1>
                <p>Total number of Words in your text: { props.text.split(/\s+/).filter(word => word.length !== 0).length }</p>
                <p>Total number of Characters in your text: { props.text.length }</p>
                <p>Average Read Time in Minutes: { 0.008 * props.text.split(/\s+/).filter(word => word.length !== 0).length }</p>
            </div>
        </>
    )

}
