[@react.component]
let make = (~className=?, ~onClick=?, ~children) => {
  <button ?className ?onClick> children </button>;
};