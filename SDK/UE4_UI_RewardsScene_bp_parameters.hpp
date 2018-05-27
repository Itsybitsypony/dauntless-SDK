#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UI_RewardsScene_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.UserConstructionScript
struct AUI_RewardsScene_bp_C_UserConstructionScript_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.CoreIntro__FinishedFunc
struct AUI_RewardsScene_bp_C_CoreIntro__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.CoreIntro__UpdateFunc
struct AUI_RewardsScene_bp_C_CoreIntro__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_0__FinishedFunc
struct AUI_RewardsScene_bp_C_Timeline_0__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_0__UpdateFunc
struct AUI_RewardsScene_bp_C_Timeline_0__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.BehemothDissolveTimeline__FinishedFunc
struct AUI_RewardsScene_bp_C_BehemothDissolveTimeline__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.BehemothDissolveTimeline__UpdateFunc
struct AUI_RewardsScene_bp_C_BehemothDissolveTimeline__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.BehemothDissolveTimeline__Trigger Roar__EventFunc
struct AUI_RewardsScene_bp_C_BehemothDissolveTimeline__Trigger_Roar__EventFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_1__FinishedFunc
struct AUI_RewardsScene_bp_C_Timeline_1__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_1__UpdateFunc
struct AUI_RewardsScene_bp_C_Timeline_1__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_2__FinishedFunc
struct AUI_RewardsScene_bp_C_Timeline_2__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_2__UpdateFunc
struct AUI_RewardsScene_bp_C_Timeline_2__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.PanCamera_SmallBeh__FinishedFunc
struct AUI_RewardsScene_bp_C_PanCamera_SmallBeh__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.PanCamera_SmallBeh__UpdateFunc
struct AUI_RewardsScene_bp_C_PanCamera_SmallBeh__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_3PanCamera_MedBeh__FinishedFunc
struct AUI_RewardsScene_bp_C_Timeline_3PanCamera_MedBeh__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Timeline_3PanCamera_MedBeh__UpdateFunc
struct AUI_RewardsScene_bp_C_Timeline_3PanCamera_MedBeh__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.PanCamera_LargeBeh__FinishedFunc
struct AUI_RewardsScene_bp_C_PanCamera_LargeBeh__FinishedFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.PanCamera_LargeBeh__UpdateFunc
struct AUI_RewardsScene_bp_C_PanCamera_LargeBeh__UpdateFunc_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.Add Behemoth Core
struct AUI_RewardsScene_bp_C_Add_Behemoth_Core_Params
{
	class FString                                      BehCoreItemID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.DissolveBehemoth
struct AUI_RewardsScene_bp_C_DissolveBehemoth_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.CameraPan_Small Beh
struct AUI_RewardsScene_bp_C_CameraPan_Small_Beh_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.SetCamera_BehemothShot
struct AUI_RewardsScene_bp_C_SetCamera_BehemothShot_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.CameraPan_MediumBeh
struct AUI_RewardsScene_bp_C_CameraPan_MediumBeh_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.CameraPan_LargeBeh
struct AUI_RewardsScene_bp_C_CameraPan_LargeBeh_Params
{
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.BndEvt__Box_Quad4_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AUI_RewardsScene_bp_C_BndEvt__Box_Quad4_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.BndEvt__Box_Quad3_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AUI_RewardsScene_bp_C_BndEvt__Box_Quad3_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.BndEvt__Box_Quad1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AUI_RewardsScene_bp_C_BndEvt__Box_Quad1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.BndEvt__Box_Quad2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AUI_RewardsScene_bp_C_BndEvt__Box_Quad2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UI_RewardsScene_bp.UI_RewardsScene_bp_C.ExecuteUbergraph_UI_RewardsScene_bp
struct AUI_RewardsScene_bp_C_ExecuteUbergraph_UI_RewardsScene_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
