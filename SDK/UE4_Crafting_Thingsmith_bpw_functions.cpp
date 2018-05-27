// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Crafting_Thingsmith_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UCrafting_Thingsmith_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.GetDefaultFocusedWidget");

	UCrafting_Thingsmith_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCrafting_Thingsmith_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnKeyDown");

	UCrafting_Thingsmith_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnSpawnAlternateQuestWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCrafting_Thingsmith_bpw_C::OnSpawnAlternateQuestWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnSpawnAlternateQuestWidget__DelegateSignature");

	UCrafting_Thingsmith_bpw_C_OnSpawnAlternateQuestWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnCraftPressedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Successful_Purchase            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCrafting_Thingsmith_bpw_C::OnCraftPressedDispatcher__DelegateSignature(bool Successful_Purchase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnCraftPressedDispatcher__DelegateSignature");

	UCrafting_Thingsmith_bpw_C_OnCraftPressedDispatcher__DelegateSignature_Params params;
	params.Successful_Purchase = Successful_Purchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.NewRecipeSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCrafting_Thingsmith_bpw_C::NewRecipeSelection__DelegateSignature(const class FString& RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.NewRecipeSelection__DelegateSignature");

	UCrafting_Thingsmith_bpw_C_NewRecipeSelection__DelegateSignature_Params params;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.On MenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCrafting_Thingsmith_bpw_C::On_MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.On MenuClosed__DelegateSignature");

	UCrafting_Thingsmith_bpw_C_On_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
