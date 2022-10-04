import React from 'react'

export default function About(props) {

  return (
    <div className={`my-5 container text-${props.theme==='light'?'dark':'light'}`}>
      <h1 className="mb-3">TextMania</h1>
      <div style={{fontSize:"20px"}}>
          TextMania is a tool which can be used to operate text i.e., perform many operations on text.
          <div className="my-5">
            For example:
            <ol>
                <li><b>Convert to Uppercase</b></li>
                <li><b>Convert to Lowercase</b></li>
                <li><b>Copy Text</b></li>
                <li><b>Remove Extra Spaces</b></li>
                <li><b>Clear Text</b></li>
                <li><b>Count number of characters in the text</b></li>
                <li><b>Count number of words in the text</b></li>
                <li><b>Average Read Time of the text</b></li>
            </ol>
          </div>
          <div>
            Moreover, a <b>dark mode</b> is also present, to provide convenience to users.
          </div>
          <div>
            This is a free website and can be used by anyone for their personal use.
          </div>
      </div>
    </div>
  )

}
