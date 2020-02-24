module Link = {
  [@bs.module "@reach/skip-nav"] [@react.component]
  external make: (~children: React.element) => React.element = "SkipNavLink";
};
module Content = {
  [@bs.module "@reach/skip-nav"] [@react.component]
  external make: (~children: React.element) => React.element =
    "SkipNavContent";
};