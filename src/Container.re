  [@react.component]
  let make = (~children) => {
    <div
      className=Css.(
        [
          margin(`auto),
          marginTop(`px(20)),
          maxWidth(`px(500)),
          padding2(~h=`zero, ~v=`px(10)),
        ]
        |> style
      )>
      children
    </div>;
  };
