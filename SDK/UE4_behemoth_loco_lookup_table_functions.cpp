// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_loco_lookup_table_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_loco_lookup_table.behemoth_loco_lookup_table_C.GetBehemothLocoData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_loco_type> LocoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fbehemoth_loco_info     ActionData                     (Parm, OutParm)
// bool                           FoundData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_loco_lookup_table_C::GetBehemothLocoData(TEnumAsByte<Ebehemoth_loco_type> LocoType, struct Fbehemoth_loco_info* ActionData, bool* FoundData)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_loco_lookup_table.behemoth_loco_lookup_table_C.GetBehemothLocoData");

	Ubehemoth_loco_lookup_table_C_GetBehemothLocoData_Params params;
	params.LocoType = LocoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionData != nullptr)
		*ActionData = params.ActionData;
	if (FoundData != nullptr)
		*FoundData = params.FoundData;
}


// Function behemoth_loco_lookup_table.behemoth_loco_lookup_table_C.GenerateData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct Fobject_lookup_table_struct> DataEntries                    (Parm, OutParm, ZeroConstructor)

void Ubehemoth_loco_lookup_table_C::GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_loco_lookup_table.behemoth_loco_lookup_table_C.GenerateData");

	Ubehemoth_loco_lookup_table_C_GenerateData_Params params;

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
