#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interactable_npc_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function interactable_npc_interface.interactable_npc_interface_C.HasItemsToCraft
struct Uinteractable_npc_interface_C_HasItemsToCraft_Params
{
	bool                                               IsUnlocked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.GetProgressTrackName
struct Uinteractable_npc_interface_C_GetProgressTrackName_Params
{
	struct FName                                       TrackName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Type
struct Uinteractable_npc_interface_C_Get_Vendor_Type_Params
{
	TEnumAsByte<EquipmentVendor>                       Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Recipe Tag
struct Uinteractable_npc_interface_C_Get_Recipe_Tag_Params
{
	class FString                                      Tag;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get NPC Camera Component
struct Uinteractable_npc_interface_C_Get_NPC_Camera_Component_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Crafting Preview Transform
struct Uinteractable_npc_interface_C_Get_Crafting_Preview_Transform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Quest Button Label
struct Uinteractable_npc_interface_C_Get_Quest_Button_Label_Params
{
	struct FText                                       Button_Label;                                             // (Parm, OutParm)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Type Label
struct Uinteractable_npc_interface_C_Get_Vendor_Type_Label_Params
{
	struct FText                                       Type;                                                     // (Parm, OutParm)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Title
struct Uinteractable_npc_interface_C_Get_Vendor_Title_Params
{
	struct FText                                       Title;                                                    // (Parm, OutParm)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Speaker
struct Uinteractable_npc_interface_C_Get_Speaker_Params
{
	class UArchonSpeaker*                              Speaker;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Get Quest Button Class
struct Uinteractable_npc_interface_C_Get_Quest_Button_Class_Params
{
	class UClass*                                      Widget_Class;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Has Available Quests
struct Uinteractable_npc_interface_C_Has_Available_Quests_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function interactable_npc_interface.interactable_npc_interface_C.Has Redeemable Quests
struct Uinteractable_npc_interface_C_Has_Redeemable_Quests_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
