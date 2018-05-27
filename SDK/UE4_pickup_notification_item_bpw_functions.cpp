// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_pickup_notification_item_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetItemCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Upickup_notification_item_bpw_C::GetItemCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetItemCount");

	Upickup_notification_item_bpw_C_GetItemCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetShadowColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Upickup_notification_item_bpw_C::GetShadowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetShadowColor");

	Upickup_notification_item_bpw_C_GetShadowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTransitionColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Base_Color                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            TransitionColor                (Parm, OutParm, IsPlainOldData)

void Upickup_notification_item_bpw_C::GetTransitionColor(const struct FLinearColor& Base_Color, struct FLinearColor* TransitionColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTransitionColor");

	Upickup_notification_item_bpw_C_GetTransitionColor_Params params;
	params.Base_Color = Base_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionColor != nullptr)
		*TransitionColor = params.TransitionColor;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetBackgroundColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Upickup_notification_item_bpw_C::GetBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetBackgroundColor");

	Upickup_notification_item_bpw_C_GetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.UpdateTextOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text_Field                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_item_bpw_C::UpdateTextOpacity(class UTextBlock* Text_Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.UpdateTextOpacity");

	Upickup_notification_item_bpw_C_UpdateTextOpacity_Params params;
	params.Text_Field = Text_Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTextNumberColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Upickup_notification_item_bpw_C::GetTextNumberColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTextNumberColor");

	Upickup_notification_item_bpw_C_GetTextNumberColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetBorderColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Upickup_notification_item_bpw_C::GetBorderColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetBorderColor");

	Upickup_notification_item_bpw_C_GetBorderColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Upickup_notification_item_bpw_C::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTextColor");

	Upickup_notification_item_bpw_C_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Upickup_notification_item_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.Construct");

	Upickup_notification_item_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_item_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.Tick");

	Upickup_notification_item_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.ExecuteUbergraph_pickup_notification_item_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_item_bpw_C::ExecuteUbergraph_pickup_notification_item_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.ExecuteUbergraph_pickup_notification_item_bpw");

	Upickup_notification_item_bpw_C_ExecuteUbergraph_pickup_notification_item_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
