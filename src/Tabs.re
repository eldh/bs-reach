[@bs.module "@reach/tabs"] [@react.component]
external make:
  (
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~onChange: int => unit=?,
    ~defaultIndex: int=?,
    ~index: int=?,
    ~children: React.element
  ) =>
  React.element =
  "Tabs";

module TabList = {
  [@bs.module "@reach/tabs"] [@react.component]
  external make:
    (~children: React.element, ~className: string=?) => React.element =
    "TabList";
};

module Tab = {
  [@bs.module "@reach/tabs"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Tab";
};

module TabPanels = {
  [@bs.module "@reach/tabs"] [@react.component]
  external make: (~children: React.element) => React.element = "TabPanels";
};

module TabPanel = {
  [@bs.module "@reach/tabs"] [@react.component]
  external make: (~children: React.element) => React.element = "TabPanel";
};
