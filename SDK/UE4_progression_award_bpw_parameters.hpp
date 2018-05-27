#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_award_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function progression_award_bpw.progression_award_bpw_C.Add Bar Animation to Panel
struct Uprogression_award_bpw_C_Add_Bar_Animation_to_Panel_Params
{
	class UWidget*                                     BarAnimation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_award_bpw.progression_award_bpw_C.Setup Events
struct Uprogression_award_bpw_C_Setup_Events_Params
{
	struct Fprogression_award                          Grant;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_award_bpw.progression_award_bpw_C.Set Rank Number
struct Uprogression_award_bpw_C_Set_Rank_Number_Params
{
	class UTextBlock*                                  Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_award_bpw.progression_award_bpw_C.Construct
struct Uprogression_award_bpw_C_Construct_Params
{
};

// Function progression_award_bpw.progression_award_bpw_C.Bar Animation Finished
struct Uprogression_award_bpw_C_Bar_Animation_Finished_Params
{
	struct Fprogression_event                          Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function progression_award_bpw.progression_award_bpw_C.OnAnimationFinished
struct Uprogression_award_bpw_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_award_bpw.progression_award_bpw_C.ReceivedPatronBoostPlayers
struct Uprogression_award_bpw_C_ReceivedPatronBoostPlayers_Params
{
	TArray<class FString>                              PatronBoostPlayers;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function progression_award_bpw.progression_award_bpw_C.ExecuteUbergraph_progression_award_bpw
struct Uprogression_award_bpw_C_ExecuteUbergraph_progression_award_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_award_bpw.progression_award_bpw_C.AnimationsFinished__DelegateSignature
struct Uprogression_award_bpw_C_AnimationsFinished__DelegateSignature_Params
{
	struct Fprogression_award                          Award;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
