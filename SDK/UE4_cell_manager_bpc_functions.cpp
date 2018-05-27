// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_manager_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cell_manager_bpc.cell_manager_bpc_C.AuthClearBonusEffects
// (Public, BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::AuthClearBonusEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.AuthClearBonusEffects");

	Ucell_manager_bpc_C_AuthClearBonusEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.AuthAddBonusEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAppliedCellEffectCounter Effect                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ucell_manager_bpc_C::AuthAddBonusEffect(const struct FAppliedCellEffectCounter& Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.AuthAddBonusEffect");

	Ucell_manager_bpc_C_AuthAddBonusEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.OnRep_CurrentEffectsBeingApplied
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::OnRep_CurrentEffectsBeingApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.OnRep_CurrentEffectsBeingApplied");

	Ucell_manager_bpc_C_OnRep_CurrentEffectsBeingApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.SetCurrentEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppliedCellEffectCounter> NewEffectsBeingApplied         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ucell_manager_bpc_C::SetCurrentEffects(TArray<struct FAppliedCellEffectCounter>* NewEffectsBeingApplied)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.SetCurrentEffects");

	Ucell_manager_bpc_C_SetCurrentEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEffectsBeingApplied != nullptr)
		*NewEffectsBeingApplied = params.NewEffectsBeingApplied;
}


// Function cell_manager_bpc.cell_manager_bpc_C.GetCurrentAppliedCellEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FAppliedCellEffectCounter> AppliedCellEffects             (Parm, OutParm, ZeroConstructor)

void Ucell_manager_bpc_C::GetCurrentAppliedCellEffects(TArray<struct FAppliedCellEffectCounter>* AppliedCellEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.GetCurrentAppliedCellEffects");

	Ucell_manager_bpc_C_GetCurrentAppliedCellEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AppliedCellEffects != nullptr)
		*AppliedCellEffects = params.AppliedCellEffects;
}


// Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_F526342C4F02C9A0075E48B908F2675B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_manager_bpc_C::OnLoaded_F526342C4F02C9A0075E48B908F2675B(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_F526342C4F02C9A0075E48B908F2675B");

	Ucell_manager_bpc_C_OnLoaded_F526342C4F02C9A0075E48B908F2675B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_86E5A9064BCF5DEBBB33BA8B895D1B40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_manager_bpc_C::OnLoaded_86E5A9064BCF5DEBBB33BA8B895D1B40(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_86E5A9064BCF5DEBBB33BA8B895D1B40");

	Ucell_manager_bpc_C_OnLoaded_86E5A9064BCF5DEBBB33BA8B895D1B40_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_A682E46144FAAFA2F66151855B406D18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_manager_bpc_C::OnLoaded_A682E46144FAAFA2F66151855B406D18(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.OnLoaded_A682E46144FAAFA2F66151855B406D18");

	Ucell_manager_bpc_C_OnLoaded_A682E46144FAAFA2F66151855B406D18_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.RemoveCellBonuses
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::RemoveCellBonuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.RemoveCellBonuses");

	Ucell_manager_bpc_C_RemoveCellBonuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.ApplyCellBonuses
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppliedCellEffectCounter>* EquippedCellEffects            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ucell_manager_bpc_C::ApplyCellBonuses(TArray<struct FAppliedCellEffectCounter>* EquippedCellEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.ApplyCellBonuses");

	Ucell_manager_bpc_C_ApplyCellBonuses_Params params;
	params.EquippedCellEffects = EquippedCellEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextGameplayEffect
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::ApplyNextGameplayEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextGameplayEffect");

	Ucell_manager_bpc_C_ApplyNextGameplayEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextCellEffect
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::ApplyNextCellEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextCellEffect");

	Ucell_manager_bpc_C_ApplyNextCellEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextAbility
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::ApplyNextAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextAbility");

	Ucell_manager_bpc_C_ApplyNextAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextBuff
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::ApplyNextBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.ApplyNextBuff");

	Ucell_manager_bpc_C_ApplyNextBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.ApplyNewCellEffects
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::ApplyNewCellEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.ApplyNewCellEffects");

	Ucell_manager_bpc_C_ApplyNewCellEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.PostApplyRemoveCellBonuses
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::PostApplyRemoveCellBonuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.PostApplyRemoveCellBonuses");

	Ucell_manager_bpc_C_PostApplyRemoveCellBonuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.OnFinishedLoadingApplyingBuffs
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::OnFinishedLoadingApplyingBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.OnFinishedLoadingApplyingBuffs");

	Ucell_manager_bpc_C_OnFinishedLoadingApplyingBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.LoadAndApplyBuffs
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::LoadAndApplyBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.LoadAndApplyBuffs");

	Ucell_manager_bpc_C_LoadAndApplyBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_manager_bpc_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.OnDestroyed_Event_1");

	Ucell_manager_bpc_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.BP_ApplyCellBonuses
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppliedCellEffectCounter> CellEffects                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ucell_manager_bpc_C::BP_ApplyCellBonuses(TArray<struct FAppliedCellEffectCounter> CellEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.BP_ApplyCellBonuses");

	Ucell_manager_bpc_C_BP_ApplyCellBonuses_Params params;
	params.CellEffects = CellEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.AuthClearAllBonusEffects
// (BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::AuthClearAllBonusEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.AuthClearAllBonusEffects");

	Ucell_manager_bpc_C_AuthClearAllBonusEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.AddNewBonusEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAppliedCellEffectCounter AppliedCellEffectCounter       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ucell_manager_bpc_C::AddNewBonusEffect(const struct FAppliedCellEffectCounter& AppliedCellEffectCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.AddNewBonusEffect");

	Ucell_manager_bpc_C_AddNewBonusEffect_Params params;
	params.AppliedCellEffectCounter = AppliedCellEffectCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.ExecuteUbergraph_cell_manager_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_manager_bpc_C::ExecuteUbergraph_cell_manager_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.ExecuteUbergraph_cell_manager_bpc");

	Ucell_manager_bpc_C_ExecuteUbergraph_cell_manager_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_manager_bpc.cell_manager_bpc_C.Client_CellEffectsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ucell_manager_bpc_C::Client_CellEffectsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_manager_bpc.cell_manager_bpc_C.Client_CellEffectsChanged__DelegateSignature");

	Ucell_manager_bpc_C_Client_CellEffectsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
