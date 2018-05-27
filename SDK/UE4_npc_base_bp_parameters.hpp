#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function npc_base_bp.npc_base_bp_C.HideSkinUnderArmor
struct Anpc_base_bp_C_HideSkinUnderArmor_Params
{
	TArray<class UMaterialInstanceDynamic*>            SkinDynamicMats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aarmour_part_base_bp_C*                      ArmourPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkinMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.AddStaticMesh
struct Anpc_base_bp_C_AddStaticMesh_Params
{
	class UStaticMesh*                                 SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.AddSkeletalMesh
struct Anpc_base_bp_C_AddSkeletalMesh_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.UserConstructionScript
struct Anpc_base_bp_C_UserConstructionScript_Params
{
};

// Function npc_base_bp.npc_base_bp_C.OnLoaded_E53812054BC43D8DF95D93B1D0263C70
struct Anpc_base_bp_C_OnLoaded_E53812054BC43D8DF95D93B1D0263C70_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.OnLoaded_A493FBF244836078D34B3D829F5981DD
struct Anpc_base_bp_C_OnLoaded_A493FBF244836078D34B3D829F5981DD_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.OnLoaded_430B77724A13338D3D1E74813BAC644A
struct Anpc_base_bp_C_OnLoaded_430B77724A13338D3D1E74813BAC644A_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.OnLoaded_23C22D854B058F63A0887AA932DEC533
struct Anpc_base_bp_C_OnLoaded_23C22D854B058F63A0887AA932DEC533_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.OnLoaded_9A193F17466D4863D17E0F861E444784
struct Anpc_base_bp_C_OnLoaded_9A193F17466D4863D17E0F861E444784_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.OnLoaded_41310CB5484D2358D0B165B50107BEC6
struct Anpc_base_bp_C_OnLoaded_41310CB5484D2358D0B165B50107BEC6_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.ReceiveBeginPlay
struct Anpc_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function npc_base_bp.npc_base_bp_C.SetupNPCMesh
struct Anpc_base_bp_C_SetupNPCMesh_Params
{
	class USkeletalMeshComponent*                      MeshParent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.FinishSetupNPCMesh
struct Anpc_base_bp_C_FinishSetupNPCMesh_Params
{
};

// Function npc_base_bp.npc_base_bp_C.ExecuteUbergraph_npc_base_bp
struct Anpc_base_bp_C_ExecuteUbergraph_npc_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_base_bp.npc_base_bp_C.MyCustomEvent__DelegateSignature
struct Anpc_base_bp_C_MyCustomEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
