module Menu = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (~className: string=?, ~children: React.element) => React.element =
    "Menu";
};

module Button = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~onFocus: ReactEvent.Focus.t => unit=?,
      ~onBlur: ReactEvent.Focus.t => unit=?,
      ~children: React.element
    ) =>
    React.element =
    "MenuButton";
};

module List = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (~className: string=?, ~children: React.element) => React.element =
    "MenuList";
};

module Item = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~children: React.element,
      ~onSelect: unit => unit
    ) =>
    React.element =
    "MenuItem";
};

module ExternalLink = {
  [@bs.module "@reach/menu-button/dist"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~children: React.element,
      ~as_: string=?,
      ~target: string=?,
      ~href: string
    ) =>
    React.element =
    "MenuLink";
};
