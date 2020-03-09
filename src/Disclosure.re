module Button = {
  [@bs.module "@reach/disclosure"] [@react.component]
  external make: (~children: option(React.element)=?) => React.element =
    "DisclosureButton";
};

module Panel = {
  [@bs.module "@reach/disclosure"] [@react.component]
  external make: (~children: option(React.element)=?) => React.element =
    "DisclosurePanel";
};
type props = {
  .
  "open": option(bool),
  "defaultOpen": option(bool),
  "id": option(string),
  "onChange": option(unit => unit),
  "children": React.element,
};

[@bs.module "@reach/disclosure"]
external make: React.component(props) = "Disclosure";

let makeProps =
    (
      ~isOpen: option(bool)=?,
      ~defaultOpen: option(bool)=?,
      ~id: option(string)=?,
      ~onChange: option(unit => unit)=?,
      ~children: React.element,
      (),
    ) => {
  "open": isOpen,
  "defaultOpen": defaultOpen,
  "id": id,
  "onChange": onChange,
  "children": children,
};