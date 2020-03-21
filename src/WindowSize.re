type windowSize = {
  width: int,
  height: int,
};

[@bs.module "@reach/window-size"]
external use: unit => windowSize = "useWindowSize";

module Component = {
  [@bs.module "@reach/window-size"] [@react.component]
  external make: (~children: windowSize => React.element) => React.element =
    "default";
};