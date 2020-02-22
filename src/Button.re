
[@react.component]
let make = (~className as c="", ~onClick=?, ~children) => {
  let {FocusVisible.className, onFocus, onBlur} =
    FocusVisible.useFocusVisible(None);
  <button className={className ++ c} ?onClick onFocus onBlur>
    children
  </button>;
};