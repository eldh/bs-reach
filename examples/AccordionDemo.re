[%raw "require('@reach/accordion/styles.css')"];
[@react.component]
let make = () => {
  <Container>
    <Accordion>
      <Accordion.Item>
        <Accordion.Button>
          "Step 1: Do a thing"->React.string
        </Accordion.Button>
        <Accordion.Panel>
          "Here are some detailed instructions about doing a thing. I am very
          complex and probably contain a lot of content, so a user can hide or
          show me by clicking the button above."
          ->React.string
        </Accordion.Panel>
      </Accordion.Item>
      <Accordion.Item>
        <Accordion.Button>
          "Step 2: Do another thing"->React.string
        </Accordion.Button>
        <Accordion.Panel>
          "Here are some detailed instructions about doing yet another thing.
          There are a lot of things someone might want to do, so I am only going
          to talk about doing that other thing. I'll let my fellow accordion
          items go into detail about even more things."
          ->React.string
        </Accordion.Panel>
      </Accordion.Item>
    </Accordion>
  </Container>;
};