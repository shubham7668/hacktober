import React from 'react'

export default function Footer(props) {

    const myStyle = {
        color:`${props.theme==='light'?'#212529':'white'}`,
        backgroundColor:`${props.theme==='light'?'white':'#212529'}`,
        fontSize:"18px",
        width:"100%",
        bottom:"0",
        borderTop:"2px solid black"
    }

    return (
        <div className="d-flex justify-content-center footer mt-5" style={myStyle}>
            <div className="my-3">
                <div>
                    Made with &#10084; by PRANJAL BARNWAL
                </div>
                <div style={{paddingLeft:"35px"}}>
                    &#169; 2022 All Rights Reserved
                </div>
            </div>
        </div>
    )
    
}
