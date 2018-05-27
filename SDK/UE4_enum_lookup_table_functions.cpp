// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_enum_lookup_table_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function enum_lookup_table.enum_lookup_table_C.GenerateDataFromClassList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          LookupTableClassList           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uenum_lookup_table_C::GenerateDataFromClassList(TArray<class UClass*>* LookupTableClassList)
{
	static auto fn = UObject::FindObject<UFunction>("Function enum_lookup_table.enum_lookup_table_C.GenerateDataFromClassList");

	Uenum_lookup_table_C_GenerateDataFromClassList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookupTableClassList != nullptr)
		*LookupTableClassList = params.LookupTableClassList;
}


// Function enum_lookup_table.enum_lookup_table_C.GenerateData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct Fobject_lookup_table_struct> DataEntries                    (Parm, OutParm, ZeroConstructor)

void Uenum_lookup_table_C::GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function enum_lookup_table.enum_lookup_table_C.GenerateData");

	Uenum_lookup_table_C_GenerateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataEntries != nullptr)
		*DataEntries = params.DataEntries;
}


// Function enum_lookup_table.enum_lookup_table_C.GetDataForEnum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Ubase_lookup_data_wrapper_C* Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uenum_lookup_table_C::GetDataForEnum(unsigned char Enum, class Ubase_lookup_data_wrapper_C** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function enum_lookup_table.enum_lookup_table_C.GetDataForEnum");

	Uenum_lookup_table_C_GetDataForEnum_Params params;
	params.Enum = Enum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
