class ENH_DoStop
{
	displayName = $STR_ENH_doStop_displayName;
	tooltip = $STR_ENH_doStop_tooltip;
	property = "ENH_doStop";
	control = "Checkbox";
	expression = "if (!is3DEN && _value) then {doStop _this}";
	condition = "objectBrain + objectVehicle";
	defaultValue = "false";
};