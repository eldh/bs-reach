[@react.component]
let make = () => {
  let ref_ = React.useRef(Js.Nullable.null);
  let rect = Rect.use(ref_);
  <div>
    <div
      ref={ReactDOMRe.Ref.domRef(ref_)}
      contentEditable=true
      className=Css.(
        [
          display(`inlineBlock),
          padding(px(10)),
          border(px(1), `solid, `rgb((200, 200, 200))),
        ]
        |> style
      )
      dangerouslySetInnerHTML={"__html": "Edit this to change the size!"}
    />
    <pre> {rect->Obj.magic->Js.Json.stringifyWithSpace(2)->React.string} </pre>
  </div>;
};