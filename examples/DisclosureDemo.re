[@react.component]
let make = () => {
  <Container>
    <Disclosure>
      <Disclosure.Button>
        "Find out what lies beneath"->React.string
      </Disclosure.Button>
      <Disclosure.Panel>
        "Here I am! I am the buried treasure!"->React.string
      </Disclosure.Panel>
    </Disclosure>
  </Container>;
};