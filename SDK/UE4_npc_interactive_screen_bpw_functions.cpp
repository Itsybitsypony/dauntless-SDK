// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_interactive_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Unpc_interactive_screen_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.GetDefaultFocusedWidget");

	Unpc_interactive_screen_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.OnAquireTopOfFocusStack
// (Event, Public, BlueprintEvent)

void Unpc_interactive_screen_bpw_C::OnAquireTopOfFocusStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.OnAquireTopOfFocusStack");

	Unpc_interactive_screen_bpw_C_OnAquireTopOfFocusStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.PlayNPCOutro
// (BlueprintCallable, BlueprintEvent)

void Unpc_interactive_screen_bpw_C::PlayNPCOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.PlayNPCOutro");

	Unpc_interactive_screen_bpw_C_PlayNPCOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.PlayNPCIntro
// (BlueprintCallable, BlueprintEvent)

void Unpc_interactive_screen_bpw_C::PlayNPCIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.PlayNPCIntro");

	Unpc_interactive_screen_bpw_C_PlayNPCIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.ShowIntroSubmenu
// (BlueprintCallable, BlueprintEvent)

void Unpc_interactive_screen_bpw_C::ShowIntroSubmenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.ShowIntroSubmenu");

	Unpc_interactive_screen_bpw_C_ShowIntroSubmenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.SkipToSingleSubmenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_interactive_screen_bpw_C::SkipToSingleSubmenu(class UQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.SkipToSingleSubmenu");

	Unpc_interactive_screen_bpw_C_SkipToSingleSubmenu_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Unpc_interactive_screen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.Construct");

	Unpc_interactive_screen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.ExecuteUbergraph_npc_interactive_screen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_interactive_screen_bpw_C::ExecuteUbergraph_npc_interactive_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.ExecuteUbergraph_npc_interactive_screen_bpw");

	Unpc_interactive_screen_bpw_C_ExecuteUbergraph_npc_interactive_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.CloseMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Unpc_interactive_screen_bpw_C::CloseMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.CloseMenu__DelegateSignature");

	Unpc_interactive_screen_bpw_C_CloseMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
