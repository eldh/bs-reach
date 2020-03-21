
[@bs.module "@reach/slider"] [@react.component]
external make:
  (
    ~children: React.element,
    ~defaultValue: int=?,
    ~disabled: int=?,
    ~getValueText: unit => string=?,
    ~handleAlignment: string=?,
    ~max: int=?,
    ~min: int=?,
    ~name: string=?,
    ~onChange: int => unit=?,
    ~orientation: string=?,
    ~step: int=?,
    ~value: int=?
  ) =>
  React.element =
  "Slider";

module Input = {
  [@bs.module "@reach/slider"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~defaultValue: int=?,
      ~disabled: int=?,
      ~getValueText: unit => string=?,
      ~handleAlignment: string=?,
      ~max: int=?,
      ~min: int=?,
      ~name: int=?,
      ~onChange: int => unit=?,
      ~orientation: string=?,
      ~step: int=?,
      ~value: int=?
    ) =>
    React.element =
    "SliderInput";
};

module Track = {
  [@bs.module "@reach/slider"] [@react.component]
  external make: (~children: React.element) => React.element = "SliderTrack";
};

module TrackHighlight = {
  [@bs.module "@reach/slider"] [@react.component]
  external make: unit => React.element = "SliderTrackHighlight";
};

module Handle = {
  [@bs.module "@reach/slider"] [@react.component]
  external make: (unit) => React.element = "SliderHandle";
};

module Marker = {
  [@bs.module "@reach/slider"] [@react.component]
  external make: (~value: int) => React.element = "SliderMarker";
};