// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_simple_tintingWindow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Temp_AddPhxDyetoGridIfPhx
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_simple_tintingWindow_C::Temp_AddPhxDyetoGridIfPhx()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Temp_AddPhxDyetoGridIfPhx");

	Ubpw_simple_tintingWindow_C_Temp_AddPhxDyetoGridIfPhx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetDefaultFocusedWidget
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_simple_tintingWindow_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetDefaultFocusedWidget");

	Ubpw_simple_tintingWindow_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.RemoveDefaultTints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           RowNamesIn                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           RowNamesFiltered               (Parm, OutParm, ZeroConstructor)

void Ubpw_simple_tintingWindow_C::RemoveDefaultTints(TArray<struct FName>* RowNamesIn, TArray<struct FName>* RowNamesFiltered)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.RemoveDefaultTints");

	Ubpw_simple_tintingWindow_C_RemoveDefaultTints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowNamesIn != nullptr)
		*RowNamesIn = params.RowNamesIn;
	if (RowNamesFiltered != nullptr)
		*RowNamesFiltered = params.RowNamesFiltered;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Get_Primary_Default_DyeBU_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_simple_tintingWindow_C::Get_Primary_Default_DyeBU_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Get_Primary_Default_DyeBU_Visibility_1");

	Ubpw_simple_tintingWindow_C_Get_Primary_Default_DyeBU_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Get_Primary_Default_DyeBU_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Ubpw_simple_tintingWindow_C::Get_Primary_Default_DyeBU_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Get_Primary_Default_DyeBU_ColorAndOpacity_1");

	Ubpw_simple_tintingWindow_C_Get_Primary_Default_DyeBU_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.SetTintValues&Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::SetTintValues_Close(bool Save)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.SetTintValues&Close");

	Ubpw_simple_tintingWindow_C_SetTintValues_Close_Params params;
	params.Save = Save;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.UpdateDyeSwatches
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowAllTints                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::UpdateDyeSwatches(bool ShowAllTints)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.UpdateDyeSwatches");

	Ubpw_simple_tintingWindow_C_UpdateDyeSwatches_Params params;
	params.ShowAllTints = ShowAllTints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetDyeInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeN_Row                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)
// int                            RemainingUses                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::GetDyeInfo(const struct FName& DyeN_Row, class FString* ItemInstanceId, int* RemainingUses, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetDyeInfo");

	Ubpw_simple_tintingWindow_C_GetDyeInfo_Params params;
	params.DyeN_Row = DyeN_Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
	if (RemainingUses != nullptr)
		*RemainingUses = params.RemainingUses;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_simple_tintingWindow_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.OnKeyDown");

	Ubpw_simple_tintingWindow_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ubpw_simple_tintingWindow_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Init");

	Ubpw_simple_tintingWindow_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetEquipped_DyeSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  DyeSlot_ItemID                 (Parm, OutParm, ZeroConstructor)

void Ubpw_simple_tintingWindow_C::GetEquipped_DyeSlot(int Slot, class FString* DyeSlot_ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetEquipped_DyeSlot");

	Ubpw_simple_tintingWindow_C_GetEquipped_DyeSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeSlot_ItemID != nullptr)
		*DyeSlot_ItemID = params.DyeSlot_ItemID;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Manage Selection Changes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Primary_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::Manage_Selection_Changes(bool Primary_)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Manage Selection Changes");

	Ubpw_simple_tintingWindow_C_Manage_Selection_Changes_Params params;
	params.Primary_ = Primary_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.BndEvt__WButton_Commit_K2Node_ComponentBoundEvent_30_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ubpw_simple_tintingWindow_C::BndEvt__WButton_Commit_K2Node_ComponentBoundEvent_30_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.BndEvt__WButton_Commit_K2Node_ComponentBoundEvent_30_Button Clicked__DelegateSignature");

	Ubpw_simple_tintingWindow_C_BndEvt__WButton_Commit_K2Node_ComponentBoundEvent_30_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_simple_tintingWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Construct");

	Ubpw_simple_tintingWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Change Primary Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Reference                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::Change_Primary_Color(class Ubpw_colorpicksquare_C* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Change Primary Color");

	Ubpw_simple_tintingWindow_C_Change_Primary_Color_Params params;
	params.Reference = Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.ResetPrimary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::ResetPrimary(class Ubpw_colorpicksquare_C* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.ResetPrimary");

	Ubpw_simple_tintingWindow_C_ResetPrimary_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.SetGridFocus
// (BlueprintCallable, BlueprintEvent)

void Ubpw_simple_tintingWindow_C::SetGridFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.SetGridFocus");

	Ubpw_simple_tintingWindow_C_SetGridFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Color Selection Made
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Reference         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::Color_Selection_Made(class Ubpw_colorpicksquare_C* Color_Picker_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Color Selection Made");

	Ubpw_simple_tintingWindow_C_Color_Selection_Made_Params params;
	params.Color_Picker_Reference = Color_Picker_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.ExecuteUbergraph_bpw_simple_tintingWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::ExecuteUbergraph_bpw_simple_tintingWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.ExecuteUbergraph_bpw_simple_tintingWindow");

	Ubpw_simple_tintingWindow_C_ExecuteUbergraph_bpw_simple_tintingWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.DyePreview__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_simple_tintingWindow_C::DyePreview__DelegateSignature(const struct FName& DyeRowID)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.DyePreview__DelegateSignature");

	Ubpw_simple_tintingWindow_C_DyePreview__DelegateSignature_Params params;
	params.DyeRowID = DyeRowID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.AcceptButton_Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  DyeAccepted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_simple_tintingWindow_C::AcceptButton_Pressed__DelegateSignature(const class FString& DyeAccepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.AcceptButton_Pressed__DelegateSignature");

	Ubpw_simple_tintingWindow_C_AcceptButton_Pressed__DelegateSignature_Params params;
	params.DyeAccepted = DyeAccepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.CloseButton_RemoveTintWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  OriginalDyeReset               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_simple_tintingWindow_C::CloseButton_RemoveTintWindow__DelegateSignature(const class FString& OriginalDyeReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.CloseButton_RemoveTintWindow__DelegateSignature");

	Ubpw_simple_tintingWindow_C_CloseButton_RemoveTintWindow__DelegateSignature_Params params;
	params.OriginalDyeReset = OriginalDyeReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
