// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_recipe_thingsmith_inventorypanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_recipe_thingsmith_inventorypanel_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnKeyDown");

	Uw_recipe_thingsmith_inventorypanel_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ChildWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_recipe_thingsmith_inventorypanel_C::GetChild(int* ChildIndex, class UWidget** ChildWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.GetChild");

	Uw_recipe_thingsmith_inventorypanel_C_GetChild_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildWidget != nullptr)
		*ChildWidget = params.ChildWidget;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnDataViewChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_recipe_thingsmith_inventorypanel_C::OnDataViewChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnDataViewChanged");

	Uw_recipe_thingsmith_inventorypanel_C_OnDataViewChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_recipe_thingsmith_inventorypanel_C::AddItem(const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.AddItem");

	Uw_recipe_thingsmith_inventorypanel_C_AddItem_Params params;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.FocusChildIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_recipe_thingsmith_inventorypanel_C::FocusChildIndex(int* ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.FocusChildIndex");

	Uw_recipe_thingsmith_inventorypanel_C_FocusChildIndex_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.On Select - Dispatcher_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasicCraft_Recipe_C*    Recipe_Widget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SelectedRecipeID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_recipe_thingsmith_inventorypanel_C::On_Select___Dispatcher_Event_1(class UBasicCraft_Recipe_C* Recipe_Widget, const class FString& SelectedRecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.On Select - Dispatcher_Event_1");

	Uw_recipe_thingsmith_inventorypanel_C_On_Select___Dispatcher_Event_1_Params params;
	params.Recipe_Widget = Recipe_Widget;
	params.SelectedRecipeID = SelectedRecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.UpdateRecipeListFromCatalogs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDataTable*>      ItemCatalogs                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_recipe_thingsmith_inventorypanel_C::UpdateRecipeListFromCatalogs(TArray<class UDataTable*> ItemCatalogs)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.UpdateRecipeListFromCatalogs");

	Uw_recipe_thingsmith_inventorypanel_C_UpdateRecipeListFromCatalogs_Params params;
	params.ItemCatalogs = ItemCatalogs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_recipe_thingsmith_inventorypanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.Construct");

	Uw_recipe_thingsmith_inventorypanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnClientInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_recipe_thingsmith_inventorypanel_C::OnClientInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnClientInventoryChanged");

	Uw_recipe_thingsmith_inventorypanel_C_OnClientInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.RefreshItemStates
// (BlueprintCallable, BlueprintEvent)

void Uw_recipe_thingsmith_inventorypanel_C::RefreshItemStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.RefreshItemStates");

	Uw_recipe_thingsmith_inventorypanel_C_RefreshItemStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.ExecuteUbergraph_w_recipe_thingsmith_inventorypanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_recipe_thingsmith_inventorypanel_C::ExecuteUbergraph_w_recipe_thingsmith_inventorypanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.ExecuteUbergraph_w_recipe_thingsmith_inventorypanel");

	Uw_recipe_thingsmith_inventorypanel_C_ExecuteUbergraph_w_recipe_thingsmith_inventorypanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnGamepadConfirmButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_recipe_thingsmith_inventorypanel_C::OnGamepadConfirmButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnGamepadConfirmButtonPressed__DelegateSignature");

	Uw_recipe_thingsmith_inventorypanel_C_OnGamepadConfirmButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnTooltipWarningChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TooltipString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_recipe_thingsmith_inventorypanel_C::OnTooltipWarningChanged__DelegateSignature(const class FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnTooltipWarningChanged__DelegateSignature");

	Uw_recipe_thingsmith_inventorypanel_C_OnTooltipWarningChanged__DelegateSignature_Params params;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnSalvageButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_recipe_thingsmith_inventorypanel_C::OnSalvageButtonClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnSalvageButtonClicked__DelegateSignature");

	Uw_recipe_thingsmith_inventorypanel_C_OnSalvageButtonClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
