// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debug_behemoth_spawner_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ComboBoxItemFormatting
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Udebug_behemoth_spawner_bpw_C::ComboBoxItemFormatting(const class FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ComboBoxItemFormatting");

	Udebug_behemoth_spawner_bpw_C_ComboBoxItemFormatting_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Udebug_behemoth_spawner_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.OnKeyDown");

	Udebug_behemoth_spawner_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ReturnFocusedButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_MenuButton_C*         FocusedButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_behemoth_spawner_bpw_C::ReturnFocusedButton(class Uw_MenuButton_C* FocusedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ReturnFocusedButton");

	Udebug_behemoth_spawner_bpw_C_ReturnFocusedButton_Params params;
	params.FocusedButton = FocusedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Udebug_behemoth_spawner_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.Construct");

	Udebug_behemoth_spawner_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu Button Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_behemoth_spawner_bpw_C::BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu_Button_Clicked__DelegateSignature(int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu Button Clicked__DelegateSignature");

	Udebug_behemoth_spawner_bpw_C_BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu_Button_Clicked__DelegateSignature_Params params;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.Server_RequestBehemoth
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_behemoth_spawner_bpw_C::Server_RequestBehemoth(const struct FName& Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.Server_RequestBehemoth");

	Udebug_behemoth_spawner_bpw_C_Server_RequestBehemoth_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ExecuteUbergraph_debug_behemoth_spawner_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_behemoth_spawner_bpw_C::ExecuteUbergraph_debug_behemoth_spawner_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ExecuteUbergraph_debug_behemoth_spawner_bpw");

	Udebug_behemoth_spawner_bpw_C_ExecuteUbergraph_debug_behemoth_spawner_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
