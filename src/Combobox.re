[@bs.module "@reach/combobox"] [@react.component]
external make:
  (
    ~openOnFocus: option(bool)=?,
    ~onSelect: option(string => unit)=?,
    ~children: React.element
  ) =>
  React.element =
  "Combobox";

module Input = {
  type props = {
    .
    "selectOnClick": bool,
    "autocomplete": bool,
    "aria-label": option(string),
    "aria-labelledby": option(string),
    "style": option(ReactDOMRe.Style.t),
    "className": option(string),
  };
  [@bs.module "@reach/combobox"]
  external make: React.component(props) = "ComboboxInput";

  let makeProps =
      (
        ~selectOnClick: bool=false,
        ~autocomplete: bool=true,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~className: option(string)=?,
        ~ariaLabel: option(string)=?,
        ~ariaLabelledby: option(string)=?,
        (),
      ) => {
    "aria-label": ariaLabel,
    "aria-labelledby": ariaLabelledby,
    "style": style,
    "selectOnClick": selectOnClick,
    "autocomplete": autocomplete,
    "className": className,
  };
};

module Popover = {
  type props = {
    .
    "portal": bool,
    "aria-label": option(string),
    "aria-labelledby": option(string),
    "style": option(ReactDOMRe.Style.t),
    "className": option(string),
    "children": option(React.element),
  };
  [@bs.module "@reach/combobox"]
  external make: React.component(props) = "ComboboxPopover";

  let makeProps =
      (
        ~portal: bool=true,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~className: option(string)=?,
        ~ariaLabel: option(string)=?,
        ~ariaLabelledby: option(string)=?,
        ~children: option(React.element)=?,
        (),
      ) => {
    "aria-label": ariaLabel,
    "aria-labelledby": ariaLabelledby,
    "style": style,
    "portal": portal,
    "className": className,
    "children": children,
  };
};

module List = {
  [@bs.module "@reach/combobox"] [@react.component]
  external make:
    (~persistSelection: option(bool)=?, ~children: React.element) =>
    React.element =
    "ComboboxList";
};

module Option = {
  [@bs.module "@reach/combobox"] [@react.component]
  external make:
    (~value: string, ~children: option(React.element)=?) => React.element =
    "ComboboxOption";
};

module OptionText = {
  [@bs.module "@reach/combobox"] [@react.component]
  external make: unit => React.element = "ComboboxOptionText";
};