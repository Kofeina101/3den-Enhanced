/*
   Author: R3vo

   Date: 2020-02-03

   Description:
   Toggles all disable AI attribute on/off.

   Parameter(s):
   -

   Returns:
   BOOLEAN: true
*/

if (isNil "ENH_attribute_disableAI_state") then 
{ 
  ENH_attribute_disableAI_state = false; 
}
else
{
  ENH_attribute_disableAI_state = !ENH_attribute_disableAI_state;
};

collect3DENHistory
{
  { 
    private _entity = _x; 
    { 
      private _attributeName = "ENH_disableAI_" + _x;
      _entity set3DENAttribute [_attributeName,ENH_attribute_disableAI_state]; 
    } forEach ["move","target","cover","autotarget","anim","FSM","aimingError","teamswitch","suppression","checkVisible","autocombat","path","mineDetection","weaponAim","NVG","lights","radioProtocol"]; 
  } forEach get3DENSelected "Object";
};

[
	format
	[
		localize "STR_ENH_toggleAIFeatures_notification",
		[localize "STR_ENH_disabled",localize "STR_ENH_enabled"] select ENH_attribute_disableAI_state
	]
] call BIS_fnc_3DENNotification;

true