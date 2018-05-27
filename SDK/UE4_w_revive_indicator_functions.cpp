// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_revive_indicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_revive_indicator.w_revive_indicator_C.Set Player Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_revive_indicator_C::Set_Player_Name(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Set Player Name");

	Uw_revive_indicator_C_Set_Player_Name_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Set Tracked Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Set_Tracked_Player(class APawn* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Set Tracked Player");

	Uw_revive_indicator_C_Set_Tracked_Player_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Update Offscreen Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOffscreen                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Update_Offscreen_Visibility(bool IsOffscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Update Offscreen Visibility");

	Uw_revive_indicator_C_Update_Offscreen_Visibility_Params params;
	params.IsOffscreen = IsOffscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Update Revives Disabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Update_Revives_Disabled(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Update Revives Disabled");

	Uw_revive_indicator_C_Update_Revives_Disabled_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Update Is Being Revived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBeingRevived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Update_Is_Being_Revived(bool IsBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Update Is Being Revived");

	Uw_revive_indicator_C_Update_Is_Being_Revived_Params params;
	params.IsBeingRevived = IsBeingRevived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_revive_indicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Construct");

	Uw_revive_indicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_revive_indicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Destruct");

	Uw_revive_indicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.HighlightInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_revive_indicator_C::HighlightInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.HighlightInteraction");

	Uw_revive_indicator_C_HighlightInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.UnhighlightInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_revive_indicator_C::UnhighlightInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.UnhighlightInteraction");

	Uw_revive_indicator_C_UnhighlightInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Tick");

	Uw_revive_indicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Player Is Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Player_Is_Down(class APawn* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Player Is Down");

	Uw_revive_indicator_C_Player_Is_Down_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.StartFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::StartFill(class APawn* UsingPawn, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.StartFill");

	Uw_revive_indicator_C_StartFill_Params params;
	params.UsingPawn = UsingPawn;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.CancelFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::CancelFill(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.CancelFill");

	Uw_revive_indicator_C_CancelFill_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Show Fill Progress
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Show_Fill_Progress(class APawn* UsingPawn, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Show Fill Progress");

	Uw_revive_indicator_C_Show_Fill_Progress_Params params;
	params.UsingPawn = UsingPawn;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Update Revive Progress
// (BlueprintCallable, BlueprintEvent)

void Uw_revive_indicator_C::Update_Revive_Progress()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Update Revive Progress");

	Uw_revive_indicator_C_Update_Revive_Progress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Hide Fill Progress
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Hide_Fill_Progress(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Hide Fill Progress");

	Uw_revive_indicator_C_Hide_Fill_Progress_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Using_Gamepad               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::Input_Swap(bool Is_Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.Input Swap");

	Uw_revive_indicator_C_Input_Swap_Params params;
	params.Is_Using_Gamepad = Is_Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_revive_indicator.w_revive_indicator_C.ExecuteUbergraph_w_revive_indicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_revive_indicator_C::ExecuteUbergraph_w_revive_indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_revive_indicator.w_revive_indicator_C.ExecuteUbergraph_w_revive_indicator");

	Uw_revive_indicator_C_ExecuteUbergraph_w_revive_indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
