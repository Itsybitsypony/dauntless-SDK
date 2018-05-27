#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_driveby_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.SetGrantItemID
struct Agatherable_driveby_base_bp_C_SetGrantItemID_Params
{
	class FString                                      GatherID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EnableHighlightForDuration
struct Agatherable_driveby_base_bp_C_EnableHighlightForDuration_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.UserConstructionScript
struct Agatherable_driveby_base_bp_C_UserConstructionScript_Params
{
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.SpawnShinyLoot
struct Agatherable_driveby_base_bp_C_SpawnShinyLoot_Params
{
	struct FName                                       LootID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Feqs_lobbed_projectile_data                 ShinyInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   ShinyEQS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_318_ComponentBeginOverlapSignature__DelegateSignature
struct Agatherable_driveby_base_bp_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_318_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EventOnEnableHighlight
struct Agatherable_driveby_base_bp_C_EventOnEnableHighlight_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EventOnDisableHighlight
struct Agatherable_driveby_base_bp_C_EventOnDisableHighlight_Params
{
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.OnPickupPayload
struct Agatherable_driveby_base_bp_C_OnPickupPayload_Params
{
	class AArchonCharacter*                            PlayerPickingUp;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.ReceiveBeginPlay
struct Agatherable_driveby_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.ExecuteUbergraph_gatherable_driveby_base_bp
struct Agatherable_driveby_base_bp_C_ExecuteUbergraph_gatherable_driveby_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
