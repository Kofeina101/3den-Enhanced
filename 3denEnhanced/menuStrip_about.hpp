class ENH_About
{
	text = $STR_ENH_folder_about;
	items[] +=
	{
		"ENH_About_Forum",
		"ENH_About_Changelog",
		"ENH_About_Steam",
		"ENH_About_Translation",
		"ENH_About_FAQ",
		"ENH_About_Credits"
	};
};
class ENH_About_Forum
{
	text = $STR_ENH_about_forums;
	picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
	weblink = "https://forums.bistudio.com/topic/188312-3den-enhanced/";
	opensNewWindow = 1;
};
class ENH_About_Changelog: ENH_About_Forum
{
	text = $STR_ENH_about_changelog;
	weblink = "https://steamcommunity.com/sharedfiles/filedetails/changelog/623475643";
};
class ENH_About_Steam: ENH_About_Forum
{
	text = $STR_ENH_about_steam;
	weblink = "https://steamcommunity.com/sharedfiles/filedetails/?id=623475643";
};
class ENH_About_Translation: ENH_About_Forum
{
	text = $STR_ENH_about_translation;
	weblink = "https://github.com/RevoArma3/3den-Enhanced";
};
class ENH_About_FAQ: ENH_About_Forum
{
	text = $STR_ENH_about_FAQ;
	weblink = "https://forums.bohemia.net/forums/topic/188312-3den-enhanced/?do=findComment&comment=2984094";
};
class ENH_About_Credits: ENH_About_Forum
{
	text = $STR_ENH_about_credits;
	action = "findDisplay 313 createDisplay 'ENH_Credits'";
	weblink = "";
};