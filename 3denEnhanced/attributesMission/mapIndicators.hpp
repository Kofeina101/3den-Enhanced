class ENH_MapIndicators
{
	collapsed = 1;
	displayName = $STR_ENH_attributeCategory_mapIndicators;
	class Attributes
	{
		class ENH_MapIndicators
		{
			displayName = $STR_ENH_attributeCategory_mapIndicators;
			property = "ENH_mapIndicators";
			control = "ENH_MapIndicators";
			expression =
			"\
				if (!is3DEN && !(_value isEqualTo [false,false,false,false]) && hasInterface) then\
				{\
					disableMapIndicators _value;\
				};\
			";
			defaultValue = "[false,false,false,false]";
		};
	};
};