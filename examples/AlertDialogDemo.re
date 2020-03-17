[@react.component]
let make = () => {
  let (isOpen, setOpen) = React.useState(() => false);
  let cancelRef = React.useRef(Js.Nullable.null);
  <Container>
    <Button onClick={_ => setOpen(_ => true)}>
      "Open alert dialog"->React.string
    </Button>
    <AlertDialog
      isOpen
      leastDestructiveRef={ReactDOMRe.Ref.domRef(cancelRef)}>
      <AlertDialog.Label> "Please Confirm!"->React.string </AlertDialog.Label>
      <AlertDialog.Description>
        "Are you sure you want to delete something? This action is permanent, and we're totally not just flipping a field called \"deleted\" to \"true\" in our database, we're actually deleting something."
        ->React.string
      </AlertDialog.Description>
      <div className="alert-buttons">
        <button onClick={_ => setOpen(_ => false)}>
          "Yes, delete"->React.string
        </button>
        <button
          ref={ReactDOMRe.Ref.domRef(cancelRef)}
          onClick={_ => setOpen(_ => false)}>
          "Nevermind, don't delete."->React.string
        </button>
      </div>
    </AlertDialog>
  </Container>;
};