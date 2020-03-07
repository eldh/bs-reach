// import {
//   Accordion,
//   AccordionItem,
//   AccordionButton,
//   AccordionPanel,
// } from "@reach/accordion";
// import "@reach/accordion/styles.css";

module Item = {
  [@bs.module "@reach/accordion"] [@react.component]
  external make: (~children: React.element) => React.element = "AccordionItem";
};

module Button = {
  [@bs.module "@reach/accordion"] [@react.component]
  external make: (~children: React.element) => React.element =
    "AccordionButton";
};

module Panel = {
  [@bs.module "@reach/accordion"] [@react.component]
  external make: (~children: React.element) => React.element =
    "AccordionPanel";
};

[@bs.module "@reach/accordion"] [@react.component]
external make:
  (
    ~multiple: option(bool)=?,
    ~collapsible: option(bool)=?,
    ~readOnly: option(bool)=?,
    ~index: option(int)=?,
    ~defaultIndex: option(int)=?,
    ~onChange: option(int => unit)=?,
    ~children: React.element
  ) =>
  React.element =
  "Accordion";