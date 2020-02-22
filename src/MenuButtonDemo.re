[%raw "require('@reach/menu-button/styles.css')"];
open MenuButton;
let buttonStyle =
  Css.(
    [
      unsafe("border", "none"),
      unsafe("color", "inherit"),
      unsafe("font", "inherit"),
      unsafe("textAlign", "inherit"),
      unsafe("WebkitFontSmoothing", "inherit"),
      unsafe("WebkitAppearance", "none"),
      lineHeight(`normal),
      background(`transparent),
      overflow(`visible),
      width(`auto),
      display(`flex),
      ...FocusVisible.focusStyle,
    ]
    |> style
  );
let listStyle =
  Css.(
    [
      borderColor(rgb(200, 200, 200)),
      color(rgb(0, 0, 0)),
      minWidth(`rem(12.)),
    ]
    |> style
  );
[@react.component]
let make = () => {
  let {FocusVisible.className, onFocus, onBlur} =
    FocusVisible.useFocusVisible(None);
  <Menu>
    <MenuButton.Button className={buttonStyle ++ className} onFocus onBlur>
      <img
        src="https://randomuser.me/api/portraits/women/53.jpg"
        className=Css.(
          [width(`px(50)), height(`px(50)), borderRadius(`percent(50.))]
          |> style
        )
      />
    </MenuButton.Button>
    <List className=listStyle>
      <Item onSelect={() => Js.log("Download")}>
        "Download"->React.string
      </Item>
      <Item onSelect={() => Js.log("Copy")}>
        "Create a Copy"->React.string
      </Item>
      <Item onSelect={() => Js.log("Mark as Draft")}>
        "Mark as Draft"->React.string
      </Item>
      <Item onSelect={() => Js.log("Delete")}> "Delete"->React.string </Item>
      <ExternalLink as_="a" href="https://reacttraining.com/workshops/">
        "Attend a Workshop"->React.string
      </ExternalLink>
    </List>
  </Menu>;
};