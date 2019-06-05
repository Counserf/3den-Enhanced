class Display3DEN
{
	class ContextMenu: ctrlMenu
	{
		class Items
		{
			#include "contextMenu.hpp"
		};
	};
	class Controls
	{
		#include "statusbar.hpp"
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				#include "menuStrip_about.hpp"
				#include "menuStrip_tools.hpp"
				#include "menuStrip_help.hpp"
			};
		};
		//Make WEST, EAST and GUER category collapsed by default
		class PanelRight:ctrlControlsGroupNoScrollbars
		{
			class Controls
			{
				class PanelRightCreate: ctrlControlsGroupNoScrollbars
				{
					class Controls
					{
						class Create: ctrlControlsGroupNoScrollbars
						{
							class Controls
							{
                                class CreateObjectWEST: ctrlTree
                                {
                                    defaultItem[] = {};
                                };
                                class CreateObjectEAST: CreateObjectWEST
                                {
                                    defaultItem[] = {};
                                };
                                class CreateObjectGUER: CreateObjectWEST
                                {
                                    defaultItem[] = {};
                                };
							};	
						};
					};
				};
			};
		};
	};
};