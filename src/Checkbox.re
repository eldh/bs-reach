type checkedT = [ | `mixed | `true_ | `false_];
let convertCheckedVal =
  fun
  | `mixed => "mixed"
  | `true_ => true->Obj.magic
  | `false_ => false->Obj.magic;

module Mixed = {
  type props = {
    .
    "className": option(string),
    "style": option(ReactDOMRe.Style.t),
    "value": option(string),
    "checked": string,
    "onChange": option(ReactEvent.Form.t => unit),
  };

  [@bs.module "@reach/checkbox"]
  external make: React.component(props) = "MixedCheckbox";

  let makeProps =
      (
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~value: option(string)=?,
        ~checked: checkedT,
        ~onChange: option(ReactEvent.Form.t => unit)=?,
        (),
      ) => {
    "className": className,
    "style": style,
    "value": value,
    "onChange": onChange,
    "checked": checked->convertCheckedVal,
  };
};
module Custom = {
  type props = {
    .
    "className": option(string),
    "style": option(ReactDOMRe.Style.t),
    "value": option(string),
    "checked": string,
    "name": option(string),
    "disabled": option(bool),
    "defaultChecked": option(bool),
    "children": option(React.element),
    "onChange": option(ReactEvent.Form.t => unit),
  };

  [@bs.module "@reach/checkbox"]
  external make: React.component(props) = "CustomCheckbox";

  let makeProps =
      (
        ~className: option(string)=?,
        ~style: option(ReactDOMRe.Style.t)=?,
        ~value: option(string)=?,
        ~checked: checkedT,
        ~defaultChecked: option(bool)=?,
        ~name: option(string)=?,
        ~disabled: option(bool)=?,
        ~children: option(React.element)=?,
        ~onChange: option(ReactEvent.Form.t => unit)=?,
        (),
      ) => {
    "className": className,
    "style": style,
    "value": value,
    "name": name,
    "disabled": disabled,
    "defaultChecked": defaultChecked,
    "children": children,
    "onChange": onChange,
    "checked": checked->convertCheckedVal,
  };
};