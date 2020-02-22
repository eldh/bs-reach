[%raw "require('@reach/dialog/styles.css')"];
module Custom = {
  [@react.component]
  let make = () => {
    let (isOpen, setOpen) = React.useState(() => false);
    <div>
      <Button onClick={_ => setOpen(_ => true)}>
        "Open custom dialog"->React.string
      </Button>
      <Dialog.Overlay isOpen onDismiss={() => setOpen(_ => false)}>
        <Dialog.Content ariaLabel="Aria label">
          "Custom dialog content"->React.string
          <br />
          <br />
          <Button onClick={_ => setOpen(_ => false)}>
            "Close"->React.string
          </Button>
        </Dialog.Content>
      </Dialog.Overlay>
    </div>;
  };
};

[@react.component]
let make = () => {
  let (isOpen, setOpen) = React.useState(() => false);
  <div>
    <Custom />
    <Button onClick={_ => setOpen(_ => true)}>
      "Open basic dialog"->React.string
    </Button>
    <Dialog
      isOpen onDismiss={() => setOpen(_ => false)} ariaLabel="Aria label">
      "Dialog content"->React.string
      <br />
      <br />
      <Button onClick={_ => setOpen(_ => false)}>
        "Close"->React.string
      </Button>
    </Dialog>
  </div>;
};