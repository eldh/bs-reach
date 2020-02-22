[%raw "require('@reach/tooltip/styles.css')"];
[@react.component]
let make = () => {
  <div>
    <Tooltip label="Hey this is a tooltip">
      <span> <Button> "First"->React.string </Button> </span>
    </Tooltip>
    <Tooltip label="This is another tooltip">
      <span> <Button> "Second"->React.string </Button> </span>
    </Tooltip>
  </div>;
};