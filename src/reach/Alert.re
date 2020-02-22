[@bs.deriving jsConverter]
type type_ = [ | [@bs.as "polite"] `polite | [@bs.as "assertive"] `assertive];

type props = {
  .
  "style": option(ReactDOMRe.Style.t),
  "className": option(string),
  "key": option(string),
  "type": string,
  "children": React.element,
};

[@bs.module "@reach/alert"] external make: React.component(props) = "default";

let makeProps =
    (
      ~type_: option(type_)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~className: option(string)=?,
      ~key: option(string)=?,
      ~children: React.element,
      (),
    ) => {
  "style": style,
  "type": type_->Belt.Option.getWithDefault(`polite)->type_ToJs,
  "className": className,
  "key": key,
  "children": children,
};