type rect = {
  x: float,
  y: float,
  width: float,
  height: float,
  top: float,
  right: float,
  bottom: float,
  left: float,
};

[@bs.module "@reach/rect"]
external use: React.Ref.t(Js.Nullable.t('a)) => rect = "useRect";