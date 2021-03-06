open ReactNative;

let component = ReasonReact.statelessComponent "ScheduleTitle";

let styles =
  StyleSheet.create
    Style.(
      {"title": style [fontFamily "open-sans-bold", fontSize 16., color "white", marginBottom 4.]}
    );

let make ::title _children => {
  ...component,
  render: fun _self => <Text style=styles##title value=title />
};
