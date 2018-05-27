#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_manager_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cell_manager_bpc.cell_manager_bpc_C.AuthClearBonusEffects
struct Ucell_manager_bpc_C_AuthClearBonusEffects_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.AuthAddBonusEffect
struct Ucell_manager_bpc_C_AuthAddBonusEffect_Params
{
	struct FAppliedCellEffectCounter                   Effect;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function cell_manager_bpc.cell_manager_bpc_C.OnRep_CurrentEffectsBeingApplied
struct Ucell_manager_bpc_C_OnRep_CurrentEffectsBeingApplied_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.SetCurrentEffects
struct Ucell_manager_bpc_C_SetCurrentEffects_Params
{
	TArray<struct FAppliedCellEffectCounter>           NewEffectsBeingApplied;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function cell_manager_bpc.cell_manager_bpc_C.GetCurrentAppliedCellEffects
struct Ucell_manager_bpc_C_GetCurrentAppliedCellEffects_Params
{
	TArray<struct FAppliedCellEffectCounter>           AppliedCellEffects;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_F526342C4F02C9A0075E48B908F2675B
struct Ucell_manager_bpc_C_OnLoaded_F526342C4F02C9A0075E48B908F2675B_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_86E5A9064BCF5DEBBB33BA8B895D1B40
struct Ucell_manager_bpc_C_OnLoaded_86E5A9064BCF5DEBBB33BA8B895D1B40_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_A682E46144FAAFA2F66151855B406D18
struct Ucell_manager_bpc_C_OnLoaded_A682E46144FAAFA2F66151855B406D18_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_manager_bpc.cell_manager_bpc_C.RemoveCellBonuses
struct Ucell_manager_bpc_C_RemoveCellBonuses_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.ApplyCellBonuses
struct Ucell_manager_bpc_C_ApplyCellBonuses_Params
{
	TArray<struct FAppliedCellEffectCounter>*          EquippedCellEffects;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextGameplayEffect
struct Ucell_manager_bpc_C_ApplyNextGameplayEffect_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextCellEffect
struct Ucell_manager_bpc_C_ApplyNextCellEffect_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextAbility
struct Ucell_manager_bpc_C_ApplyNextAbility_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextBuff
struct Ucell_manager_bpc_C_ApplyNextBuff_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNewCellEffects
struct Ucell_manager_bpc_C_ApplyNewCellEffects_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.PostApplyRemoveCellBonuses
struct Ucell_manager_bpc_C_PostApplyRemoveCellBonuses_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.OnFinishedLoadingApplyingBuffs
struct Ucell_manager_bpc_C_OnFinishedLoadingApplyingBuffs_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.LoadAndApplyBuffs
struct Ucell_manager_bpc_C_LoadAndApplyBuffs_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.OnDestroyed_Event_1
struct Ucell_manager_bpc_C_OnDestroyed_Event_1_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_manager_bpc.cell_manager_bpc_C.BP_ApplyCellBonuses
struct Ucell_manager_bpc_C_BP_ApplyCellBonuses_Params
{
	TArray<struct FAppliedCellEffectCounter>           CellEffects;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function cell_manager_bpc.cell_manager_bpc_C.AuthClearAllBonusEffects
struct Ucell_manager_bpc_C_AuthClearAllBonusEffects_Params
{
};

// Function cell_manager_bpc.cell_manager_bpc_C.AddNewBonusEffect
struct Ucell_manager_bpc_C_AddNewBonusEffect_Params
{
	struct FAppliedCellEffectCounter                   AppliedCellEffectCounter;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function cell_manager_bpc.cell_manager_bpc_C.ExecuteUbergraph_cell_manager_bpc
struct Ucell_manager_bpc_C_ExecuteUbergraph_cell_manager_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_manager_bpc.cell_manager_bpc_C.Client_CellEffectsChanged__DelegateSignature
struct Ucell_manager_bpc_C_Client_CellEffectsChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
