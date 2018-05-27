#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_recent_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Construct
struct Usocial_menu_recent_bpw_C_Construct_Params
{
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Recent Players Updated
struct Usocial_menu_recent_bpw_C_Recent_Players_Updated_Params
{
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Friend Added
struct Usocial_menu_recent_bpw_C_Friend_Added_Params
{
	bool                                               WasSuccessful;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Player Selected
struct Usocial_menu_recent_bpw_C_Player_Selected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.OnTabSelected
struct Usocial_menu_recent_bpw_C_OnTabSelected_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.OnTabDeselected
struct Usocial_menu_recent_bpw_C_OnTabDeselected_Params
{
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.InputSwap
struct Usocial_menu_recent_bpw_C_InputSwap_Params
{
	bool*                                              IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.SetDefaultFocus
struct Usocial_menu_recent_bpw_C_SetDefaultFocus_Params
{
};

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.ExecuteUbergraph_social_menu_recent_bpw
struct Usocial_menu_recent_bpw_C_ExecuteUbergraph_social_menu_recent_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
