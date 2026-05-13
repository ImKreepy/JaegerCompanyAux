#include "script_component.hpp"

class CfgPatches
{
	class ADDON {
        author = AUTHOR;
        //authors[] = {AUTHORS};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main","rhsgref_c_tohport_air"};
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class rhsgref_cdf_Mi35;
	class rhsgref_mi24g_base : rhsgref_cdf_Mi35
	{
		class textureSources
		{
			class standard;
			class riker: standard
			{
				displayName="Riker";
				author = "Joe Riker";
				textures[]=
				{
					QPATHTOF(data\riker\mi24sh_001_co.paa),
					QPATHTOF(data\riker\mi24sh_002_co.paa),
					QPATHTOF(data\riker\mi35_sh_co.paa)
				};
				/* factions[]=
				{
					rhs_faction_vvs_c, rhs_faction_vvs
				}; */
			};
		};
	};
};
