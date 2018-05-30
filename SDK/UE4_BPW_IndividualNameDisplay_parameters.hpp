#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_IndividualNameDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get_RedBar_ColorAndOpacity_1
struct UBPW_IndividualNameDisplay_C_Get_RedBar_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get_BleedoutBar_Percent_1
struct UBPW_IndividualNameDisplay_C_Get_BleedoutBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.GetVisibility_RezIcon
struct UBPW_IndividualNameDisplay_C_GetVisibility_RezIcon_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.GetReadyIconVisibility
struct UBPW_IndividualNameDisplay_C_GetReadyIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Set Visible for Party Leader
struct UBPW_IndividualNameDisplay_C_Set_Visible_for_Party_Leader_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Slot Backer Visibility
struct UBPW_IndividualNameDisplay_C_Get_Slot_Backer_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Weapon Display Icon
struct UBPW_IndividualNameDisplay_C_Get_Weapon_Display_Icon_Params
{
	class UTexture2D*                                  WeaponTeamDisplayIcon;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Life Bar Percent
struct UBPW_IndividualNameDisplay_C_Get_Life_Bar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Update info
struct UBPW_IndividualNameDisplay_C_Update_info_Params
{
	class Aplayer_state_bp_C*                          Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Leader;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Construct
struct UBPW_IndividualNameDisplay_C_Construct_Params
{
};

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.ExecuteUbergraph_BPW_IndividualNameDisplay
struct UBPW_IndividualNameDisplay_C_ExecuteUbergraph_BPW_IndividualNameDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
