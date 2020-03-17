[@bs.module "./compat/dialog"] [@react.component]
external make:
  (
    ~isOpen: bool,
    ~ariaLabel: option(string)=?,
    ~ariaLabelledby: option(string)=?,
    ~style: option(ReactDOMRe.Style.t)=?,
    ~className: option(string)=?,
    ~onDismiss: option(unit => unit)=?,
    ~allowPinchZoom: option(bool)=?,
    ~children: React.element
  ) =>
  React.element =
  "Dialog";

module Content = {
  [@bs.module "./compat/dialog"] [@react.component]
  external make:
    (
      ~ariaLabel: option(string)=?,
      ~ariaLabelledby: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~children: React.element
    ) =>
    React.element =
    "DialogContent";
};

module Overlay = {
  [@bs.module "@reach/dialog"] [@react.component]
  external make:
    (
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~initialFocusRef: option(React.Ref.t('a))=?,
      ~allowPinchZoom: option(bool)=?,
      ~isOpen: bool,
      ~onDismiss: unit => unit,
      ~children: React.element
    ) =>
    React.element =
    "DialogOverlay";
};