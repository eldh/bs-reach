[%raw "require('@reach/listbox/styles.css')"];

[@react.component]
let make = () => {
  let labelId = "taco-label-id";
  <Container>
    <VisuallyHidden id=labelId> "Choose a taco" </VisuallyHidden>
    <Listbox ariaLabelledby=labelId>
      <Listbox.Option value="default">
        "Choose a taco"->React.string
      </Listbox.Option>
      <Listbox.Option value="asada">
        "Carne Asada"->React.string
      </Listbox.Option>
      <Listbox.Option value="pollo" label="Pollo" disabled=true>
        "Pollo"->React.string
      </Listbox.Option>
      <div className=Css.([background(`hex("#ccc"))] |> style)>
        <Listbox.Option value="pastor" label="Pastor">
          "Pastor"->React.string
        </Listbox.Option>
      </div>
      <Listbox.Option value="lengua"> "Lengua"->React.string </Listbox.Option>
    </Listbox>
  </Container>;
};