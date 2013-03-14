class CfgPatches {

	class ARP_Items {
		units[] = {};
		weapons[] = {"ARP_CLP","ARP_kit_soudure","ARP_PK_montage",
		"ARP_playboy","ARP_newspaper","ARP_picture_fam","ARP_vodka","ARP_suitcase_black","ARP_letter_norm",
		"ARP_dice","ARP_leaflet_wanted","ARP_cards","ARP_cigarettes","ARP_ID","ARP_joint","ARP_figatellu","ARP_mouchoir",
		"ARP_papier","ARP_talky","ARP_picture_gf","ARP_filtre_cafe"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons"};
	};
};
class CfgMagazines
{
class CA_Magazine;
class ItemCoreDayZRP: CA_Magazine {

	scope = 2;
	count = 1;
	ammo = "";
	initSpeed = 0;
	sound[] = {};
  
class Library
  {
   libTextDesc = "Objet DayZRP";
   };
};
class ARP_lance_grenade: ItemCoreDayZRP
{
		scope=2;
		displayName="Lance-grenade pour fusil";
		picture="\arp_items\img\lance_grenade.paa";
};
class ARP_plantemedicinale: ItemCoreDayZRP
{
		scope=2;
		displayName="Plante medicinale";
		picture="\arp_items\img\plante_medicinale.paa";
};	
class ARP_silencieux: ItemCoreDayZRP
{
		scope=2;
		displayName="Silencieux";
		picture="\arp_items\img\Silencieux.paa";
};
class ARP_toleondulee: ItemCoreDayZRP
{
		scope=2;
		displayName="Tole ondulee";
		picture="\arp_items\img\toleondule.paa";
};
class ARP_viseurPR: ItemCoreDayZRP
{
		scope=2;
		displayName="Viseur Point Rouge";
		picture="\arp_items\img\viseur_PR.paa";
};
class ARP_batteries: ItemCoreDayZRP
{
		scope=2;
		displayName="Piles";
		picture="\arp_items\img\batteries.paa";
		modelmagazine = "\ARP_items\3d\PILES.p3d";
		model = "\ARP_items\3d\PILES.p3d";
		modelspecial = "\ARP_items\3d\PILES.p3d";
};
class ARP_ducttape: ItemCoreDayZRP
{
		scope=2;
		displayName="Ruban adhesif";
		picture="\arp_items\img\ducttape.paa";
};
class ARP_exan: ItemCoreDayZRP
{
		scope=2;
		displayName="Explosif";
		picture="\arp_items\img\exan.paa";
};
class ARP_firestarter: ItemCoreDayZRP
{
		scope=2;
		displayName="Pierre a feu";
		picture="\arp_items\img\firestarter.paa";
};
class ARP_steelpipe: ItemCoreDayZRP
{
		scope=2;
		displayName="Barre d'acier";
		picture="\arp_items\img\steelpipe.paa";
};
class ARP_wpnclnkit: ItemCoreDayZRP
{
		scope=2;
		displayName="Grand kit de montage";
		picture="\arp_items\img\wpnclnkit.paa";
};
class ARP_m16_bolt: ItemCoreDayZRP
{
		scope=2;
		displayName="Percuteur";
		picture="\arp_items\img\m16_bolt.paa";
};
class ARP_Armature_2roues: ItemCoreDayZRP
{
		scope=2;
		displayName="Cadre";
		picture="\arp_items\img\armature_2_roues.paa";
};
class ARP_AK_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour AK";
		picture="\arp_items\img\AK_armature.paa";
};
class ARP_AK_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour AK";
		picture="\arp_items\img\AK_canon.paa";
};
class ARP_AK_crosse: ItemCoreDayZRP
{
		scope=2;
		displayName="Crosse pour AK";
		picture="\arp_items\img\AK_crosse.paa";
};
class ARP_Armature_4roues: ItemCoreDayZRP
{
		scope=2;
		displayName="Chassis";
		picture="\arp_items\img\armature_4_roues.paa";
};
class ARP_batterie_vehicule: ItemCoreDayZRP
{
		scope=2;
		displayName="Batterie de voiture";
		picture="\arp_items\img\batterie.paa";
};
class ARP_digitale: ItemCoreDayZRP
{
		scope=2;
		displayName="Bouquet de digitale";
		picture="\arp_items\img\bouquet_digitales.paa";
};

