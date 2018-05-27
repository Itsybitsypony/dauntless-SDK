// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_new_thingsmith_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Unew_thingsmith_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.GetDefaultFocusedWidget");

	Unew_thingsmith_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Unew_thingsmith_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnKeyDown");

	Unew_thingsmith_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.InitFromParams
// (Public, BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::InitFromParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.InitFromParams");

	Unew_thingsmith_bpw_C_InitFromParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.DisplayWebStore
// (Public, BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::DisplayWebStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.DisplayWebStore");

	Unew_thingsmith_bpw_C_DisplayWebStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.DoCraftVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::DoCraftVO(class UArchonInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.DoCraftVO");

	Unew_thingsmith_bpw_C_DoCraftVO_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.LanternDataTableLookup_3dPreview_WIP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Unew_thingsmith_bpw_C::LanternDataTableLookup_3dPreview_WIP(class FString* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.LanternDataTableLookup_3dPreview_WIP");

	Unew_thingsmith_bpw_C_LanternDataTableLookup_3dPreview_WIP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.GetBodyTypeSetting
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::GetBodyTypeSetting(EArchonBodyType* BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.GetBodyTypeSetting");

	Unew_thingsmith_bpw_C_GetBodyTypeSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyType != nullptr)
		*BodyType = params.BodyType;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.ChangeBrushTint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             NewTint                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UImage*                  WidgetImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::ChangeBrushTint(const struct FSlateColor& NewTint, class UImage* WidgetImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.ChangeBrushTint");

	Unew_thingsmith_bpw_C_ChangeBrushTint_Params params;
	params.NewTint = NewTint;
	params.WidgetImage = WidgetImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Build Crafting Payload
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingPayload        Payload                        (Parm, OutParm)

void Unew_thingsmith_bpw_C::Build_Crafting_Payload(struct FCraftingPayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.Build Crafting Payload");

	Unew_thingsmith_bpw_C_Build_Crafting_Payload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Payload != nullptr)
		*Payload = params.Payload;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Evaluate Selected Recipe for Craftability
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanCraft_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::Evaluate_Selected_Recipe_for_Craftability(bool* CanCraft_)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.Evaluate Selected Recipe for Craftability");

	Unew_thingsmith_bpw_C_Evaluate_Selected_Recipe_for_Craftability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanCraft_ != nullptr)
		*CanCraft_ = params.CanCraft_;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Update Button State
// (Private, BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::Update_Button_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.Update Button State");

	Unew_thingsmith_bpw_C_Update_Button_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnLoaded_A058EA6248D678A919D5DF9131AAF10F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::OnLoaded_A058EA6248D678A919D5DF9131AAF10F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnLoaded_A058EA6248D678A919D5DF9131AAF10F");

	Unew_thingsmith_bpw_C_OnLoaded_A058EA6248D678A919D5DF9131AAF10F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Unew_thingsmith_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.Construct");

	Unew_thingsmith_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Unew_thingsmith_bpw_C::BndEvt__CraftButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");

	Unew_thingsmith_bpw_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.New Selection Made
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasicCraft_Recipe_C*    BasicCraft_Recipe              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SelectedRecipeID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Unew_thingsmith_bpw_C::New_Selection_Made(class UBasicCraft_Recipe_C* BasicCraft_Recipe, const class FString& SelectedRecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.New Selection Made");

	Unew_thingsmith_bpw_C_New_Selection_Made_Params params;
	params.BasicCraft_Recipe = BasicCraft_Recipe;
	params.SelectedRecipeID = SelectedRecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Attempt Craft
// (BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::Attempt_Craft()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.Attempt Craft");

	Unew_thingsmith_bpw_C_Attempt_Craft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Unew_thingsmith_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.Destruct");

	Unew_thingsmith_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.InitializeRecipes
// (BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::InitializeRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.InitializeRecipes");

	Unew_thingsmith_bpw_C_InitializeRecipes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.RecipeItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::RecipeItemSelected(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.RecipeItemSelected");

	Unew_thingsmith_bpw_C_RecipeItemSelected_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnDataChanged_Event_1
// (BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::OnDataChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnDataChanged_Event_1");

	Unew_thingsmith_bpw_C_OnDataChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnGamepadConfirmButtonPressed_Event_1
// (BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::OnGamepadConfirmButtonPressed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnGamepadConfirmButtonPressed_Event_1");

	Unew_thingsmith_bpw_C_OnGamepadConfirmButtonPressed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.NPCInteractInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Avendor_interactive_bp_C* Vendor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fnpc_ui_struct          NPCMenuTuning                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Unew_thingsmith_bpw_C::NPCInteractInitialize(class Avendor_interactive_bp_C* Vendor, const struct Fnpc_ui_struct& NPCMenuTuning)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.NPCInteractInitialize");

	Unew_thingsmith_bpw_C_NPCInteractInitialize_Params params;
	params.Vendor = Vendor;
	params.NPCMenuTuning = NPCMenuTuning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.CloseMenu");

	Unew_thingsmith_bpw_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Setup Icon and Count
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Unew_thingsmith_bpw_C::Setup_Icon_and_Count(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.Setup Icon and Count");

	Unew_thingsmith_bpw_C_Setup_Icon_and_Count_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.On Crafted Item Refresh
// (BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::On_Crafted_Item_Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.On Crafted Item Refresh");

	Unew_thingsmith_bpw_C_On_Crafted_Item_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.ExecuteUbergraph_new_thingsmith_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::ExecuteUbergraph_new_thingsmith_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.ExecuteUbergraph_new_thingsmith_bpw");

	Unew_thingsmith_bpw_C_ExecuteUbergraph_new_thingsmith_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnCraftPressedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Successful_Purchase            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unew_thingsmith_bpw_C::OnCraftPressedDispatcher__DelegateSignature(bool Successful_Purchase)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnCraftPressedDispatcher__DelegateSignature");

	Unew_thingsmith_bpw_C_OnCraftPressedDispatcher__DelegateSignature_Params params;
	params.Successful_Purchase = Successful_Purchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.NewRecipeSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Unew_thingsmith_bpw_C::NewRecipeSelection__DelegateSignature(const class FString& RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.NewRecipeSelection__DelegateSignature");

	Unew_thingsmith_bpw_C_NewRecipeSelection__DelegateSignature_Params params;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function new_thingsmith_bpw.new_thingsmith_bpw_C.On MenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Unew_thingsmith_bpw_C::On_MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function new_thingsmith_bpw.new_thingsmith_bpw_C.On MenuClosed__DelegateSignature");

	Unew_thingsmith_bpw_C_On_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
