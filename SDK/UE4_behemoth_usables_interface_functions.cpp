// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_usables_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_usables_interface.behemoth_usables_interface_C.SetBehemothHasUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasBehemothUsed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_usables_interface_C::SetBehemothHasUsed(bool HasBehemothUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_usables_interface.behemoth_usables_interface_C.SetBehemothHasUsed");

	Ubehemoth_usables_interface_C_SetBehemothHasUsed_Params params;
	params.HasBehemothUsed = HasBehemothUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_usables_interface.behemoth_usables_interface_C.GetBehemothHasUsed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasBehemothUsed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_usables_interface_C::GetBehemothHasUsed(bool* HasBehemothUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_usables_interface.behemoth_usables_interface_C.GetBehemothHasUsed");

	Ubehemoth_usables_interface_C_GetBehemothHasUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasBehemothUsed != nullptr)
		*HasBehemothUsed = params.HasBehemothUsed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
