// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_QuestHinter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_QuestHinter.bpw_QuestHinter_C.RefreshVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_QuestHinter_C::RefreshVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.RefreshVisibility");

	Ubpw_QuestHinter_C_RefreshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsRedeemable_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_QuestHinter_C::Get_QuestsRedeemable_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsRedeemable_Text");

	Ubpw_QuestHinter_C_Get_QuestsRedeemable_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsAvail_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_QuestHinter_C::Get_QuestsAvail_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsAvail_Text");

	Ubpw_QuestHinter_C_Get_QuestsAvail_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsRedeemable_Tooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_QuestHinter_C::Get_QuestsRedeemable_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsRedeemable_Tooltip");

	Ubpw_QuestHinter_C_Get_QuestsRedeemable_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsAvail_Tooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_QuestHinter_C::Get_QuestsAvail_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsAvail_Tooltip");

	Ubpw_QuestHinter_C_Get_QuestsAvail_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.RefreshQuests
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuest*>          Found_Avail_Results            (Parm, OutParm, ZeroConstructor)
// TArray<class UQuest*>          Found_Redeem_Results           (Parm, OutParm, ZeroConstructor)

void Ubpw_QuestHinter_C::RefreshQuests(TArray<class UQuest*>* Found_Avail_Results, TArray<class UQuest*>* Found_Redeem_Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.RefreshQuests");

	Ubpw_QuestHinter_C_RefreshQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Avail_Results != nullptr)
		*Found_Avail_Results = params.Found_Avail_Results;
	if (Found_Redeem_Results != nullptr)
		*Found_Redeem_Results = params.Found_Redeem_Results;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_QuestHinter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.Construct");

	Ubpw_QuestHinter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.OnQuestSystemReady
// (BlueprintCallable, BlueprintEvent)

void Ubpw_QuestHinter_C::OnQuestSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.OnQuestSystemReady");

	Ubpw_QuestHinter_C_OnQuestSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_QuestHinter.bpw_QuestHinter_C.ExecuteUbergraph_bpw_QuestHinter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_QuestHinter_C::ExecuteUbergraph_bpw_QuestHinter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_QuestHinter.bpw_QuestHinter_C.ExecuteUbergraph_bpw_QuestHinter");

	Ubpw_QuestHinter_C_ExecuteUbergraph_bpw_QuestHinter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
