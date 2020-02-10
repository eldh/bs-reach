module Imported = {
  [@bs.module "@reach/tooltip"] [@react.component]
  external make:
    (
      ~ariaLabel: string=?,
      ~style: Js.t({..})=?,
      ~className: string=?,
      ~id: string=?,
      ~label: string,
      ~children: React.element
    ) =>
    React.element =
    "default";

  [%raw "import('@reach/tooltip/styles.css')"];

  let defaultStyle = () =>
    Css.(
      [
        backgroundColor(`rgba((0, 0, 0, 0.75))),
        color(`rgb((255, 255, 255))),
        borderStyle(`none),
        borderRadius(`px(5)),
        paddingLeft(`px(10)),
        paddingRight(`px(10)),
        paddingTop(`px(5)),
        paddingBottom(`px(5)),
      ]
      |> List.map(important)
      |> style
    );
};

[@react.component]
let make =
    (
      ~ariaLabel: option(string)=?,
      ~style=?,
      ~className: string=Imported.defaultStyle(),
      ~id: option(string)=?,
      ~label: string,
      ~children: React.element,
    ) => {
  <Imported ?style className ?id label ?ariaLabel> children </Imported>;
};