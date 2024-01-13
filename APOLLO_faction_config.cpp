class cfgPatches
{
  class APOLLO_APOLLO_Systems
  {
    units[]={"APOLLO_Guard","APOLLO_Field_Tech","APOLLO_Demolitions","APOLLO_Van_Transport","APOLLO_Van_Cargo","APOLLO_Van_Services"};
    weapons[]={"APOLLO_CUP_arifle_ACR_DMR_blk_556_Aegis_optic_ACOG","APOLLO_CUP_arifle_G36C_VFG_Carry_CUP_optic_G36Optics15x_3D","APOLLO_CUP_arifle_XM8_Compact"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_medical_treatment","ace_microdagr","ace_hearing","ace_explosives","ace_captives","A3_Weapons_F","CUP_Weapons_NVG","CUP_Weapons_ACR","A3_Aegis_Characters_F_Aegis_Vests","USP_Gear_IHPS","Characters_f_lxWS","ace_field_rations","A3_Aegis_Weapons_F_Aegis_Items","CUP_Weapons_G36","CUP_Creatures_Military_USArmy","ace_trenches","ace_marker_flags","ace_tagging","CUP_Weapons_XM8","Characters_f_lxWS_headgear","A3_Aegis_Characters_F_Aegis"};
  };
};

class cfgFactionClasses
{
  class APOLLO_APOLLO_Systems
  {
    icon="";
    displayName="APOLLO Systems";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class CUP_arifle_ACR_DMR_blk_556;
  class CUP_arifle_G36C_VFG_Carry;
  class CUP_arifle_XM8_Compact;

  class APOLLO_CUP_arifle_ACR_DMR_blk_556_Aegis_optic_ACOG: CUP_arifle_ACR_DMR_blk_556
  {
    displayName="ACR DMR (Black, 5.56x45)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="Aegis_optic_ACOG";
      };
    };
  };

  class APOLLO_CUP_arifle_G36C_VFG_Carry_CUP_optic_G36Optics15x_3D: CUP_arifle_G36C_VFG_Carry
  {
    displayName="G36C (Carry handle)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="CUP_optic_G36Optics15x_3D";
      };
    };
  };

  class APOLLO_CUP_arifle_XM8_Compact: CUP_arifle_XM8_Compact
  {
    displayName="XM8 Compact";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class B_ION_soldier_AR_lxWS;
  class B_ION_shot_lxWS;
  class B_CivilianBackpack_01_Everyday_Black_F;
  class B_A_Soldier_Exp_F;
  class CUP_B_USPack_Black;
  class C_Van_02_transport_F;
  class C_Van_02_vehicle_F;
  class C_Van_02_service_F;

  class APOLLO_Guard: B_ION_soldier_AR_lxWS
  {
    faction="APOLLO_APOLLO_Systems";
    side=1;
    displayName="Guard";
    uniformClass="USP_G3F_MCA";
    weapons[]={"APOLLO_CUP_arifle_ACR_DMR_blk_556_Aegis_optic_ACOG","Put","Throw"};
    respawnWeapons[]={"APOLLO_CUP_arifle_ACR_DMR_blk_556_Aegis_optic_ACOG","Put","Throw"};
    items[]={"ACE_tourniquet","ACE_tourniquet","ACE_microDAGR","ACE_epinephrine","ACE_EarPlugs","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_salineIV_250"};
    respawnItems[]={"ACE_tourniquet","ACE_tourniquet","ACE_microDAGR","ACE_epinephrine","ACE_EarPlugs","ACE_DefusalKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_salineIV_250"};
    magazines[]={"ACE_M84","ACE_M84","SmokeShell","CUP_30Rnd_556x45_Stanag_L85_Tracer_Red","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85"};
    respawnMagazines[]={"ACE_M84","ACE_M84","SmokeShell","CUP_30Rnd_556x45_Stanag_L85_Tracer_Red","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85","CUP_30Rnd_556x45_Stanag_L85"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","CUP_NVG_1PN138","USP_IHPS_COV_CT3_GRY_MCA","Aegis_V_OCarrierLuchnik_CQB_blk_F","CUP_NVG_1PN138"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","CUP_NVG_1PN138","USP_IHPS_COV_CT3_GRY_MCA","Aegis_V_OCarrierLuchnik_CQB_blk_F","CUP_NVG_1PN138"};
    backpack="";
  };

  class APOLLO_Field_Tech: B_ION_shot_lxWS
  {
    faction="APOLLO_APOLLO_Systems";
    side=1;
    displayName="Field Tech";
    uniformClass="USP_G3F_MCA";
    weapons[]={"APOLLO_CUP_arifle_G36C_VFG_Carry_CUP_optic_G36Optics15x_3D","Put","Throw"};
    respawnWeapons[]={"APOLLO_CUP_arifle_G36C_VFG_Carry_CUP_optic_G36Optics15x_3D","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_EarPlugs","ACE_splint","ACE_WaterBottle"};
    respawnItems[]={"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_tourniquet","ACE_EarPlugs","ACE_splint","ACE_WaterBottle"};
    magazines[]={"ACE_HandFlare_White","B_IR_Grenade","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","ACE_Chemlight_White","ACE_Chemlight_White","Chemlight_blue","Chemlight_blue"};
    respawnMagazines[]={"ACE_HandFlare_White","B_IR_Grenade","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","ACE_Chemlight_White","ACE_Chemlight_White","Chemlight_blue","Chemlight_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemSmartPhone","H_Cap_headphones_blk","CUP_V_B_PASGT_no_bags_winter"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemSmartPhone","H_Cap_headphones_blk","CUP_V_B_PASGT_no_bags_winter"};
    backpack="APOLLO_Field_Tech_pack";
  };

  class APOLLO_Demolitions: B_A_Soldier_Exp_F
  {
    faction="APOLLO_APOLLO_Systems";
    side=1;
    displayName="Demolitions";
    uniformClass="USP_G3F_MCA";
    weapons[]={"APOLLO_CUP_arifle_XM8_Compact","Put","Throw"};
    respawnWeapons[]={"APOLLO_CUP_arifle_XM8_Compact","Put","Throw"};
    items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","MineDetector","ACE_EntrenchingTool","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ACE_personalAidKit","ACE_SpraypaintWhite","ACE_SpraypaintRed","ACE_tourniquet","ACE_tourniquet","ACE_Clacker"};
    respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","MineDetector","ACE_EntrenchingTool","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ace_marker_flags_red","ACE_personalAidKit","ACE_SpraypaintWhite","ACE_SpraypaintRed","ACE_tourniquet","ACE_tourniquet","ACE_Clacker"};
    magazines[]={"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ACE_HandFlare_White","B_IR_Grenade","ACE_M14","ACE_M14","ACE_M14","ACE_M14","ACE_M84","ACE_M84","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};
    respawnMagazines[]={"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","ACE_HandFlare_White","B_IR_Grenade","ACE_M14","ACE_M14","ACE_M14","ACE_M14","ACE_M84","ACE_M84","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};
    linkedItems[]={"ItemMap","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_white_F","Aegis_V_OCarrierLuchnik_GL_blk_F","G_Headset_Tactical"};
    respawnLinkedItems[]={"ItemMap","ItemRadio","ItemGPS","lxWS_H_PASGT_goggles_white_F","Aegis_V_OCarrierLuchnik_GL_blk_F","G_Headset_Tactical"};
    backpack="APOLLO_Demolitions_pack";
  };

  class APOLLO_Van_Transport: C_Van_02_transport_F
  {
    faction="APOLLO_APOLLO_Systems";
    side=1;
    displayName="Van Transport";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_white_co.paa","a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa","a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa","a3\soft_f_orange\van_02\data\van_body_white_co.paa"};
    crew="APOLLO_Field_Tech";
    typicalCargo[]={"APOLLO_Field_Tech"};
  };

  class APOLLO_Van_Cargo: C_Van_02_vehicle_F
  {
    faction="APOLLO_APOLLO_Systems";
    side=1;
    displayName="Van Cargo";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_white_co.paa","a3\soft_f_orange\van_02\data\van_wheel_co.paa","a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa","a3\soft_f_orange\van_02\data\van_body_white_co.paa"};
    crew="APOLLO_Field_Tech";
    typicalCargo[]={"APOLLO_Field_Tech"};
  };

  class APOLLO_Van_Services: C_Van_02_service_F
  {
    faction="APOLLO_APOLLO_Systems";
    side=1;
    displayName="Van Services";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_white_co.paa","a3\soft_f_orange\van_02\data\van_wheel_co.paa","a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa","a3\soft_f_orange\van_02\data\van_body_white_co.paa"};
    crew="APOLLO_Field_Tech";
    typicalCargo[]={"APOLLO_Field_Tech"};
  };


  class APOLLO_Field_Tech_pack: B_CivilianBackpack_01_Everyday_Black_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class APOLLO_Demolitions_pack: CUP_B_USPack_Black
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_DemoCharge_Remote_Mag {count=4;magazine="DemoCharge_Remote_Mag";};
     class _xx_SatchelCharge_Remote_Mag {count=2;magazine="SatchelCharge_Remote_Mag";};
     class _xx_SLAMDirectionalMine_Wire_Mag {count=1;magazine="SLAMDirectionalMine_Wire_Mag";};
     class _xx_CUP_30Rnd_556x45_G36 {count=2;magazine="CUP_30Rnd_556x45_G36";};
    };
    class TransportItems
    {
     class _xx_ACE_Clacker {count=1;name="ACE_Clacker";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
