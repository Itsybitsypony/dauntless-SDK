// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_catalog_GridItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_catalog_GridItem.w_catalog_GridItem_C.GetContentBGOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_catalog_GridItem_C::GetContentBGOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GetContentBGOpacity");

	Uw_catalog_GridItem_C_GetContentBGOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Get Tooltip Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_catalog_GridItem_C::Get_Tooltip_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Get Tooltip Widget");

	Uw_catalog_GridItem_C_Get_Tooltip_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_catalog_GridItem_C::SetIconSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.SetIconSize");

	Uw_catalog_GridItem_C_SetIconSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GetContentColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_catalog_GridItem_C::GetContentColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GetContentColorAndOpacity_1");

	Uw_catalog_GridItem_C_GetContentColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Get_StrokeHover_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_catalog_GridItem_C::Get_StrokeHover_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Get_StrokeHover_Visibility_1");

	Uw_catalog_GridItem_C_Get_StrokeHover_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Get_RarityBG_Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_catalog_GridItem_C::Get_RarityBG_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Get_RarityBG_Color");

	Uw_catalog_GridItem_C_Get_RarityBG_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_catalog_GridItem_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.OnKeyDown");

	Uw_catalog_GridItem_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_catalog_GridItem_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.OnMouseButtonDown");

	Uw_catalog_GridItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.SetEmptyIconBrokenIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::SetEmptyIconBrokenIcon(class UImage* InputPin, EItemGroupType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.SetEmptyIconBrokenIcon");

	Uw_catalog_GridItem_C_SetEmptyIconBrokenIcon_Params params;
	params.InputPin = InputPin;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GetVisibility_Equipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_catalog_GridItem_C::GetVisibility_Equipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GetVisibility_Equipped");

	Uw_catalog_GridItem_C_GetVisibility_Equipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_catalog_GridItem_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.OnFocusReceived");

	Uw_catalog_GridItem_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.OnLoaded_A058EA6248D678A919D5DF9143DF6E2B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::OnLoaded_A058EA6248D678A919D5DF9143DF6E2B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.OnLoaded_A058EA6248D678A919D5DF9143DF6E2B");

	Uw_catalog_GridItem_C_OnLoaded_A058EA6248D678A919D5DF9143DF6E2B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_catalog_GridItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Construct");

	Uw_catalog_GridItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Tick");

	Uw_catalog_GridItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_catalog_GridItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	Uw_catalog_GridItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Hover_Show
// (BlueprintCallable, BlueprintEvent)

void Uw_catalog_GridItem_C::Hover_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Hover_Show");

	Uw_catalog_GridItem_C_Hover_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Hover_Hide
// (BlueprintCallable, BlueprintEvent)

void Uw_catalog_GridItem_C::Hover_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Hover_Hide");

	Uw_catalog_GridItem_C_Hover_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_catalog_GridItem_C::BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature");

	Uw_catalog_GridItem_C_BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_104_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_catalog_GridItem_C::BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	Uw_catalog_GridItem_C_BndEvt__w_GridItem_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.Secondary Click
// (BlueprintCallable, BlueprintEvent)

void Uw_catalog_GridItem_C::Secondary_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.Secondary Click");

	Uw_catalog_GridItem_C_Secondary_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.ExecuteUbergraph_w_catalog_GridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::ExecuteUbergraph_w_catalog_GridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.ExecuteUbergraph_w_catalog_GridItem");

	Uw_catalog_GridItem_C_ExecuteUbergraph_w_catalog_GridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemSecondaryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnsItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::GridItemSecondaryClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, bool OwnsItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemSecondaryClicked__DelegateSignature");

	Uw_catalog_GridItem_C_GridItemSecondaryClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.OwnsItem = OwnsItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemUnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_catalog_GridItem_C::GridItemUnFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemUnFocused__DelegateSignature");

	Uw_catalog_GridItem_C_GridItemUnFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemUnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::GridItemUnHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemUnHovered__DelegateSignature");

	Uw_catalog_GridItem_C_GridItemUnHovered__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::GridItemHovered__DelegateSignature(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemHovered__DelegateSignature");

	Uw_catalog_GridItem_C_GridItemHovered__DelegateSignature_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::GridItemFocused__DelegateSignature(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemFocused__DelegateSignature");

	Uw_catalog_GridItem_C_GridItemFocused__DelegateSignature_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemClicked_Equip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GridIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Owns                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_catalog_GridItem_C::GridItemClicked_Equip__DelegateSignature(const class FString& ItemInstance, const class FString& ItemID, int GridIndex, bool Owns)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_catalog_GridItem.w_catalog_GridItem_C.GridItemClicked_Equip__DelegateSignature");

	Uw_catalog_GridItem_C_GridItemClicked_Equip__DelegateSignature_Params params;
	params.ItemInstance = ItemInstance;
	params.ItemID = ItemID;
	params.GridIndex = GridIndex;
	params.Owns = Owns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
