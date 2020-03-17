  [@bs.module "./compat/tooltip"] [@react.component]
  external make:
    (
      ~ariaLabel: option(string)=?,
      ~style: option(Js.t({..}))=?,
      ~className: option(string)=?,
      ~id: option(string)=?,
      ~label: string,
      ~children: React.element
    ) =>
    React.element =
    "default";
