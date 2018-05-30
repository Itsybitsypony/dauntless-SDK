// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_animation_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_animation_interface.behemoth_animation_interface_C.SetEnableAimOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_animation_interface_C::SetEnableAimOffset(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_animation_interface.behemoth_animation_interface_C.SetEnableAimOffset");

	Ubehemoth_animation_interface_C_SetEnableAimOffset_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_animation_interface.behemoth_animation_interface_C.SetCustomState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CustomStateName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_animation_interface_C::SetCustomState(const struct FName& CustomStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_animation_interface.behemoth_animation_interface_C.SetCustomState");

	Ubehemoth_animation_interface_C_SetCustomState_Params params;
	params.CustomStateName = CustomStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
