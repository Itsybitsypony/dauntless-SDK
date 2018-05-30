#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_ui_combo_classes.hpp"
#include "UE4_ui_comboArray_classes.hpp"
#include "UE4_weapon_type_enum_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ui_combo_tablestruct.ui_combo_tablestruct
// 0x0188
struct Fui_combo_tablestruct
{
	struct FText                                       WeaponName_70_265C184A4E47A5591CB782905A0A94A5;           // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WeaponDescription_71_C7C5C97343BE7F02E560799595BE3EBF;    // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ExtraWeaponHintText_72_21FF405048247C02B074C1B794FA76F4;  // 0x0030(0x0018) (Edit, BlueprintVisible)
	TArray<struct Fui_combo>                           OldCombos_depreciated_leftinforcopyingthatsweetfoxdata_91_566711604201DD6802B0DDBE9F610C3C;// 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fui_comboArray>                      COMBO_ARRAYS_92_173A3E6B4E380E8718A3AF8BA693D8EA;         // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Fui_combo                                   BasicAttack_56_FAC5D5BE4092DDDBF4AB4887DDBEC9BC;          // 0x0068(0x0058) (Edit, BlueprintVisible)
	TArray<struct Fui_combo>                           Optional_ExtraBasicAttackNotes_78_F55E9BB14CF6EB2D3393BCBF224AB3BD;// 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Fui_combo                                   HeavyAttack_58_41C6EB5B422CFB8CF78476A59D528AAC;          // 0x00D0(0x0058) (Edit, BlueprintVisible)
	TArray<struct Fui_combo>                           Optional_ExtraHeavyAttackNotes_80_B7DF47384D5E93D108BF52953A898755;// 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fui_combo>                           SpecialAttack_61_D61753634843A8586222279F2EA7B5B3;        // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fui_combo>                           Optional_ExtraSpecialAttackNotes1_83_98F79F524095BD854FF84E9F1461B43A;// 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fui_combo>                           Optional_ExtraSpecialAttackNotes2_85_F90DD15D4999A212A9EAEB8533936085;// 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Eweapon_type_enum>                     WeaponClass_66_988D5EC142CA65D7FC284E83338ABCC7;          // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FText                                       WeaponItemID_ClassOverride_73_A1CFBDE246699609ABB6DFBCC8C1B541;// 0x0170(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
