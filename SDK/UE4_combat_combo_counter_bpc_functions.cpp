// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_combat_combo_counter_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.DebugInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucombat_combo_counter_bpc_C::DebugInfo(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.DebugInfo");

	Ucombat_combo_counter_bpc_C_DebugInfo_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ucombat_combo_counter_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ReceiveBeginPlay");

	Ucombat_combo_counter_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucombat_combo_counter_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ReceiveTick");

	Ucombat_combo_counter_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.OnComboEndedDispatcher_Event_1
// (BlueprintCallable, BlueprintEvent)

void Ucombat_combo_counter_bpc_C::OnComboEndedDispatcher_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.OnComboEndedDispatcher_Event_1");

	Ucombat_combo_counter_bpc_C_OnComboEndedDispatcher_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.IncrementComboCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonAttackActionKey         AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucombat_combo_counter_bpc_C::IncrementComboCount(EArchonAttackActionKey AttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.IncrementComboCount");

	Ucombat_combo_counter_bpc_C_IncrementComboCount_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ServerSetComboCount
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PrimaryCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondaryCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArchonAttackActionKey         AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucombat_combo_counter_bpc_C::ServerSetComboCount(int PrimaryCount, int SecondaryCount, EArchonAttackActionKey AttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ServerSetComboCount");

	Ucombat_combo_counter_bpc_C_ServerSetComboCount_Params params;
	params.PrimaryCount = PrimaryCount;
	params.SecondaryCount = SecondaryCount;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ExecuteUbergraph_combat_combo_counter_bpc
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucombat_combo_counter_bpc_C::ExecuteUbergraph_combat_combo_counter_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ExecuteUbergraph_combat_combo_counter_bpc");

	Ucombat_combo_counter_bpc_C_ExecuteUbergraph_combat_combo_counter_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.OnComboIncremented__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonAttackActionKey         AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucombat_combo_counter_bpc_C::OnComboIncremented__DelegateSignature(EArchonAttackActionKey AttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.OnComboIncremented__DelegateSignature");

	Ucombat_combo_counter_bpc_C_OnComboIncremented__DelegateSignature_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
