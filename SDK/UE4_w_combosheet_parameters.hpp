#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_combosheet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_combosheet.w_combosheet_C.SetupSpecialActionKey
struct Uw_combosheet_C_SetupSpecialActionKey_Params
{
};

// Function w_combosheet.w_combosheet_C.SetupSecondaryAttacKKeyInput
struct Uw_combosheet_C_SetupSecondaryAttacKKeyInput_Params
{
};

// Function w_combosheet.w_combosheet_C.SetupBasicAttackKeyinput
struct Uw_combosheet_C_SetupBasicAttackKeyinput_Params
{
};

// Function w_combosheet.w_combosheet_C.SetupSpecialAttack2Info
struct Uw_combosheet_C_SetupSpecialAttack2Info_Params
{
	struct Fui_combo                                   InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_combosheet.w_combosheet_C.SetupSpecialAttack1Info
struct Uw_combosheet_C_SetupSpecialAttack1Info_Params
{
	struct Fui_combo                                   InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_combosheet.w_combosheet_C.SetupHeavyAttackInfo
struct Uw_combosheet_C_SetupHeavyAttackInfo_Params
{
	struct Fui_combo                                   InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_combosheet.w_combosheet_C.SetupBasicAttackInfo
struct Uw_combosheet_C_SetupBasicAttackInfo_Params
{
	struct Fui_combo                                   InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_combosheet.w_combosheet_C.SetupExtraSpecialAttack2Info
struct Uw_combosheet_C_SetupExtraSpecialAttack2Info_Params
{
	TArray<struct Fui_combo>                           InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_combosheet.w_combosheet_C.SetupExtraSpecialAttack1Info
struct Uw_combosheet_C_SetupExtraSpecialAttack1Info_Params
{
	TArray<struct Fui_combo>                           InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_combosheet.w_combosheet_C.SetupExtraHeavyAttackInfo
struct Uw_combosheet_C_SetupExtraHeavyAttackInfo_Params
{
	TArray<struct Fui_combo>                           InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_combosheet.w_combosheet_C.SetupExtraBasicAttackInfo
struct Uw_combosheet_C_SetupExtraBasicAttackInfo_Params
{
	TArray<struct Fui_combo>                           InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_combosheet.w_combosheet_C.OnLoaded_A058EA6248D678A919D5DF91C17C00BB
struct Uw_combosheet_C_OnLoaded_A058EA6248D678A919D5DF91C17C00BB_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_combosheet.w_combosheet_C.InputSwap
struct Uw_combosheet_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_combosheet.w_combosheet_C.OnSynchronizeProperties
struct Uw_combosheet_C_OnSynchronizeProperties_Params
{
};

// Function w_combosheet.w_combosheet_C.Construct
struct Uw_combosheet_C_Construct_Params
{
};

// Function w_combosheet.w_combosheet_C.Refresh
struct Uw_combosheet_C_Refresh_Params
{
};

// Function w_combosheet.w_combosheet_C.SetupKeyinputs
struct Uw_combosheet_C_SetupKeyinputs_Params
{
};

// Function w_combosheet.w_combosheet_C.ExecuteUbergraph_w_combosheet
struct Uw_combosheet_C_ExecuteUbergraph_w_combosheet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