class ARP_douille_vide: ItemCoreDayZRP
{
		scope=2;
		displayName="Douille de chasse vide";
		picture="\arp_items\img\douille_vide.paa";
};
class ARP_fils_elec: ItemCoreDayZRP
{
		scope=2;
		displayName="Fils electrique";
		picture="\arp_items\img\fils_electriques.paa";
};
class ARP_GP_balles: ItemCoreDayZRP
{
		scope=2;
		displayName="Grand pack de balles vides";
		picture="\arp_items\img\grand_pack_balle.paa";
};
class ARP_GP_balles_sub: ItemCoreDayZRP
{
		scope=2;
		displayName="Grand pack de balles subsoniques vides";
		picture="\arp_items\img\grand_pack_balle_subs.paa";
};
class ARP_GP_douille_metal: ItemCoreDayZRP
{
		scope=2;
		displayName="Grand pack de douilles metaliques vides";
		picture="\arp_items\img\GP_douille_metallique.paa";
};
class ARP_GP_poudre: ItemCoreDayZRP
{
		scope=2;
		displayName="Grand pack de poudre noire";
		picture="\arp_items\img\GP_poudre_noire.paa";
};
class ARP_graisse: ItemCoreDayZRP
{
		scope=2;
		displayName="Graisse";
		picture="\arp_items\img\graisse.paa";
};
class ARP_M1014_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour M1014";
		picture="\arp_items\img\m1014_armature.paa";
};
class ARP_M1014_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour M1014";
		picture="\arp_items\img\m1014_canon.paa";
};
class ARP_M1014_crosse: ItemCoreDayZRP
{
		scope=2;
		displayName="Crosse pour M1014";
		picture="\arp_items\img\m1014_crosse.paa";
};
class ARP_M16_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour M16";
		picture="\arp_items\img\m16_armature.paa";
};
class ARP_M16_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour M16";
		picture="\arp_items\img\m16_canon.paa";
};
class ARP_m16_lower_receiver: ItemCoreDayZRP
{
		scope=2;
		displayName="Crosse de M16";
		picture="\arp_items\img\m16_lower_receiver.paa";
};
class ARP_M4_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour M4";
		picture="\arp_items\img\m4_armature.paa";
};
class ARP_M4_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour M4";
		picture="\arp_items\img\m4_canon.paa";
};
class ARP_M4_crosse: ItemCoreDayZRP
{
		scope=2;
		displayName="Crosse pour M4";
		picture="\arp_items\img\m4_crosse.paa";
};
class ARP_pistolet_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour pistolet";
		picture="\arp_items\img\m9_armature.paa";
};
class ARP_pistolet_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour pistolet";
		picture="\arp_items\img\m9_canon.paa";
};
class ARP_chargeur_fusil_v: ItemCoreDayZRP
{
		scope=2;
		displayName="Chargeur pour fusil vide";
		picture="\arp_items\img\Chargeur_fusil_v.paa";
};
class ARP_chargeur_pistol_v: ItemCoreDayZRP
{
		scope=2;
		displayName="Chargeur pour pistolet vide";
		picture="\arp_items\img\Chargeur_pistolet_v.paa";
};
class ARP_caoutchouc: ItemCoreDayZRP
{
		scope=2;
		displayName="Morceaux de caoutchouc";
		picture="\arp_items\img\caoutchouc.paa";
};
class ARP_piece_metal: ItemCoreDayZRP
{
		scope=2;
		displayName="Pieces de metal";
		picture="\arp_items\img\piece_metal.paa";
};
class ARP_piece_acier: ItemCoreDayZRP
{
		scope=2;
		displayName="Pieces en acier";
		picture="\arp_items\img\piece_acier.paa";
};
class ARP_plaque_acier: ItemCoreDayZRP
{
		scope=2;
		displayName="Plaque en acier";
		picture="\arp_items\img\plaque_acier.paa";
};
class ARP_PP_balles: ItemCoreDayZRP
{
		scope=2;
		displayName="Petit pack de balles vides";
		picture="\arp_items\img\petit_pack_balle.paa";
};
class ARP_PP_balles_sub: ItemCoreDayZRP
{
		scope=2;
		displayName="Petit pack de balles subsoniques vides";
		picture="\arp_items\img\petit_pack_balle_subs.paa";
};
class ARP_PP_douille_metal: ItemCoreDayZRP
{
		scope=2;
		displayName="Petit pack de douilles metaliques vides";
		picture="\arp_items\img\PP_douille-metal.paa";
};
class ARP_PP_poudre: ItemCoreDayZRP
{
		scope=2;
		displayName="Petit pack de poudre noire";
		picture="\arp_items\img\PP_poudre_noire.paa";
};
class ARP_ressort: ItemCoreDayZRP
{
		scope=2;
		displayName="Ressort";
		picture="\arp_items\img\ressort.paa";
};
class ARP_Saiga_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour Saiga";
		picture="\arp_items\img\Saiga_armature.paa";
};
class ARP_Saiga_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour Saiga";
		picture="\arp_items\img\Saiga_canon.paa";
};
class ARP_Saiga_crosse: ItemCoreDayZRP
{
		scope=2;
		displayName="Crosse pour Saiga";
		picture="\arp_items\img\Saiga_crosse.paa";
};
class ARP_System_elec: ItemCoreDayZRP
{
		scope=2;
		displayName="Systeme electrique";
		picture="\arp_items\img\systeme_elec.paa";
};
class ARP_tole_blindee: ItemCoreDayZRP
{
		scope=2;
		displayName="Plaque blindee";
		picture="\arp_items\img\tole_blinde.paa";
};
class ARP_vis: ItemCoreDayZRP
{
		scope=2;
		displayName="Vis";
		picture="\arp_items\img\vis.paa";
};
class ARP_tube_metal: ItemCoreDayZRP
{
		scope=2;
		displayName="Tube en metal";
		picture="\arp_items\img\Tube_metal.paa";
};
class ARP_PK_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour PK";
		picture="\arp_items\img\PK_canon.paa";
};
class ARP_PK_trepied: ItemCoreDayZRP
{
		scope=2;
		displayName="Trepied pour PK";
		picture="\arp_items\img\PK_trepied.paa";
};
class ARP_PK_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour PK";
		picture="\arp_items\img\PK_armature.paa";
};
class ARP_PK_crosse: ItemCoreDayZRP
{
		scope=2;
		displayName="Crosse pour PK";
		picture="\arp_items\img\PK_crosse.paa";
};
class ARP_M2: ItemCoreDayZRP
{
		scope=2;
		displayName="M2";
		picture="\arp_items\img\M2.paa";
};
class ARP_M2_canon: ItemCoreDayZRP
{
		scope=2;
		displayName="Canon pour M2";
		picture="\arp_items\img\M2_canon.paa";
};
class ARP_M2_poignee: ItemCoreDayZRP
{
		scope=2;
		displayName="Poignee pour M2";
		picture="\arp_items\img\M2_poignee.paa";
};
class ARP_M2_armature: ItemCoreDayZRP
{
		scope=2;
		displayName="Armature pour M2";
		picture="\arp_items\img\M2_armature.paa";
};
class ARP_socle_tournant: ItemCoreDayZRP
{
		scope=2;
		displayName="Socle tournant";
		picture="\arp_items\img\socle_tournant.paa";
};
class ARP_pale_helico: ItemCoreDayZRP
{
		scope=2;
		displayName="Pale d'helicoptere endommagee";
		picture="\arp_items\img\pale_helico.paa";
};
class ARP_canon_char: ItemCoreDayZRP
{
		scope=2;
		displayName="Morceaux de canon pour blinde";
		picture="\arp_items\img\canon.paa";
};
class ARP_siege: ItemCoreDayZRP
{
		scope=2;
		displayName="Siege de voiture";
		picture="\arp_items\img\siege.paa";
};
class ARP_chenille: ItemCoreDayZRP
{
		scope=2;
		displayName="Tracto-pelle";
		picture="\arp_items\img\chenille.paa";
};
class ARP_traction: ItemCoreDayZRP
{
		scope=2;
		displayName="Systeme de traction";
		picture="\arp_items\img\traction.paa";
};
class ARP_derailleur: ItemCoreDayZRP
{
		scope=2;
		displayName="Derailleur pour velo";
		picture="\arp_items\img\derailleur.paa";
};
class ARP_plante_grasse: ItemCoreDayZRP
{
		scope=2;
		displayName="Plante grasse";
		picture="\arp_items\img\plante_grasse.paa";
};
class ARP_salpetre: ItemCoreDayZRP
{
		scope=2;
		displayName="Salpetre";
		picture="\arp_items\img\salpetre.paa";
};
class ARP_cordage: ItemCoreDayZRP
{
		scope=2;
		displayName="Cordage";
		picture="\arp_items\img\cordage.paa";
};
class ARP_phares: ItemCoreDayZRP
{
		scope=2;
		displayName="Phares";
		picture="\arp_items\img\phares.paa";
};
class ARP_craft_plastique: ItemCoreDayZRP
{
		scope=2;
		displayName="Plastique";
		picture="\arp_items\img\craft_plastique.paa";
};
class ARP_mousse: ItemCoreDayZRP
{
		scope=2;
		displayName="Lambeau de mousse";
		picture="\arp_items\img\mousse.paa";
};
class ARP_plomb: ItemCoreDayZRP
{
		scope=2;
		displayName="Plomb";
		picture="\arp_items\img\plomb.paa";
};
class ARP_chaine: ItemCoreDayZRP
{
		scope=2;
		displayName="Chaine";
		picture="\arp_items\img\chaine.paa";
};
class ARP_plastique: ItemCoreDayZRP
{
		scope=2;
		displayName="Sac plastique";
		picture="\arp_items\img\plastique.paa";
};
class ARP_mecanisme: ItemCoreDayZRP
{
		scope=2;
		displayName="Mecanisme d'arme";
		picture="\arp_items\img\mecanisme.paa";
};
class ARP_tanboxer_dirty: ItemCoreDayZRP
{
		scope=2;
		displayName="Slip sale";
		picture="\arp_items\img\tanboxer_dirty.paa";
};
class ARP_bandana_black: ItemCoreDayZRP
{
		scope=2;
		displayName="Morceaux de tissu";
		picture="\arp_items\img\bandana_black.paa";
};
class ARP_disque_frein: ItemCoreDayZRP
{
		scope=2;
		displayName="Disque de frein";
		picture="\arp_items\img\flywheel.paa";
};
class ARP_acide: ItemCoreDayZRP
{
		scope=2;
		displayName="Acide";
		picture="\arp_items\img\hydrochloric.paa";
};
class ARP_processeur: ItemCoreDayZRP
{
		scope=2;
		displayName="Processeur";
		picture="\arp_items\img\processeur.paa";
};
class ARP_detcord: ItemCoreDayZRP
{
		scope=2;
		displayName="Cable electrique";
		picture="\arp_items\img\detcord.paa";
};
class ARP_laser: ItemCoreDayZRP
{
		scope=2;
		displayName="Pointeur laser";
		picture="\arp_items\img\laser.paa";
};
class ARP_lentille: ItemCoreDayZRP
{
		scope=2;
		displayName="Lentille";
		picture="\arp_items\img\lentille.paa";
};
class ARP_cannabis: ItemCoreDayZRP
{
		scope=2;
		displayName="Plante de cannabis";
		picture="\arp_items\img\cannabis.paa";
};
class ARP_culasse_rotative: ItemCoreDayZRP
{
		scope=2;
		displayName="Culasse rotative";
		picture="\arp_items\img\Culasse_rotative.paa";
};
class ARP_gameboy: ItemCoreDayZRP
{
		scope=2;
		displayName="Gameboy";
		picture="\arp_items\img\gameboy.paa";
};
};
class CfgWeapons
{
class Default;
class ItemCore: Default {
}; 
class ARP_CLP: ItemCore
{
		scope=2;
		displayName="Colle";
		picture="\arp_items\img\CLP.paa";
};
class ARP_kit_soudure: ItemCore
{
		scope=2;
		displayName="Kit de soudure";
		picture="\arp_items\img\kit_soudure.paa";
};
class ARP_PK_montage: ItemCore
{
		scope=2;
		displayName="Petit kit de montage";
		picture="\arp_items\img\Petit_kit_MA.paa";
};
class ARP_playboy: ItemCore
{
		scope=2;
		displayName="Magazine Playboy";
		picture="\arp_items\img\playboy.paa";
};
class ARP_newspaper: ItemCore
{
		scope=2;
		displayName="Journal";
		picture="\arp_items\img\newspaper.paa";
};
class ARP_picture_fam: ItemCore
{
		scope=2;
		displayName="Photo de famille";
		picture="\arp_items\img\picture_fam.paa";
};
class ARP_vodka: ItemCore
{
		scope=2;
		displayName="Vodka";
		picture="\arp_items\img\vodka.paa";
};
class ARP_suitcase_black: ItemCore
{
		scope=2;
		displayName="Malette noire";
		picture="\arp_items\img\suitcase_black.paa";
};
class ARP_letter_norm: ItemCore
{
		scope=2;
		displayName="Lettre";
		picture="\arp_items\img\letter_norm.paa";
};
class ARP_dice: ItemCore
{
		scope=2;
		displayName="Des";
		picture="\arp_items\img\dice.paa";
};
class ARP_leaflet_wanted: ItemCore
{
		scope=2;
		displayName="Avis de recherche";
		picture="\arp_items\img\leaflet_wanted.paa";
};
class ARP_cards: ItemCore
{
		scope=2;
		displayName="Carte a jouer";
		picture="\arp_items\img\cards.paa";
};
class ARP_cigarettes: ItemCore
{
		scope=2;
		displayName="Cigarettes";
		picture="\arp_items\img\cigarettes.paa";
};
class ARP_ID: ItemCore
{
		scope=2;
		displayName="Carte d'identite";
		picture="\arp_items\img\ID_card.paa";
};
class ARP_picture_gf: ItemCore
{
		scope=2;
		displayName="Photo de copine";
		picture="\arp_items\img\picture_gf.paa";
};
class ARP_talky: ItemCore
{
		scope=2;
		displayName="Talky-walky defecteux";
		picture="\arp_items\img\2wayradio.paa";
};
class ARP_papier: ItemCore
{
		scope=2;
		displayName="Papier toilette";
		picture="\arp_items\img\papier.paa";
};
class ARP_mouchoir: ItemCore
{
		scope=2;
		displayName="Mouchoir usager";
		picture="\arp_items\img\mouchoir.paa";
};
class ARP_figatellu: ItemCore
{
		scope=2;
		displayName="Figatellu";
		picture="\arp_items\img\figatellu.paa";
};
class ARP_joint: ItemCore
{
		scope=2;
		displayName="Joint";
		picture="\arp_items\img\joint.paa";
};
class ARP_filtre_cafe: ItemCore
{
		scope=2;
		displayName="Filtre a cafe";
		picture="\arp_items\img\filtre_cafe.paa";
};
};
