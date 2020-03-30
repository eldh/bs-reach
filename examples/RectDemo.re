[@react.component]
let make = () => {
  let ref_ = React.useRef(Js.Nullable.null);
  let rect = Rect.use(ref_);
  <div>
    <div
      ref={ReactDOMRe.Ref.domRef(ref_)}
      contentEditable=true
      style={ReactDOMRe.Style.make(
        ~display="inline",
        ~padding="10px",
        ~border="1px solid #ccc",
        (),
      )}
      dangerouslySetInnerHTML={"__html": "Edit this to change the size!"}
    />
    <pre>
      {rect->Obj.magic->Js.Json.stringifyWithSpace(2)->React.string}
    </pre>
  </div>;
};