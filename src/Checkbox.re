module Mixed = {
  type checkedT = [ | `mixed | `true_ | `false_];
  type props = {
    .
    "className": option(string),
    "style": option(ReactDOMRe.Style.t),
    "value": option(string),
    "checked": string,
    "onChange": option(ReactEvent.Form.t => unit),
  };
  let convertCheckedVal =
    fun
    | `mixed => "mixed"
    | `true_ => true->Obj.magic
    | `false_ => false->Obj.magic;

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