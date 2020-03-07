// [%raw "require('@reach/checkbox/styles.css')"];
[@react.component]
let make = () => {
  let (checked, setChecked) = React.useState(() => `false_);

  <Container>
    <div>
      <label>
        <Checkbox.Mixed
          value="whatever"
          onChange={event => {
            setChecked(_ =>
              event->ReactEvent.Form.target##checked ? `true_ : `false_
            )
          }}
          checked
        />
        "I am feeling good today"->React.string
      </label>
      <label>
        <Checkbox.Mixed checked=`mixed />
        "Perma-mixed"->React.string
      </label>
      <div>
        <button onClick={_ => setChecked(_ => `mixed)}>
          "I'm not sure how I feel!"->React.string
        </button>
      </div>
    </div>
  </Container>;
};