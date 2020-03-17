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
  [@bs.module "./compat/combobox"] [@react.component]
  external make:
    (
      ~selectOnClick: option(bool)=?,
      ~autocomplete: option(bool)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~ariaLabel: option(string)=?,
      ~ariaLabelledby: option(string)=?
    ) =>
    React.element =
    "ComboboxInput";
};

module Popover = {
  [@bs.module "./compat/combobox"] [@react.component]
  external make:
    (
      ~portal: option(bool)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~ariaLabel: option(string)=?,
      ~ariaLabelledby: option(string)=?,
      ~children: option(React.element)=?
    ) =>
    React.element =
    "ComboboxPopover";
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