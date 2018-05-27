// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_eventdispatcher_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function weapon_eventdispatcher_bpc.weapon_eventdispatcher_bpc_C.OnComboEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uweapon_eventdispatcher_bpc_C::OnComboEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_eventdispatcher_bpc.weapon_eventdispatcher_bpc_C.OnComboEnd__DelegateSignature");

	Uweapon_eventdispatcher_bpc_C_OnComboEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_eventdispatcher_bpc.weapon_eventdispatcher_bpc_C.OnComboNextMove__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm)

void Uweapon_eventdispatcher_bpc_C::OnComboNextMove__DelegateSignature(const struct FComboInputBuffer& ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_eventdispatcher_bpc.weapon_eventdispatcher_bpc_C.OnComboNextMove__DelegateSignature");

	Uweapon_eventdispatcher_bpc_C_OnComboNextMove__DelegateSignature_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
