// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_loadout_inventorypanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetVisibility_Sorting Button
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_loadout_inventorypanel_C::GetVisibility_Sorting_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetVisibility_Sorting Button");

	Uw_loadout_inventorypanel_C_GetVisibility_Sorting_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_loadout_inventorypanel_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnKeyDown");

	Uw_loadout_inventorypanel_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetVisibility_EquipWarning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_loadout_inventorypanel_C::GetVisibility_EquipWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetVisibility_EquipWarning");

	Uw_loadout_inventorypanel_C_GetVisibility_EquipWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetText_GroupLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_loadout_inventorypanel_C::GetText_GroupLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetText_GroupLabel");

	Uw_loadout_inventorypanel_C_GetText_GroupLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ChildWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::GetChild(int* ChildIndex, class UWidget** ChildWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GetChild");

	Uw_loadout_inventorypanel_C_GetChild_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildWidget != nullptr)
		*ChildWidget = params.ChildWidget;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_loadout_inventorypanel_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnFocusReceived");

	Uw_loadout_inventorypanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.FocusEquippedItem
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_loadout_inventorypanel_C::FocusEquippedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.FocusEquippedItem");

	Uw_loadout_inventorypanel_C_FocusEquippedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnDataViewChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_inventorypanel_C::OnDataViewChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.OnDataViewChanged");

	Uw_loadout_inventorypanel_C_OnDataViewChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.AddGridItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::AddGridItem(const class FString& InstanceId, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.AddGridItem");

	Uw_loadout_inventorypanel_C_AddGridItem_Params params;
	params.InstanceId = InstanceId;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GridIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::GridItemClicked(const class FString& ItemInstance, const class FString& ItemID, int GridIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemClicked");

	Uw_loadout_inventorypanel_C_GridItemClicked_Params params;
	params.ItemInstance = ItemInstance;
	params.ItemID = ItemID;
	params.GridIndex = GridIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::GridItemFocused(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemFocused");

	Uw_loadout_inventorypanel_C_GridItemFocused_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::GridItemHovered(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemHovered");

	Uw_loadout_inventorypanel_C_GridItemHovered_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemUnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::GridItemUnHovered(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemUnHovered");

	Uw_loadout_inventorypanel_C_GridItemUnHovered_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.AddEmptyGridItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::AddEmptyGridItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.AddEmptyGridItem");

	Uw_loadout_inventorypanel_C_AddEmptyGridItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.FocusChildIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::FocusChildIndex(int* ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.FocusChildIndex");

	Uw_loadout_inventorypanel_C_FocusChildIndex_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemSecondaryClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::GridItemSecondaryClick(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.GridItemSecondaryClick");

	Uw_loadout_inventorypanel_C_GridItemSecondaryClick_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.SwitchSortMode
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_inventorypanel_C::SwitchSortMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.SwitchSortMode");

	Uw_loadout_inventorypanel_C_SwitchSortMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.SwitchSortOrder
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_inventorypanel_C::SwitchSortOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.SwitchSortOrder");

	Uw_loadout_inventorypanel_C_SwitchSortOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.ExecuteUbergraph_w_loadout_inventorypanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_inventorypanel_C::ExecuteUbergraph_w_loadout_inventorypanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_inventorypanel.w_loadout_inventorypanel_C.ExecuteUbergraph_w_loadout_inventorypanel");

	Uw_loadout_inventorypanel_C_ExecuteUbergraph_w_loadout_inventorypanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
