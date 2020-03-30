[@react.component]
let make = (~children) => {
  <div
    style={ReactDOMRe.Style.make(
      ~margin="auto",
      ~marginTop="20px",
      ~maxWidth="500px",
      ~padding="10px",
      (),
    )}>
    children
  </div>;
};