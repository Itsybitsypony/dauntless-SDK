// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_stagger_lookup_table_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function stagger_lookup_table.stagger_lookup_table_C.GetStaggerData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Estagger_type>     StaggerType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fstagger_lookup_table_entry StaggerData                    (Parm, OutParm)
// bool                           FoundData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustagger_lookup_table_C::GetStaggerData(TEnumAsByte<Estagger_type> StaggerType, struct Fstagger_lookup_table_entry* StaggerData, bool* FoundData)
{
	static auto fn = UObject::FindObject<UFunction>("Function stagger_lookup_table.stagger_lookup_table_C.GetStaggerData");

	Ustagger_lookup_table_C_GetStaggerData_Params params;
	params.StaggerType = StaggerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerData != nullptr)
		*StaggerData = params.StaggerData;
	if (FoundData != nullptr)
		*FoundData = params.FoundData;
}


// Function stagger_lookup_table.stagger_lookup_table_C.GenerateData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct Fobject_lookup_table_struct> DataEntries                    (Parm, OutParm, ZeroConstructor)

void Ustagger_lookup_table_C::GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function stagger_lookup_table.stagger_lookup_table_C.GenerateData");

	Ustagger_lookup_table_C_GenerateData_Params params;

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
