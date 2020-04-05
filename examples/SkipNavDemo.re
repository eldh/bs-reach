[%raw "require('@reach/skip-nav/styles.css')"];

[@react.component]
let make = () => {
  <>
    <SkipNav.Link> "Skip to content"->React.string </SkipNav.Link>
    <nav>
      <ul>
        <li> <a href="#"> "Menu item 1"->React.string </a> </li>
        <li> <a href="#"> "Menu item 2"->React.string </a> </li>
        <li> <a href="#"> "Menu item 3"->React.string </a> </li>
        <li> <a href="#"> "Menu item 4"->React.string </a> </li>
        <li> <a href="#"> "Menu item 5"->React.string </a> </li>
        <li> <a href="#"> "Menu item 6"->React.string </a> </li>
        <li> <a href="#"> "Menu item 7"->React.string </a> </li>
        <li> <a href="#"> "Menu item 8"->React.string </a> </li>
      </ul>
    </nav>
    <SkipNav.Content>
      <div>
        "main content"->React.string
        <br />
        <button onClick={_ => Js.log("Important message")}>
          "Button which logs a message to console"->React.string
        </button>
      </div>
    </SkipNav.Content>
  </>;
};