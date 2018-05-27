// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_state_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_state_interface.player_state_interface_C.SetInAirship
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InAirship                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_state_interface_C::SetInAirship(bool InAirship)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_interface.player_state_interface_C.SetInAirship");

	Uplayer_state_interface_C_SetInAirship_Params params;
	params.InAirship = InAirship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_interface.player_state_interface_C.IncrementInterruptCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_state_interface_C::IncrementInterruptCount(class AActor* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_interface.player_state_interface_C.IncrementInterruptCount");

	Uplayer_state_interface_C_IncrementInterruptCount_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_interface.player_state_interface_C.IncrementPartBreakCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_state_interface_C::IncrementPartBreakCount(class AActor* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_interface.player_state_interface_C.IncrementPartBreakCount");

	Uplayer_state_interface_C_IncrementPartBreakCount_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_interface.player_state_interface_C.SetInCity-Deprecated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_state_interface_C::SetInCity_Deprecated(bool InCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_interface.player_state_interface_C.SetInCity-Deprecated");

	Uplayer_state_interface_C_SetInCity_Deprecated_Params params;
	params.InCity = InCity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_state_interface.player_state_interface_C.IncrementStaggerCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasInterrupt                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_state_interface_C::IncrementStaggerCount(class AActor* Behemoth, bool WasInterrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_state_interface.player_state_interface_C.IncrementStaggerCount");

	Uplayer_state_interface_C_IncrementStaggerCount_Params params;
	params.Behemoth = Behemoth;
	params.WasInterrupt = WasInterrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
