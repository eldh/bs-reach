type onFocus = ReactEvent.Focus.t => unit;
type onBlur = ReactEvent.Focus.t => unit;

type focusVisibleProps = {
  onFocus,
  onBlur,
  [@bs.as "data-focus-visible"]
  dataProp: bool,
  className: string,
};

type useFocusInput = {
  onFocus,
  onBlur,
};

[@bs.module "./FocusVisible.jsx"]
external useFocusVisible_: option(useFocusInput) => focusVisibleProps =
  "useFocusVisible";

module Context = {
  [@bs.module "./FocusVisible.jsx"] [@react.component]
  external make: (~children: React.element) => React.element =
    "FocusVisibleManager";
};

let useFocusVisible = i => {
  let rawProps = useFocusVisible_(i);
  {...rawProps, className: rawProps.dataProp ? " data-focus-visible " : ""};
};

let focusStyle =
  Css.[
    focus([outlineStyle(`none)]),
    selector(
      "&.data-focus-visible",
      [unsafe("filter", "drop-shadow(0px 0px 6px rgb(0,93,225))")],
    ),
  ];