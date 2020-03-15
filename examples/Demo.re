module Index = {
  Css.(global("body, *", [margin(px(0)), fontFamily("sans-serif")]));
  let className = Css.([marginRight(`px(10))] |> style);
  [@react.component]
  let make = () => {
    <div
      className=Css.(
        [
          margin(`auto),
          marginTop(`px(40)),
          maxWidth(`px(500)),
          padding(`px(10)),
        ]
        |> style
      )>
      <h1> "bs-reach"->React.string </h1>
      <p className=Css.([marginBottom(`px(20))] |> style)>
        "Simple examples of how to use bs-reach. For more documentation on Reach UI, visit the "
        ->React.string
        <a href="https://reacttraining.com/reach-ui">
          "official site"->React.string
        </a>
        "."->React.string
      </p>
      {[
         "accordion",
         "alert-dialog",
         "alert",
         "checkbox",
         "combobox",
         "dialog",
         "disclosure",
         "listbox",
         "menu-button",
         "tabs",
         "tooltip",
       ]
       |> List.map(url => {
            <div key=url className>
              <a href={"/" ++ url}> url->React.string </a>
            </div>
          })
       |> Array.of_list
       |> React.array}
    </div>;
  };
};

[@react.component]
let make = () => {
  let url = ReasonReact.Router.useUrl();
  <FocusVisible.Context>
    {switch (url.path) {
     | ["accordion"] => <AccordionDemo />
     | ["alert-dialog"] => <AlertDialogDemo />
     | ["alert"] => <AlertDemo />
     | ["checkbox"] => <CheckboxDemo />
     | ["combobox"] => <ComboboxDemo />
     | ["dialog"] => <DialogDemo />
     | ["disclosure"] => <DisclosureDemo />
     | ["menu-button"] => <MenuButtonDemo />
     | ["listbox"] => <ListboxDemo />
     | ["tabs"] => <TabsDemo />
     | ["tooltip"] => <TooltipDemo />
     | _ => <Index />
     }}
  </FocusVisible.Context>;
};