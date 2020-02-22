module Index = {
  Css.(global("body, *", [margin(px(0)), fontFamily("sans-serif")]));
  let className = Css.([marginRight(`px(10))] |> style);
  [@react.component]
  let make = () => {
    <>
      {["menu-button", "tabs", "tooltip", "dialog"]
       |> List.map(url => {
            <div key=url className>
              <a href={"/" ++ url}> url->React.string </a>
            </div>
          })
       |> Array.of_list
       |> React.array}
    </>;
  };
};

[@react.component]
let make = () => {
  let url = ReasonReact.Router.useUrl();
  <FocusVisible.Context>
    {switch (url.path) {
     | ["menu-button"] => <MenuButtonDemo />
     | ["tooltip"] => <TooltipDemo />
     | ["tabs"] => <TabsDemo />
     | ["dialog"] => <DialogDemo />
     | _ => <Index />
     }}
  </FocusVisible.Context>;
};