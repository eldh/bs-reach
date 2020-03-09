[%raw "require('@reach/combobox/styles.css')"];

[@react.component]
let make = () => {
  <Container>
    <Combobox>
      <Combobox.Input ariaLabel="Hi" />
      <Combobox.Popover ariaLabel="Hi">
        <Combobox.List>
          <Combobox.Option value="Apple" />
          <Combobox.Option value="Banana" />
          <Combobox.Option value="Orange" />
          <Combobox.Option value="Pineapple" />
          <Combobox.Option value="Kiwi" />
        </Combobox.List>
      </Combobox.Popover>
    </Combobox>
  </Container>;
};