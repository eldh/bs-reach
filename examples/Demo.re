[%raw "require('./Demo.css')"];

module Index = {
  let style = ReactDOMRe.Style.make(~marginRight="10px", ());
  [@react.component]
  let make = () => {
    <Container>
      <h1> "bs-reach"->React.string </h1>
      <p>
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
         "rect",
         "slider",
         "tabs",
         "tooltip",
       ]
       |> List.map(url => {
            <div key=url style>
              <a href={"/" ++ url}> url->React.string </a>
            </div>
          })
       |> Array.of_list
       |> React.array}
    </Container>;
  };
};

[@react.component]
let make = () => {
  let url = ReasonReact.Router.useUrl();
  switch (url.path) {
  | ["accordion"] => <AccordionDemo />
  | ["alert-dialog"] => <AlertDialogDemo />
  | ["alert"] => <AlertDemo />
  | ["checkbox"] => <CheckboxDemo />
  | ["combobox"] => <ComboboxDemo />
  | ["dialog"] => <DialogDemo />
  | ["disclosure"] => <DisclosureDemo />
  | ["menu-button"] => <MenuButtonDemo />
  | ["listbox"] => <ListboxDemo />
  | ["rect"] => <RectDemo />
  | ["slider"] => <SliderDemo />
  | ["tabs"] => <TabsDemo />
  | ["tooltip"] => <TooltipDemo />
  | _ => <Index />
  };
};