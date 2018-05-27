// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_ui_datamodel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_ui_datamodel.base_ui_datamodel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abase_ui_datamodel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_ui_datamodel.base_ui_datamodel_C.UserConstructionScript");

	Abase_ui_datamodel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_ui_datamodel.base_ui_datamodel_C.OnDataChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Abase_ui_datamodel_C::OnDataChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_ui_datamodel.base_ui_datamodel_C.OnDataChanged__DelegateSignature");

	Abase_ui_datamodel_C_OnDataChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
