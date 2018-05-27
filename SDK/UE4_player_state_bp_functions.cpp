// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_state_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_state_bp.player_state_bp_C.SetupCombatText
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_state_bp_C::SetupCombatText()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.SetupCombatText");

	Aplayer_state_bp_C_SetupCombatText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.GetRankingData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageGiven                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            BleedoutCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumRevivesPerformed            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StaggerCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::GetRankingData(float* DamageGiven, float* DamageTaken, int* BleedoutCount, int* NumRevivesPerformed, int* StaggerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.GetRankingData");

	Aplayer_state_bp_C_GetRankingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageGiven != nullptr)
		*DamageGiven = params.DamageGiven;
	if (DamageTaken != nullptr)
		*DamageTaken = params.DamageTaken;
	if (BleedoutCount != nullptr)
		*BleedoutCount = params.BleedoutCount;
	if (NumRevivesPerformed != nullptr)
		*NumRevivesPerformed = params.NumRevivesPerformed;
	if (StaggerCount != nullptr)
		*StaggerCount = params.StaggerCount;
}


// Function player_state_bp.player_state_bp_C.HasFinishedLoading
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aplayer_state_bp_C::HasFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.HasFinishedLoading");

	Aplayer_state_bp_C_HasFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_state_bp.player_state_bp_C.GetSelectedSlotFName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::GetSelectedSlotFName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.GetSelectedSlotFName");

	Aplayer_state_bp_C_GetSelectedSlotFName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function player_state_bp.player_state_bp_C.Use Currently Selected Quickslot Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Started_Use                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::Use_Currently_Selected_Quickslot_Item(bool* Started_Use)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.Use Currently Selected Quickslot Item");

	Aplayer_state_bp_C_Use_Currently_Selected_Quickslot_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Started_Use != nullptr)
		*Started_Use = params.Started_Use;
}


// Function player_state_bp.player_state_bp_C.OnRep_Is Talking
// (BlueprintCallable, BlueprintEvent)

void Aplayer_state_bp_C::OnRep_Is_Talking()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.OnRep_Is Talking");

	Aplayer_state_bp_C_OnRep_Is_Talking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.Setup Player Inventory
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_state_bp_C::Setup_Player_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.Setup Player Inventory");

	Aplayer_state_bp_C_Setup_Player_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.Get Debug Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void Aplayer_state_bp_C::Get_Debug_Color(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.Get Debug Color");

	Aplayer_state_bp_C_Get_Debug_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function player_state_bp.player_state_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aplayer_state_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.UserConstructionScript");

	Aplayer_state_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.SelectPreviousQuickslotItem
// (BlueprintCallable, BlueprintEvent)

void Aplayer_state_bp_C::SelectPreviousQuickslotItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.SelectPreviousQuickslotItem");

	Aplayer_state_bp_C_SelectPreviousQuickslotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.SelectNextQuickslotItem
// (BlueprintCallable, BlueprintEvent)

void Aplayer_state_bp_C::SelectNextQuickslotItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.SelectNextQuickslotItem");

	Aplayer_state_bp_C_SelectNextQuickslotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.SetInAirship
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InAirship                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::SetInAirship(bool InAirship)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.SetInAirship");

	Aplayer_state_bp_C_SetInAirship_Params params;
	params.InAirship = InAirship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aplayer_state_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.ReceiveBeginPlay");

	Aplayer_state_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.OnPlayergiveDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::OnPlayergiveDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.OnPlayergiveDamage");

	Aplayer_state_bp_C_OnPlayergiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.IncrementStaggerCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasInterrupt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::IncrementStaggerCount(class AActor* Behemoth, bool WasInterrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.IncrementStaggerCount");

	Aplayer_state_bp_C_IncrementStaggerCount_Params params;
	params.Behemoth = Behemoth;
	params.WasInterrupt = WasInterrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.SetInCity-Deprecated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::SetInCity_Deprecated(bool InCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.SetInCity-Deprecated");

	Aplayer_state_bp_C_SetInCity_Deprecated_Params params;
	params.InCity = InCity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.Guild Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonGuild*            Guild                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::Guild_Updated(class AArchonGuild* Guild)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.Guild Updated");

	Aplayer_state_bp_C_Guild_Updated_Params params;
	params.Guild = Guild;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.Any
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::Any(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.Any");

	Aplayer_state_bp_C_Any_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.SelectQuickslot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::SelectQuickslot(int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.SelectQuickslot");

	Aplayer_state_bp_C_SelectQuickslot_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.IncrementPartBreakCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::IncrementPartBreakCount(class AActor* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.IncrementPartBreakCount");

	Aplayer_state_bp_C_IncrementPartBreakCount_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.IncrementInterruptCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::IncrementInterruptCount(class AActor* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.IncrementInterruptCount");

	Aplayer_state_bp_C_IncrementInterruptCount_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.ExecuteUbergraph_player_state_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::ExecuteUbergraph_player_state_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.ExecuteUbergraph_player_state_bp");

	Aplayer_state_bp_C_ExecuteUbergraph_player_state_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.Selected Quickslot Changed Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::Selected_Quickslot_Changed_Dispatcher__DelegateSignature(int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.Selected Quickslot Changed Dispatcher__DelegateSignature");

	Aplayer_state_bp_C_Selected_Quickslot_Changed_Dispatcher__DelegateSignature_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_bp.player_state_bp_C.Talking State Change Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Talking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_state_bp_C::Talking_State_Change_Dispatcher__DelegateSignature(bool Is_Talking)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_bp.player_state_bp_C.Talking State Change Dispatcher__DelegateSignature");

	Aplayer_state_bp_C_Talking_State_Change_Dispatcher__DelegateSignature_Params params;
	params.Is_Talking = Is_Talking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
