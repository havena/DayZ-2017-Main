class CfgPatches
{
	class ARP_ItemsCrate
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"ARP_items"};
	};
};
class cfgVehicles
{
	class ReammoBox;
	class ARP_ItemsCrate:ReammoBox
	{
		scope=2;
		accuracy=1000;
		displayName="ARP All Items Crate";
		model="\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		class TransportMagazines
		{
			class _xx_ARP_lance_grenade
			{
				Magazine="ARP_lance_grenade";
				count=25;
			};
			class _xx_ARP_plantemedicinale
			{
				Magazine="ARP_plantemedicinale";
				count=25;
			};
			class _xx_ARP_silencieux
			{
				Magazine="ARP_silencieux";
				count=25;
			};
			class _xx_ARP_viseurPR
			{
				Magazine="ARP_viseurPR";
				count=25;
			};
			class _xx_ARP_toleondulee
			{
				Magazine="ARP_toleondulee";
				count=25;
			};  
			class _xx_ARP_batteries
			{
				Magazine="ARP_batteries";
				count=25;
			};
            class _xx_ARP_ducttape
			{
				Magazine="ARP_ducttape";
				count=25;
			};
            class _xx_ARP_steelpipe
			{
				Magazine="ARP_steelpipe";
				count=25;
			};
            class _xx_ARP_wpnclnkit
			{
				Magazine="ARP_wpnclnkit";
				count=25;
			};
            class _xx_ARP_m16_bolt
			{
				Magazine="ARP_m16_bolt";
				count=25;
			}; 
            class _xx_ARP_m16_lower_receiver
			{
				Magazine="ARP_m16_lower_receiver";
				count=25;
			}; 
			class _xx_ARP_AK_armature
			{
				Magazine="ARP_AK_armature";
				count=25;
			}; 
			class _xx_ARP_AK_canon
			{
				Magazine="ARP_AK_canon";
				count=25;
			}; 
			class _xx_ARP_AK_crosse
			{
				Magazine="ARP_AK_crosse";
				count=25;
			}; 
			class _xx_ARP_Armature_2roues
			{
				Magazine="ARP_Armature_2roues";
				count=25;
			}; 
			class _xx_ARP_Armature_4roues
			{
				Magazine="ARP_Armature_4roues";
				count=25;
			}; 
			class _xx_ARP_batterie_vehicule
			{
				Magazine="ARP_batterie_vehicule";
				count=25;
			}; 
			class _xx_ARP_caoutchouc
			{
				Magazine="ARP_caoutchouc";
				count=25;
			}; 
			class _xx_ARP_chargeur_fusil_v
			{
				Magazine="ARP_chargeur_fusil_v";
				count=25;
			}; 
			class _xx_ARP_chargeur_pistol_v
			{
				Magazine="ARP_chargeur_pistol_v";
				count=25;
			}; 
			class _xx_ARP_digitale
			{
				Magazine="ARP_digitale";
				count=25;
			}; 
			class _xx_ARP_douille_vide
			{
				Magazine="ARP_douille_vide";
				count=25;
			}; 
			class _xx_ARP_exan
			{
				Magazine="ARP_exan";
				count=25;
			}; 
			class _xx_ARP_fils_elec
			{
				Magazine="ARP_fils_elec";
				count=25;
			}; 
			class _xx_ARP_GP_balles
			{
				Magazine="ARP_GP_balles";
				count=25;
			}; 
			class _xx_ARP_GP_balles_sub
			{
				Magazine="ARP_GP_balles_sub";
				count=25;
			}; 
			class _xx_ARP_GP_douille_metal
			{
				Magazine="ARP_GP_douille_metal";
				count=25;
			}; 
			class _xx_ARP_GP_poudre
			{
				Magazine="ARP_GP_poudre";
				count=25;
			}; 
			class _xx_ARP_graisse
			{
				Magazine="ARP_graisse";
				count=25;
			}; 
			class _xx_ARP_M1014_armature
			{
				Magazine="ARP_M1014_armature";
				count=25;
			};	
			class _xx_ARP_M1014_canon
			{
				Magazine="ARP_M1014_canon";
				count=25;
			};	
			class _xx_ARP_M1014_crosse
			{
				Magazine="ARP_M1014_crosse";
				count=25;
			};	
			class _xx_ARP_M16_armature
			{
				Magazine="ARP_M16_armature";
				count=25;
			};	
			class _xx_ARP_M16_canon
			{
				Magazine="ARP_M16_canon";
				count=25;
			};	
			class _xx_ARP_M4_armature
			{
				Magazine="ARP_M4_armature";
				count=25;
			};	
			class _xx_ARP_M4_canon
			{
				Magazine="ARP_M4_canon";
				count=25;
			};	
			class _xx_ARP_M4_crosse
			{
				Magazine="ARP_M4_crosse";
				count=25;
			};	
			class _xx_ARP_pistolet_armature
			{
				Magazine="ARP_pistolet_armature";
				count=25;
			};	
			class _xx_ARP_pistolet_canon
			{
				Magazine="ARP_pistolet_canon";
				count=25;
			};	
			class _xx_ARP_piece_acier
			{
				Magazine="ARP_piece_acier";
				count=25;
			};	
			class _xx_ARP_piece_metal
			{
				Magazine="ARP_piece_metal";
				count=25;
			};	
			class _xx_ARP_plaque_acier
			{
				Magazine="ARP_plaque_acier";
				count=25;
			};	
			class _xx_ARP_PP_balles
			{
				Magazine="ARP_PP_balles";
				count=25;
			};	
			class _xx_ARP_PP_balles_sub
			{
				Magazine="ARP_PP_balles_sub";
				count=25;
			};	
			class _xx_ARP_PP_douille_metal
			{
				Magazine="ARP_PP_douille_metal";
				count=25;
			};	
			class _xx_ARP_PP_poudre
			{
				Magazine="ARP_PP_poudre";
				count=25;
			};	
			class _xx_ARP_ressort
			{
				Magazine="ARP_ressort";
				count=25;
			};	
			class _xx_ARP_Saiga_armature
			{
				Magazine="ARP_Saiga_armature";
				count=25;
			};	
			class _xx_ARP_Saiga_canon
			{
				Magazine="ARP_Saiga_canon";
				count=25;
			};	
			class _xx_ARP_Saiga_crosse
			{
				Magazine="ARP_Saiga_crosse";
				count=25;
			};	
			class _xx_ARP_System_elec
			{
				Magazine="ARP_System_elec";
				count=25;
			};	
			class _xx_ARP_tole_blindee
			{
				Magazine="ARP_tole_blindee";
				count=25;
			};	
			class _xx_ARP_vis
			{
				Magazine="ARP_vis";
				count=25;
			};	
			class _xx_ARP_tube_metal
			{
				Magazine="ARP_tube_metal";
				count=25;
			}; 
			class _xx_ARP_PK_canon
			{
				Magazine="ARP_PK_canon";
				count=25;
			};
			class _xx_ARP_PK_trepied
			{
				Magazine="ARP_PK_trepied";
				count=25;
			};
			class _xx_ARP_PK_armature
			{
				Magazine="ARP_PK_armature";
				count=25;
			};
			class _xx_ARP_PK_crosse
			{
				Magazine="ARP_PK_crosse";
				count=25;
			};
			class _xx_ARP_M2_canon
			{
				Magazine="ARP_M2_canon";
				count=25;
			};
			class _xx_ARP_M2_poignee
			{
				Magazine="ARP_M2_poignee";
				count=25;
			};
			class _xx_ARP_M2_armature
			{
				Magazine="ARP_M2_armature";
				count=25;
			};
			class _xx_ARP_M2
			{
				Magazine="ARP_M2";
				count=25;
			};
			class _xx_ARP_socle_tournant
			{
				Magazine="ARP_socle_tournant";
				count=25;
			};
			class _xx_ARP_pale_helico
			{
				Magazine="ARP_pale_helico";
				count=25;
			};
			class _xx_ARP_canon_char
			{
				Magazine="ARP_canon_char";
				count=25;
			};
			class _xx_ARP_siege
			{
				Magazine="ARP_siege";
				count=25;
			};
			class _xx_ARP_chenille
			{
				Magazine="ARP_chenille";
				count=25;
			};
			class _xx_ARP_traction
			{
				Magazine="ARP_traction";
				count=25;
			};
			class _xx_ARP_derailleur
			{
				Magazine="ARP_derailleur";
				count=25;
			};
			class _xx_ARP_plante_grasse
			{
				Magazine="ARP_plante_grasse";
				count=25;
			};
			class _xx_ARP_salpetre
			{
				Magazine="ARP_salpetre";
				count=25;
			};
			class _xx_ARP_cordage
			{
				Magazine="ARP_cordage";
				count=25;
			};
			class _xx_ARP_phares
			{
				Magazine="ARP_phares";
				count=25;
			};
			class _xx_ARP_craft_plastique
			{
				Magazine="ARP_craft_plastique";
				count=25;
			};
			class _xx_ARP_mousse
			{
				Magazine="ARP_mousse";
				count=25;
			};
			class _xx_ARP_plomb
			{
				Magazine="ARP_plomb";
				count=25;
			};
			class _xx_ARP_chaine
			{
				Magazine="ARP_chaine";
				count=25;
			};
			class _xx_ARP_plastique
			{
				Magazine="ARP_plastique";
				count=25;
			};
			class _xx_ARP_mecanisme
			{
				Magazine="ARP_mecanisme";
				count=25;
			};
			class _xx_ARP_tanboxer_dirty
			{
				Magazine="ARP_tanboxer_dirty";
				count=25;
			};
			class _xx_ARP_bandana_black
			{
				Magazine="ARP_bandana_black";
				count=25;
			};
			class _xx_ARP_disque_frein
			{
				Magazine="ARP_bandana_black";
				count=25;
			};
			class _xx_ARP_acide
			{
				Magazine="ARP_bandana_black";
				count=25;
			};
			class _xx_ARP_processeur
			{
				Magazine="ARP_processeur";
				count=25;
			};
			class _xx_ARP_detcord
			{
				Magazine="ARP_detcord";
				count=25;
			};
			class _xx_ARP_laser
			{
				Magazine="ARP_laser";
				count=25;
			};
			class _xx_ARP_lentille
			{
				Magazine="ARP_lentille";
				count=25;
			};	
			class _xx_ARP_cannabis
			{
				Magazine="ARP_cannabis";
				count=25;
			};
			class _xx_ARP_culasse_rotative
			{
				Magazine="ARP_culasse_rotative";
				count=25;
			};
			class _xx_ARP_gameboy
			{
				Magazine="ARP_gameboy";
				count=25;
			};
		};
		class TransportWeapons
		{
			class _xx_ARP_CLP
			{
				weapon="ARP_CLP";
				count=25;
			}; 
			class _xx_ARP_kit_soudure
			{
				weapon="ARP_kit_soudure";
				count=25;
			};
			class _xx_ARP_PK_montage
			{
				weapon="ARP_PK_montage";
				count=25;
			};	
			 class _xx_ARP_playboy
			{
				weapon="ARP_playboy";
				count=25;
			};
			class _xx_ARP_newspaper
			{
				weapon="ARP_newspaper";
				count=25;
			};
			class _xx_ARP_picture_fam
			{
				weapon="ARP_picture_fam";
				count=25;
			};
			class _xx_ARP_vodka
			{
				weapon="ARP_vodka";
				count=25;
			};
			class _xx_ARP_suitcase_black
			{
				weapon="ARP_suitcase_black";
				count=25;
			};
			class _xx_ARP_letter_norm
			{
				weapon="ARP_letter_norm";
				count=25;
			}; 
			class _xx_ARP_dice
			{
				weapon="ARP_dice";
				count=25;
			};	
			class _xx_ARP_leaflet_wanted
			{
				weapon="ARP_leaflet_wanted";
				count=25;
			}; 		
			class _xx_ARP_cards
			{
				weapon="ARP_cards";
				count=25;
			};
			class _xx_ARP_cigarettes
			{
				weapon="ARP_cigarettes";
				count=25;
			};
			class _xx_ARP_ID
			{
				weapon="ARP_ID";
				count=25;
			};         
			class _xx_ARP_picture_gf
			{
				weapon="ARP_picture_gf";
				count=25;
			};
			class _xx_ARP_talky
			{
				weapon="ARP_talky";
				count=25;
			};
			class _xx_ARP_papier
			{
				weapon="ARP_papier";
				count=25;
			};
			class _xx_ARP_mouchoir
			{
				weapon="ARP_mouchoir";
				count=25;
			};
			class _xx_ARP_figatellu	
			{
				weapon="ARP_figatellu";
				count=25;
			};
			class _xx_ARP_joint
			{
				weapon="ARP_joint";
				count=25;
			};
			class _xx_ARP_filtre_cafe
			{
				weapon="ARP_filtre_cafe";
				count=25;
			};
		}; 
	};
};

