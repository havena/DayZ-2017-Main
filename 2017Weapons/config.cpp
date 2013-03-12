#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7


class CfgPatches
{
	class 2017Weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
	};
};


class CfgAmmo {
	class Default;	// External class reference
	class BulletCore;	// External class reference
	class BulletBase : BulletCore {	};


	class B_762x51_Ball: BulletBase  {};
	
	class VIL_Para_Ball : BulletBase {
		hit = 8;
		typicalspeed = 370;
		cost = 5;
	};
	class vil_FR_Ball : B_762x51_Ball{
		hit = 11;
		typicalspeed = 750;
		airFriction = -0.001050;
		visibleFire = 18;
		audibleFire = 28;
	};	
};


class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine : Default {};
	class mosin_bullet : CA_Magazine {
		scope = public;
		displayName = "Mosin Bullet";
		model = "\2017Weapons\bullet";
		ammo = "VIL_FR_Ball";
		count = 1;
		initSpeed = 800;
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		};
		
		class 5Rnd_mosin_bullet : CA_Magazine {
		scope = public;
		displayName = "Mosin Bullet";
		model = "\2017Weapons\bullet";
		ammo = "VIL_FR_Ball";
		count = 5;
		initSpeed = 800;
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		};
		
	class 8Rnd_TT : CA_Magazine {
		scope = 2;
		displayName = "Tokarev magazine";
		type = 16;
		ammo = "vil_PARA_Ball";
		count = 8;
		initSpeed = 420;
		picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";				
		};
		
	class 15Rnd_556x45_Stanag_tapedmags: CA_Magazine {
			scope = 2;
			displayName = "15 Rnd Taped Stanag";
			ammo = "B_556x45_Ball";
			count = 15;
			initSpeed = 930;
			type = "2*		256";
			tracersEvery = 0;
			descriptionShort = "Calibre: 5,56x45 mm NATO <br/>60 Rounds, duct-taped<br/>Used in: M249 SAW, M4A1, M16A4";
			picture = "\2017Weapons\data\double_ca.paa";
	};
};
class Mode_SemiAuto {};

class Mode_Burst : Mode_SemiAuto {};
	
class Mode_FullAuto : Mode_SemiAuto {};

class cfgWeapons {
	class Default;	// External class reference
	class PistolCore;	// External class reference
	class RifleCore;	// External class reference
	class Rifle ;
	class M4A1;
	class M16A2;
	class AK74 : Rifle {};
	class Mosin38 : AK74 {
		scope = 2;
		model = "\2017Weapons\mosin38";
		picture = "\2017Weapons\text\mosin.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName ="Mosin 1938";
		value = 1;
		opticsZoomMin = 0.27;
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		opticsZoomMax = 0.42;
		modes[] = {"Single"};
		magazines[] = {"5Rnd_mosin_bullet", "mosin_bullet"};
	class Single : Mode_SemiAuto {
		sound[] = {"\2017Weapons\mosin.wav", 10.0, 1};
		recoil = "assaultRifleBase";
		recoilProne = "assaultRifleBase";
		reloadTime = 2;
		dispersion = 0.0011;
		aiRateOfFire = 10;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 10;
		midRangeProbab = 0.5;
		maxRange = 40;
		maxRangeProbab = 0.04;
		};		
		class Library
		{
			libTextDesc = "Mosin Nagant";
		};
			descriptionShort = "The Mosin�Nagant 1938 is a bolt-action military rifle. This is the carbine version based on the M1891/30 design.";
		};

	class Pistol : PistolCore {};
	class HandGunBase : Rifle {};
	class Makarov : Pistol {};
	class Tokarev : makarov {
		scope = 2;
		model = "\2017Weapons\vil_tetetka";
		displayName = "TT";
		dispersion = 0.005;
		magazines[] = {"8Rnd_TT"};
		class Library {
			libTextDesc = "TT-30 Tokarev pistol";
		};	
			descriptionShort = "The TT-30 Tokarev self-loading pistol is a Russian semi-automatic weapon. It was developed in the early 1930s by Fedor Tokarev as a service pistol for the Soviet military to replace the Nagant M1895 revolver that had been in use since Tsarist times. Able to withstand tremendous abuse, large numbers of the TT-33 were produced during World War II and well into the 1950s.";		
	};
	class M16_FlashLight: M16A2
	{
	
	class FlashLight
		{
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
			
		scope = 2;
		picture = "\2017Weapons\Data\m16_ca.paa";
		model = "\2017Weapons\M16_proxy";
		selectionFireAnim = "zasleh";
		displayName = "Rusty M16A2";
	magazines[] = {"15Rnd_556x45_Stanag_tapedmags"};
	class Library
		{
			libTextDesc = "M16 Rifle with makeshift FlashLight mount.";
		};		
	};
	
	class M4_FlashLight: M4A1
	{
					
		scope = 2;
		model = "\2017Weapons\M4_ironsight";
		selectionFireAnim = "zasleh";
		magazines[] = {"15Rnd_556x45_Stanag_tapedmags"};
		picture = "\2017Weapons\Data\m4a1_ca.paa";
		displayName = "Rusty M4A1";
		class FlashLight
		{
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
					
		class Library
		{
			libTextDesc = "M4 Rifle with makeshift FlashLight mount";
		};
	};
};