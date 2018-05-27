#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunT_TeamSlot_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.DisplayBadges
struct Uw_EndOfHunT_TeamSlot_bpw_C_DisplayBadges_Params
{
	TArray<struct Fbadge_display_info>                 BadgeDisplayInfo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.SetupBadgeInfos
struct Uw_EndOfHunT_TeamSlot_bpw_C_SetupBadgeInfos_Params
{
	TArray<struct Fbadge_infos>                        AllBadgeInfos;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Fbadge_display_info>                 BadgeDisplayInfo;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.SetTitle
struct Uw_EndOfHunT_TeamSlot_bpw_C_SetTitle_Params
{
	class AArchonCharacter*                            InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.Get_Title_Text_1
struct Uw_EndOfHunT_TeamSlot_bpw_C_Get_Title_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.Update Player Identity
struct Uw_EndOfHunT_TeamSlot_bpw_C_Update_Player_Identity_Params
{
	class AArchonCharacter*                            Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fbadge_infos>                        BadgeInfos;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.ExecuteUbergraph_w_EndOfHunT_TeamSlot_bpw
struct Uw_EndOfHunT_TeamSlot_bpw_C_ExecuteUbergraph_w_EndOfHunT_TeamSlot_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.AddStyleCore__DelegateSignature
struct Uw_EndOfHunT_TeamSlot_bpw_C_AddStyleCore__DelegateSignature_Params
{
};

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.AddBehemothCore__DelegateSignature
struct Uw_EndOfHunT_TeamSlot_bpw_C_AddBehemothCore__DelegateSignature_Params
{
	class FString                                      BehCoreItemID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
