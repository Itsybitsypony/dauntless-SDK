// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_opener_main_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function core_opener_main_bpw.core_opener_main_bpw_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ucore_opener_main_bpw_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.GetText_2");

	Ucore_opener_main_bpw_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ucore_opener_main_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.GetDefaultFocusedWidget");

	Ucore_opener_main_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Get_TextBlock_55_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ucore_opener_main_bpw_C::Get_TextBlock_55_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Get_TextBlock_55_Text_1");

	Ucore_opener_main_bpw_C_Get_TextBlock_55_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ucore_opener_main_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.GetText_1");

	Ucore_opener_main_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Get_FullScreen_RarityColour_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Ucore_opener_main_bpw_C::Get_FullScreen_RarityColour_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Get_FullScreen_RarityColour_Brush_1");

	Ucore_opener_main_bpw_C_Get_FullScreen_RarityColour_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.MatchesLocalCore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ucore_opener_main_bpw_C::MatchesLocalCore(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.MatchesLocalCore");

	Ucore_opener_main_bpw_C_MatchesLocalCore_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucore_opener_main_bpw_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OnPreviewKeyDown");

	Ucore_opener_main_bpw_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.ShowHide_Details
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ucore_opener_main_bpw_C::ShowHide_Details()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.ShowHide_Details");

	Ucore_opener_main_bpw_C_ShowHide_Details_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.ShowHide_DustBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ucore_opener_main_bpw_C::ShowHide_DustBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.ShowHide_DustBar");

	Ucore_opener_main_bpw_C_ShowHide_DustBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.SetupDetailsDustbarShowHide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucore_opener_main_bpw_C::SetupDetailsDustbarShowHide(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.SetupDetailsDustbarShowHide");

	Ucore_opener_main_bpw_C_SetupDetailsDustbarShowHide_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Audio_GetCoreInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::Audio_GetCoreInfo(class UArchonInventoryItem* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Audio_GetCoreInfo");

	Ucore_opener_main_bpw_C_Audio_GetCoreInfo_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.SpendDust
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::SpendDust()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.SpendDust");

	Ucore_opener_main_bpw_C_SpendDust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.CanSpendDust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanRedeem                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::CanSpendDust(bool* CanRedeem)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.CanSpendDust");

	Ucore_opener_main_bpw_C_CanSpendDust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanRedeem != nullptr)
		*CanRedeem = params.CanRedeem;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.IsCurrentCoreBoostable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBoostable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::IsCurrentCoreBoostable(bool* IsBoostable)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.IsCurrentCoreBoostable");

	Ucore_opener_main_bpw_C_IsCurrentCoreBoostable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBoostable != nullptr)
		*IsBoostable = params.IsBoostable;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.GetVisibility_GamePadHints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ucore_opener_main_bpw_C::GetVisibility_GamePadHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.GetVisibility_GamePadHints");

	Ucore_opener_main_bpw_C_GetVisibility_GamePadHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucore_opener_main_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OnKeyDown");

	Ucore_opener_main_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucore_opener_main_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OnKeyUp");

	Ucore_opener_main_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Is Holding Crafting Key
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ucore_opener_main_bpw_C::Is_Holding_Crafting_Key()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Is Holding Crafting Key");

	Ucore_opener_main_bpw_C_Is_Holding_Crafting_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Is Crafting Button Key
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ucore_opener_main_bpw_C::Is_Crafting_Button_Key(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Is Crafting Button Key");

	Ucore_opener_main_bpw_C_Is_Crafting_Button_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateNextCoreButton
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::UpdateNextCoreButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateNextCoreButton");

	Ucore_opener_main_bpw_C_UpdateNextCoreButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdatePreviousCoreButton
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::UpdatePreviousCoreButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.UpdatePreviousCoreButton");

	Ucore_opener_main_bpw_C_UpdatePreviousCoreButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.SetQuantityText
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::SetQuantityText()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.SetQuantityText");

	Ucore_opener_main_bpw_C_SetQuantityText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.SelectPreviousCore
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::SelectPreviousCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.SelectPreviousCore");

	Ucore_opener_main_bpw_C_SelectPreviousCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.SelectNextCore
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::SelectNextCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.SelectNextCore");

	Ucore_opener_main_bpw_C_SelectNextCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.BuildCoreList
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::BuildCoreList()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.BuildCoreList");

	Ucore_opener_main_bpw_C_BuildCoreList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OpenCurrentCore
// (Public, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::OpenCurrentCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OpenCurrentCore");

	Ucore_opener_main_bpw_C_OpenCurrentCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.HasCoresToOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasCores                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::HasCoresToOpen(bool* HasCores)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.HasCoresToOpen");

	Ucore_opener_main_bpw_C_HasCoresToOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasCores != nullptr)
		*HasCores = params.HasCores;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateCoreButtons
// (Private, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::UpdateCoreButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateCoreButtons");

	Ucore_opener_main_bpw_C_UpdateCoreButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ucore_opener_main_bpw_C::BndEvt__LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Ucore_opener_main_bpw_C_BndEvt__LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ucore_opener_main_bpw_C::BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Ucore_opener_main_bpw_C_BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.SetCurrentCoreDetails
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::SetCurrentCoreDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.SetCurrentCoreDetails");

	Ucore_opener_main_bpw_C_SetCurrentCoreDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_85_On Key Hold Complete__DelegateSignature
// (BlueprintEvent)

void Ucore_opener_main_bpw_C::BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_85_On_Key_Hold_Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_85_On Key Hold Complete__DelegateSignature");

	Ucore_opener_main_bpw_C_BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_85_On_Key_Hold_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_115_On Mouse Down__DelegateSignature
// (BlueprintEvent)

void Ucore_opener_main_bpw_C::BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_115_On_Mouse_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_115_On Mouse Down__DelegateSignature");

	Ucore_opener_main_bpw_C_BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_115_On_Mouse_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_127_On Mouse Up__DelegateSignature
// (BlueprintEvent)

void Ucore_opener_main_bpw_C::BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_127_On_Mouse_Up__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_127_On Mouse Up__DelegateSignature");

	Ucore_opener_main_bpw_C_BndEvt__w_CraftingButton_3307_K2Node_ComponentBoundEvent_127_On_Mouse_Up__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucore_opener_main_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Construct");

	Ucore_opener_main_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.InputSwap");

	Ucore_opener_main_bpw_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.HideRewardBitsWindow
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::HideRewardBitsWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.HideRewardBitsWindow");

	Ucore_opener_main_bpw_C_HideRewardBitsWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.ResetCoreAfterOpening
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::ResetCoreAfterOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.ResetCoreAfterOpening");

	Ucore_opener_main_bpw_C_ResetCoreAfterOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.BackOut
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::BackOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.BackOut");

	Ucore_opener_main_bpw_C_BackOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Tick");

	Ucore_opener_main_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucore_opener_main_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Destruct");

	Ucore_opener_main_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.GrantChromaCore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  GrantChromaCore                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucore_opener_main_bpw_C::GrantChromaCore(const class FString& GrantChromaCore)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.GrantChromaCore");

	Ucore_opener_main_bpw_C_GrantChromaCore_Params params;
	params.GrantChromaCore = GrantChromaCore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.GetCoreGranted
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::GetCoreGranted()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.GetCoreGranted");

	Ucore_opener_main_bpw_C_GetCoreGranted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.CheckDustBar
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::CheckDustBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.CheckDustBar");

	Ucore_opener_main_bpw_C_CheckDustBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OnGetContainerDataComplete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           DoesContainerHaveChampionBoost (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          PatronBoostPlayers             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ucore_opener_main_bpw_C::OnGetContainerDataComplete(const class FString& InstanceId, bool DoesContainerHaveChampionBoost, TArray<class FString> PatronBoostPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OnGetContainerDataComplete");

	Ucore_opener_main_bpw_C_OnGetContainerDataComplete_Params params;
	params.InstanceId = InstanceId;
	params.DoesContainerHaveChampionBoost = DoesContainerHaveChampionBoost;
	params.PatronBoostPlayers = PatronBoostPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OpenedAllRewards
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::OpenedAllRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OpenedAllRewards");

	Ucore_opener_main_bpw_C_OpenedAllRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OpenAllBits
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::OpenAllBits()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OpenAllBits");

	Ucore_opener_main_bpw_C_OpenAllBits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.PrevCore
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::PrevCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.PrevCore");

	Ucore_opener_main_bpw_C_PrevCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.NextCore
// (BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::NextCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.NextCore");

	Ucore_opener_main_bpw_C_NextCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.ExecuteUbergraph_core_opener_main_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::ExecuteUbergraph_core_opener_main_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.ExecuteUbergraph_core_opener_main_bpw");

	Ucore_opener_main_bpw_C_ExecuteUbergraph_core_opener_main_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateFXColour__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ucore_opener_main_bpw_C::UpdateFXColour__DelegateSignature(const struct FLinearColor& Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateFXColour__DelegateSignature");

	Ucore_opener_main_bpw_C_UpdateFXColour__DelegateSignature_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateCoreDecals__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowPlayer1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Player1Champion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowPlayer2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowBoost3                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowBoost4                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::UpdateCoreDecals__DelegateSignature(bool ShowPlayer1, bool Player1Champion, bool ShowPlayer2, bool ShowBoost3, bool ShowBoost4)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.UpdateCoreDecals__DelegateSignature");

	Ucore_opener_main_bpw_C_UpdateCoreDecals__DelegateSignature_Params params;
	params.ShowPlayer1 = ShowPlayer1;
	params.Player1Champion = Player1Champion;
	params.ShowPlayer2 = ShowPlayer2;
	params.ShowBoost3 = ShowBoost3;
	params.ShowBoost4 = ShowBoost4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Update_ProgressComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::Update_ProgressComplete__DelegateSignature(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Update_ProgressComplete__DelegateSignature");

	Ucore_opener_main_bpw_C_Update_ProgressComplete__DelegateSignature_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.Camera_ResetToCoreOpener__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::Camera_ResetToCoreOpener__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.Camera_ResetToCoreOpener__DelegateSignature");

	Ucore_opener_main_bpw_C_Camera_ResetToCoreOpener__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.CurrentSelectedCore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    SelectedCore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucore_opener_main_bpw_C::CurrentSelectedCore__DelegateSignature(class UArchonInventoryItem* SelectedCore)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.CurrentSelectedCore__DelegateSignature");

	Ucore_opener_main_bpw_C_CurrentSelectedCore__DelegateSignature_Params params;
	params.SelectedCore = SelectedCore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.HasNoCores__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::HasNoCores__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.HasNoCores__DelegateSignature");

	Ucore_opener_main_bpw_C_HasNoCores__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C._CoreOpenTransition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::_CoreOpenTransition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C._CoreOpenTransition__DelegateSignature");

	Ucore_opener_main_bpw_C__CoreOpenTransition__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener_main_bpw.core_opener_main_bpw_C.OnMenuClosed_Camera__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ucore_opener_main_bpw_C::OnMenuClosed_Camera__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener_main_bpw.core_opener_main_bpw_C.OnMenuClosed_Camera__DelegateSignature");

	Ucore_opener_main_bpw_C_OnMenuClosed_Camera__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
