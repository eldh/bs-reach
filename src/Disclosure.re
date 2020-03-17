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

[@bs.module "./compat/disclosure"] [@react.component]
external make:
  (
    ~isOpen: option(bool)=?,
    ~defaultOpen: option(bool)=?,
    ~id: option(string)=?,
    ~onChange: option(unit => unit)=?,
    ~children: React.element
  ) =>
  React.element =
  "Disclosure";