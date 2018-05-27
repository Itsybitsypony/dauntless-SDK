// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_revive_indicator_offscreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Revives Disabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_offscreen_C::Update_Revives_Disabled(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Revives Disabled");

	Uw_revive_indicator_offscreen_C_Update_Revives_Disabled_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Is Being Revived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBeingRevived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_offscreen_C::Update_Is_Being_Revived(bool IsBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Is Being Revived");

	Uw_revive_indicator_offscreen_C_Update_Is_Being_Revived_Params params;
	params.IsBeingRevived = IsBeingRevived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Offscreen Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_offscreen_C::Update_Offscreen_Rotation(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Offscreen Rotation");

	Uw_revive_indicator_offscreen_C_Update_Offscreen_Rotation_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Offscreen Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOffscreen                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_offscreen_C::Update_Offscreen_Visibility(bool IsOffscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Offscreen Visibility");

	Uw_revive_indicator_offscreen_C_Update_Offscreen_Visibility_Params params;
	params.IsOffscreen = IsOffscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_offscreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Tick");

	Uw_revive_indicator_offscreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_revive_indicator_offscreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Construct");

	Uw_revive_indicator_offscreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.ExecuteUbergraph_w_revive_indicator_offscreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_offscreen_C::ExecuteUbergraph_w_revive_indicator_offscreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.ExecuteUbergraph_w_revive_indicator_offscreen");

	Uw_revive_indicator_offscreen_C_ExecuteUbergraph_w_revive_indicator_offscreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
