class ENH_UnitTraits
{
	collapsed = 1;
	displayName = $STR_ENH_attributeCategory_unitTraits;
	class Attributes
	{
		class ENH_Medic
		{
			displayName = $STR_ENH_unitTraits_medic_displayName;
			tooltip = $STR_ENH_unitTraits_medic_tooltip;
			property = "ENH_unitTraits_medic";
			control = "Checkbox";
			expression = "_this setUnitTrait ['Medic',_value]";
			condition = "objectBrain";
			defaultValue = "_this getUnitTrait 'Medic'";
			typeName = "BOOL";
		};
		class ENH_Engineer: ENH_Medic
		{
			displayName = $STR_ENH_unitTraits_engineer_displayName;
			tooltip = $STR_ENH_unitTraits_engineer_tooltip;
			property = "ENH_unitTraits_engineer";
			expression = "_this setUnitTrait ['Engineer',_value]";
			defaultValue = "_this getUnitTrait 'Engineer'";
		};
		class ENH_ExplosiveSpecialist: ENH_Medic
		{
			displayName = $STR_ENH_unitTraits_explosiveSpecialist_displayName;
			tooltip = $STR_ENH_unitTraits_explosiveSpecialist_tooltip;
			property = "ENH_unitTrait_explosiveSpecialist";
			expression = "_this setUnitTrait ['ExplosiveSpecialist',_value]";
			defaultValue = "_this getUnitTrait 'ExplosiveSpecialist'";
		};
		class ENH_UAVHacker: ENH_Medic
		{
			displayName = $STR_ENH_unitTraits_UAVHacker_displayName;
			tooltip = $STR_ENH_unitTraits_UAVHacker_tooltip;
			property = "ENH_unitTrait_UAVHacker";
			expression = "_this setUnitTrait ['UAVHacker',_value]";
			defaultValue = "_this getUnitTrait 'UAVHacker'";
		};
		class ENH_Camouflage: ENH_Medic
		{
			displayName = $STR_ENH_camouflageCoef_displayName;
			tooltip = $STR_ENH_camouflageCoef_tooltip;
			property = "ENH_unitTraits_camouflage";
			control = "SliderCameraSpeedMult";
			expression = "_this setUnitTrait ['CamouflageCoef',_value]";
			defaultValue = "1";
			typeName = "NUMBER";
		};
		class ENH_AudibleCoef: ENH_Camouflage
		{
			displayName = $STR_ENH_audibleCoef_displayName;
         	tooltip = $STR_ENH_audibleCoef_tooltip;
			property = "ENH_unitTraits_audibleCoef";
			expression = "_this setUnitTrait ['AudibleCoef',_value]";
		};
      	class ENH_LoadCoef: ENH_Camouflage
      	{
         	displayName = $STR_ENH_loadCoef_displayName;
         	tooltip = $STR_ENH_loadCoef_tooltip;
         	property = "ENH_unitTraits_loadCoef";
         	expression = "_this setUnitTrait ['LoadCoef',_value]";
      	};
	};
};