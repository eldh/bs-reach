[@bs.module "./compat/alert-dialog"] [@react.component]
external make:
  (
    ~isOpen: option(bool)=?,
    ~leastDestructiveRef: ReactDOMRe.Ref.t,
    ~ariaLabelledby: option(string)=?,
    ~style: option(ReactDOMRe.Style.t)=?,
    ~className: option(string)=?,
    ~onDismiss: option(unit => unit)=?,
    ~allowPinchZoom: option(bool)=?,
    ~children: React.element
  ) =>
  React.element =
  "AlertDialog";

module Content = {
  [@bs.module "./compat/alert-dialog"] [@react.component]
  external make:
    (
      ~ariaLabel: option(string)=?,
      ~ariaLabelledby: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~children: React.element
    ) =>
    React.element =
    "AlertDialogContent";
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