[@bs.module "./compat/listbox"] [@react.component]
external make:
  (
    ~arrow: option(bool)=?,
    ~button: option(React.element)=?,
    ~children: React.element,
    ~className: option(string)=?,
    ~defaultValue: option(string)=?,
    ~ariaLabelledby: option(string)=?,
    ~disabled: option(bool)=?,
    ~form: option(string)=?,
    ~name: option(string)=?,
    ~onChange: option(string => unit)=?,
    ~portal: option(bool)=?,
    ~required: option(bool)=?,
    ~value: option(string)=?
  ) =>
  React.element =
  "Listbox";

module Button = {
  [@bs.module "@reach/listbox"] [@react.component]
  external make:
    (
      ~className: option(string)=?,
      ~onFocus: option(ReactEvent.Focus.t => unit)=?,
      ~onBlur: option(ReactEvent.Focus.t => unit)=?,
      ~children: React.element
    ) =>
    React.element =
    "ListboxButton";
};

module Popover = {
  [@bs.module "@reach/listbox"] [@react.component]
  external make:
    (
      ~className: option(string)=?,
      ~portal: option(bool)=?,
      ~children: React.element
    ) =>
    React.element =
    "ListboxPopover";
};

module List = {
  [@bs.module "@reach/listbox"] [@react.component]
  external make:
    (~className: option(string)=?, ~children: React.element) => React.element =
    "ListboxList";
};
module Option = {
  [@bs.module "@reach/listbox"] [@react.component]
  external make:
    (
      ~value: option(string)=?,
      ~label: option(string)=?,
      ~disabled: option(bool)=?,
      ~className: option(string)=?,
      ~children: React.element
    ) =>
    React.element =
    "ListboxOption";
};

module Item = {
  [@bs.module "@reach/listbox"] [@react.component]
  external make:
    (
      ~className: option(string)=?,
      ~children: React.element,
      ~onSelect: unit => unit
    ) =>
    React.element =
    "ListboxItem";
};