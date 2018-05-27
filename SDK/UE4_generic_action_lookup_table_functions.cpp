// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_generic_action_lookup_table_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function generic_action_lookup_table.generic_action_lookup_table_C.GetGenericActionData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_generic_action_type> ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fgeneric_action_set_entry ActionData                     (Parm, OutParm)
// bool                           FoundData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugeneric_action_lookup_table_C::GetGenericActionData(TEnumAsByte<Ebehemoth_generic_action_type> ActionType, struct Fgeneric_action_set_entry* ActionData, bool* FoundData)
{
	static auto fn = UObject::FindObject<UFunction>("Function generic_action_lookup_table.generic_action_lookup_table_C.GetGenericActionData");

	Ugeneric_action_lookup_table_C_GetGenericActionData_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionData != nullptr)
		*ActionData = params.ActionData;
	if (FoundData != nullptr)
		*FoundData = params.FoundData;
}


// Function generic_action_lookup_table.generic_action_lookup_table_C.GenerateData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct Fobject_lookup_table_struct> DataEntries                    (Parm, OutParm, ZeroConstructor)

void Ugeneric_action_lookup_table_C::GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function generic_action_lookup_table.generic_action_lookup_table_C.GenerateData");

	Ugeneric_action_lookup_table_C_GenerateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataEntries != nullptr)
		*DataEntries = params.DataEntries;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
