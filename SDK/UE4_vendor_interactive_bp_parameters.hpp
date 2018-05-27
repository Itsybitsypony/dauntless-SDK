#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_vendor_interactive_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function vendor_interactive_bp.vendor_interactive_bp_C.HasItemsToCraft
struct Avendor_interactive_bp_C_HasItemsToCraft_Params
{
	bool                                               IsUnlocked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.GetProgressTrackName
struct Avendor_interactive_bp_C_GetProgressTrackName_Params
{
	struct FName                                       TrackName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Type
struct Avendor_interactive_bp_C_Get_Vendor_Type_Params
{
	TEnumAsByte<EquipmentVendor>                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Type Label
struct Avendor_interactive_bp_C_Get_Vendor_Type_Label_Params
{
	struct FText                                       Type;                                                     // (Parm, OutParm)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Recipe Tag
struct Avendor_interactive_bp_C_Get_Recipe_Tag_Params
{
	class FString                                      Tag;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get NPC Camera Component
struct Avendor_interactive_bp_C_Get_NPC_Camera_Component_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Crafting Preview Transform
struct Avendor_interactive_bp_C_Get_Crafting_Preview_Transform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Quest Button Label
struct Avendor_interactive_bp_C_Get_Quest_Button_Label_Params
{
	struct FText                                       Button_Label;                                             // (Parm, OutParm)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Speaker
struct Avendor_interactive_bp_C_Get_Speaker_Params
{
	class UArchonSpeaker*                              Speaker;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Title
struct Avendor_interactive_bp_C_Get_Vendor_Title_Params
{
	struct FText                                       Title;                                                    // (Parm, OutParm)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Quest Button Class
struct Avendor_interactive_bp_C_Get_Quest_Button_Class_Params
{
	class UClass*                                      Widget_Class;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Has Redeemable Quests
struct Avendor_interactive_bp_C_Has_Redeemable_Quests_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Has Available Quests
struct Avendor_interactive_bp_C_Has_Available_Quests_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.AssignVOTransformsTemporary
struct Avendor_interactive_bp_C_AssignVOTransformsTemporary_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.RaiseInteractionwithSpeaker
struct Avendor_interactive_bp_C_RaiseInteractionwithSpeaker_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.DisplayStore
struct Avendor_interactive_bp_C_DisplayStore_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.SetupVendorMesh
struct Avendor_interactive_bp_C_SetupVendorMesh_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.GetMarkerComponent
struct Avendor_interactive_bp_C_GetMarkerComponent_Params
{
	class UMarkerComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Vendor Has Available Quests
struct Avendor_interactive_bp_C_Vendor_Has_Available_Quests_Params
{
	bool                                               Available_Quests_Found;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Vendor Has Redeemable Quests
struct Avendor_interactive_bp_C_Vendor_Has_Redeemable_Quests_Params
{
	bool                                               Redeemable_Quests_Found;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.UserConstructionScript
struct Avendor_interactive_bp_C_UserConstructionScript_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Refresh Quest Indicator
struct Avendor_interactive_bp_C_Refresh_Quest_Indicator_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.OnQuestSystemReady
struct Avendor_interactive_bp_C_OnQuestSystemReady_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.ExecutePayload
struct Avendor_interactive_bp_C_ExecutePayload_Params
{
	class APawn**                                      SuccessfulInteractor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.Marks Quests as Viewed
struct Avendor_interactive_bp_C_Marks_Quests_as_Viewed_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.OnMenuClosed
struct Avendor_interactive_bp_C_OnMenuClosed_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.StateTrigger
struct Avendor_interactive_bp_C_StateTrigger_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.ReceiveBeginPlay
struct Avendor_interactive_bp_C_ReceiveBeginPlay_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.ReceiveGameplayStart
struct Avendor_interactive_bp_C_ReceiveGameplayStart_Params
{
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.K2_OnBecomeViewTarget
struct Avendor_interactive_bp_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          pc;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.OnUserCompletedInteraction
struct Avendor_interactive_bp_C_OnUserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function vendor_interactive_bp.vendor_interactive_bp_C.ExecuteUbergraph_vendor_interactive_bp
struct Avendor_interactive_bp_C_ExecuteUbergraph_vendor_interactive_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
