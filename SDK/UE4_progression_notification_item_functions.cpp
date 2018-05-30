// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_notification_item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_notification_item.progression_notification_item_C.Get_DescriptionTextField_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uprogression_notification_item_C::Get_DescriptionTextField_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.Get_DescriptionTextField_Text_1");

	Uprogression_notification_item_C_Get_DescriptionTextField_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_notification_item.progression_notification_item_C.GetShadowColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uprogression_notification_item_C::GetShadowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.GetShadowColor");

	Uprogression_notification_item_C_GetShadowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_notification_item.progression_notification_item_C.GetTransitionColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            BASE_COLOR                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            TransitionColor                (Parm, OutParm, IsPlainOldData)

void Uprogression_notification_item_C::GetTransitionColor(const struct FLinearColor& BASE_COLOR, struct FLinearColor* TransitionColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.GetTransitionColor");

	Uprogression_notification_item_C_GetTransitionColor_Params params;
	params.BASE_COLOR = BASE_COLOR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionColor != nullptr)
		*TransitionColor = params.TransitionColor;
}


// Function progression_notification_item.progression_notification_item_C.GetBackgroundColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Uprogression_notification_item_C::GetBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.GetBackgroundColor");

	Uprogression_notification_item_C_GetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_notification_item.progression_notification_item_C.UpdateTextOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text_Field                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_item_C::UpdateTextOpacity(class UTextBlock* Text_Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.UpdateTextOpacity");

	Uprogression_notification_item_C_UpdateTextOpacity_Params params;
	params.Text_Field = Text_Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_item.progression_notification_item_C.GetBorderColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uprogression_notification_item_C::GetBorderColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.GetBorderColor");

	Uprogression_notification_item_C_GetBorderColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_notification_item.progression_notification_item_C.GetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Uprogression_notification_item_C::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.GetTextColor");

	Uprogression_notification_item_C_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_notification_item.progression_notification_item_C.OnLoaded_CBF9BE26475BA384DD6F91AB38EBFAFA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_item_C::OnLoaded_CBF9BE26475BA384DD6F91AB38EBFAFA(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.OnLoaded_CBF9BE26475BA384DD6F91AB38EBFAFA");

	Uprogression_notification_item_C_OnLoaded_CBF9BE26475BA384DD6F91AB38EBFAFA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_item.progression_notification_item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uprogression_notification_item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.Construct");

	Uprogression_notification_item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_item.progression_notification_item_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_item_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.Tick");

	Uprogression_notification_item_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_item.progression_notification_item_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    IconSoftReference              (BlueprintVisible, BlueprintReadOnly, Parm)

void Uprogression_notification_item_C::LoadIcon(TAssetPtr<class UTexture2D> IconSoftReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.LoadIcon");

	Uprogression_notification_item_C_LoadIcon_Params params;
	params.IconSoftReference = IconSoftReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_item.progression_notification_item_C.ExecuteUbergraph_progression_notification_item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_item_C::ExecuteUbergraph_progression_notification_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_item.progression_notification_item_C.ExecuteUbergraph_progression_notification_item");

	Uprogression_notification_item_C_ExecuteUbergraph_progression_notification_item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
