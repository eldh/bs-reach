module Index = {
  let className = Css.([marginRight(`px(10))] |> style);
  [@react.component]
  let make = () => {
    <>
      {["menu-button", "dialog", "tooltip"]
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
  
  switch (url.path) {
  | ["menu-button"] => <MenuButtonDemo />
  | _ => <Index />
  };
};