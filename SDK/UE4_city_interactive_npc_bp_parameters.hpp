#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_interactive_npc_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.HideSkinUnderArmor
struct Acity_interactive_npc_bp_C_HideSkinUnderArmor_Params
{
	TArray<class UMaterialInstanceDynamic*>            SkinDynamicMats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aarmour_part_base_bp_C*                      ArmourPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkinMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.AssignVOTransforms
struct Acity_interactive_npc_bp_C_AssignVOTransforms_Params
{
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.SetupArmorComp
struct Acity_interactive_npc_bp_C_SetupArmorComp_Params
{
	class USkeletalMeshComponent*                      Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PrimaryColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SecondayColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              PrimarySurface;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              SecondarySurface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.RaiseInteractWith
struct Acity_interactive_npc_bp_C_RaiseInteractWith_Params
{
	class APawn*                                       Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.UserConstructionScript
struct Acity_interactive_npc_bp_C_UserConstructionScript_Params
{
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_338B341548E4EFB371B643836CD5FF90
struct Acity_interactive_npc_bp_C_OnLoaded_338B341548E4EFB371B643836CD5FF90_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_13D0691D4BF6C34E870C3789A1CECC55
struct Acity_interactive_npc_bp_C_OnLoaded_13D0691D4BF6C34E870C3789A1CECC55_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_B107CEF64B271B0AE82DABB505693B74
struct Acity_interactive_npc_bp_C_OnLoaded_B107CEF64B271B0AE82DABB505693B74_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnUserCompletedInteraction
struct Acity_interactive_npc_bp_C_OnUserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.ReceiveBeginPlay
struct Acity_interactive_npc_bp_C_ReceiveBeginPlay_Params
{
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.Set Face Customization
struct Acity_interactive_npc_bp_C_Set_Face_Customization_Params
{
};

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.ExecuteUbergraph_city_interactive_npc_bp
struct Acity_interactive_npc_bp_C_ExecuteUbergraph_city_interactive_npc_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
