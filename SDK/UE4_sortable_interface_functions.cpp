// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_sortable_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sortable_interface.sortable_interface_C.CompareTo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Usortable_interface_C> OtherItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Esort_type>        SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CompareResult                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usortable_interface_C::CompareTo(const TScriptInterface<class Usortable_interface_C>& OtherItem, TEnumAsByte<Esort_type> SortType, int* CompareResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function sortable_interface.sortable_interface_C.CompareTo");

	Usortable_interface_C_CompareTo_Params params;
	params.OtherItem = OtherItem;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompareResult != nullptr)
		*CompareResult = params.CompareResult;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
