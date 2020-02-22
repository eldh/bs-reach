type props = {
  .
  "isOpen": bool,
  "aria-label": option(string),
  "aria-labelledby": option(string),
  "style": option(ReactDOMRe.Style.t),
  "className": option(string),
  "onDismiss": unit => unit,
  // "allowPinchZoom": option(bool),
  "children": React.element,
};

[@bs.module "@reach/dialog"] external make: React.component(props) = "Dialog";

let makeProps =
    (
      ~isOpen: bool,
      ~ariaLabel: option(string)=?,
      ~ariaLabelledby: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~onDismiss: unit => unit,
      // Disable allowPinchZoom for now since it causes an annoying react dom warning
      // ~allowPinchZoom: option(bool)=?,
      ~children: React.element,
      (),
    ) => {
  "isOpen": isOpen,
  "aria-label": ariaLabel,
  "aria-labelledby": ariaLabelledby,
  "style": style,
  "className": className,
  "onDismiss": onDismiss,
  // "allowPinchZoom": allowPinchZoom,
  "children": children,
};

module Content = {
  type props = {
    .
    "aria-label": option(string),
    "aria-labelledby": option(string),
    "style": option(ReactDOMRe.Style.t),
    "className": option(string),
    "children": React.element,
  };

  [@bs.module "@reach/dialog"]
  external make: React.component(props) = "DialogContent";

  let makeProps =
      (
        ~ariaLabel: option(string)=?,
        ~ariaLabelledby: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~className: option(string)=?,
        ~children: React.element,
        (),
      ) => {
    "aria-label": ariaLabel,
    "aria-labelledby": ariaLabelledby,
    "style": style,
    "className": className,
    "children": children,
  };
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