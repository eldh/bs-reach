type props = {
  .
  "isOpen": option(bool),
  "leastDestructiveRef": ReactDOMRe.Ref.t,
  "aria-label": option(string),
  "aria-labelledby": option(string),
  "style": option(ReactDOMRe.Style.t),
  "className": option(string),
  // "onDismiss": unit => unit,
  // "allowPinchZoom": option(bool),
  "children": React.element,
};

[@bs.module "@reach/alert-dialog"]
external make: React.component(props) = "AlertDialog";

let makeProps =
    (
      ~isOpen: option(bool)=?,
      ~leastDestructiveRef: ReactDOMRe.Ref.t,
      ~ariaLabel: option(string)=?,
      ~ariaLabelledby: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      // ~onDismiss: unit => unit,
      // Disable allowPinchZoom for now since it causes an annoying react dom warning
      // ~allowPinchZoom: option(bool)=?,
      ~children: React.element,
      (),
    ) => {
  "isOpen": isOpen,
  "leastDestructiveRef": leastDestructiveRef,
  "aria-label": ariaLabel,
  "aria-labelledby": ariaLabelledby,
  "style": style,
  "className": className,
  // "onDismiss": onDismiss,
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

  [@bs.module "@reach/alert-dialog"]
  external make: React.component(props) = "AlertDialogContent";

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

module Label = {
  [@bs.module "@reach/alert-dialog"] [@react.component]
  external make:
    (
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: React.element
    ) =>
    React.element =
    "AlertDialogLabel";
};
module Description = {
  [@bs.module "@reach/alert-dialog"] [@react.component]
  external make:
    (
      ~className: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~children: React.element
    ) =>
    React.element =
    "AlertDialogDescription";
};