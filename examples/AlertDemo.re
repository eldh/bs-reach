[@react.component]
let make = () => {
  let (messages, setMessages) = React.useState(_ => [||]);
  <Container>
    <button
      onClick={_ => {
        setMessages(prevMessages =>
          prevMessages->Belt.Array.concat([|Js.Date.make()|])
        );
        Js.Global.setTimeout(
          () => {
            setMessages(prev =>
              prev->Belt.Array.slice(~offset=1, ~len=prev->Belt.Array.length)
            )
          },
          5000,
        )
        ->ignore;
      }}>
      "Add a message"->React.string
    </button>
    <div>
      {messages
       ->Belt.Array.map(time =>
           <Alert type_=`assertive key={time->Js.Date.getTime->Js.Float.toString}>
             {("Message: " ++ time->Js.Date.getTime->Js.Float.toString)
              ->React.string}
           </Alert>
         )
       ->React.array}
    </div>
  </Container>;
};