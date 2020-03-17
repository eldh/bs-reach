[%raw "require('@reach/slider/styles.css')"];
[@react.component]
let make = () => {
  <Container>
    <Slider.Input min={0} max={200} step={10}>
      <Slider.Track>
        <Slider.TrackHighlight />
        <Slider.Handle />
      </Slider.Track>
    </Slider.Input>
  </Container>;
};