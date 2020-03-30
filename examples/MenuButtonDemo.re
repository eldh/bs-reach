[%raw "require('@reach/menu-button/styles.css')"];
open MenuButton;
let listStyle =
  ReactDOMRe.Style.make(
    ~borderColor="rgb(200, 200, 200)",
    ~color="rgb(0, 0, 0)",
    ~minWidth="12rem",
    (),
  );
[@react.component]
let make = () => {
  <Container>
    <Menu>
      <MenuButton.Button> "Hit me"->React.string </MenuButton.Button>
      <List>
        <Item onSelect={() => Js.log("Download")}>
          "Download"->React.string
        </Item>
        <Item onSelect={() => Js.log("Copy")}>
          "Create a Copy"->React.string
        </Item>
        <Item onSelect={() => Js.log("Mark as Draft")}>
          "Mark as Draft"->React.string
        </Item>
        <Item onSelect={() => Js.log("Delete")}>
          "Delete"->React.string
        </Item>
        <ExternalLink as_="a" href="https://reacttraining.com/workshops/">
          "Attend a Workshop"->React.string
        </ExternalLink>
      </List>
    </Menu>
  </Container>;
};