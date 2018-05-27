// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_quest_info_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateObjectives
// (BlueprintCallable, BlueprintEvent)

void Uw_quest_info_bpw_C::PopulateObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateObjectives");

	Uw_quest_info_bpw_C_PopulateObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateRewards
// (BlueprintCallable, BlueprintEvent)

void Uw_quest_info_bpw_C::PopulateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateRewards");

	Uw_quest_info_bpw_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateQuestInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_quest_info_bpw_C::PopulateQuestInfo(class UQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateQuestInfo");

	Uw_quest_info_bpw_C_PopulateQuestInfo_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateDescription
// (BlueprintCallable, BlueprintEvent)

void Uw_quest_info_bpw_C::PopulateDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateDescription");

	Uw_quest_info_bpw_C_PopulateDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_quest_info_bpw.w_quest_info_bpw_C.ExecuteUbergraph_w_quest_info_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_quest_info_bpw_C::ExecuteUbergraph_w_quest_info_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_quest_info_bpw.w_quest_info_bpw_C.ExecuteUbergraph_w_quest_info_bpw");

	Uw_quest_info_bpw_C_ExecuteUbergraph_w_quest_info_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
