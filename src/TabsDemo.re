[%raw "require('@reach/tabs/styles.css')"];
[@react.component]
let make = () => {
  <Tabs>
    <Tabs.TabList>
      <Tabs.Tab> "One"->React.string </Tabs.Tab>
      <Tabs.Tab> "Two"->React.string </Tabs.Tab>
      <Tabs.Tab> "Three"->React.string </Tabs.Tab>
    </Tabs.TabList>
    <Tabs.TabPanels>
      <Tabs.TabPanel> <p> "one!"->React.string </p> </Tabs.TabPanel>
      <Tabs.TabPanel> <p> "two!"->React.string </p> </Tabs.TabPanel>
      <Tabs.TabPanel> <p> "three!"->React.string </p> </Tabs.TabPanel>
    </Tabs.TabPanels>
  </Tabs>;
};