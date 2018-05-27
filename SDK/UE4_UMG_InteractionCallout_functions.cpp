// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UMG_InteractionCallout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.SetNoRezMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_InteractionCallout_C::SetNoRezMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.SetNoRezMessage");

	UUMG_InteractionCallout_C_SetNoRezMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.ShowNoRezState
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_InteractionCallout_C::ShowNoRezState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.ShowNoRezState");

	UUMG_InteractionCallout_C_ShowNoRezState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_InteractionCallout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.Construct");

	UUMG_InteractionCallout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InteractionCallout_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.Tick");

	UUMG_InteractionCallout_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Show Fill Progress
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InteractionCallout_C::Show_Fill_Progress(class APawn* UsingPawn, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.Show Fill Progress");

	UUMG_InteractionCallout_C_Show_Fill_Progress_Params params;
	params.UsingPawn = UsingPawn;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Hide Fill Progress
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InteractionCallout_C::Hide_Fill_Progress(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.Hide Fill Progress");

	UUMG_InteractionCallout_C_Hide_Fill_Progress_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Using_Gamepad               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InteractionCallout_C::Input_Swap(bool Is_Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.Input Swap");

	UUMG_InteractionCallout_C_Input_Swap_Params params;
	params.Is_Using_Gamepad = Is_Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.HighlightInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_InteractionCallout_C::HighlightInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.HighlightInteraction");

	UUMG_InteractionCallout_C_HighlightInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.UnhighlightInteraction
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_InteractionCallout_C::UnhighlightInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.UnhighlightInteraction");

	UUMG_InteractionCallout_C_UnhighlightInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.CancelFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InteractionCallout_C::CancelFill(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.CancelFill");

	UUMG_InteractionCallout_C_CancelFill_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.StartFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InteractionCallout_C::StartFill(class APawn* UsingPawn, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.StartFill");

	UUMG_InteractionCallout_C_StartFill_Params params;
	params.UsingPawn = UsingPawn;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_InteractionCallout.UMG_InteractionCallout_C.ExecuteUbergraph_UMG_InteractionCallout
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_InteractionCallout_C::ExecuteUbergraph_UMG_InteractionCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InteractionCallout.UMG_InteractionCallout_C.ExecuteUbergraph_UMG_InteractionCallout");

	UUMG_InteractionCallout_C_ExecuteUbergraph_UMG_InteractionCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
