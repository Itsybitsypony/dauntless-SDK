// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_DebugInventory.BPW_DebugInventory_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UBPW_DebugInventory_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.GetDefaultFocusedWidget");

	UBPW_DebugInventory_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowChallenges
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowChallenges");

	UBPW_DebugInventory_C_ShowChallenges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowDataModel
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowDataModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowDataModel");

	UBPW_DebugInventory_C_ShowDataModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowCells
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowCells()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowCells");

	UBPW_DebugInventory_C_ShowCells_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowDebugCommands
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowDebugCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowDebugCommands");

	UBPW_DebugInventory_C_ShowDebugCommands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.Set SigilDyeSurfaceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmourDyeSurfaceType          Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::Set_SigilDyeSurfaceType(class UMaterialInstanceDynamic* InputPin, EArmourDyeSurfaceType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.Set SigilDyeSurfaceType");

	UBPW_DebugInventory_C_Set_SigilDyeSurfaceType_Params params;
	params.InputPin = InputPin;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.Set BorderDyeSurfaceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmourDyeSurfaceType          Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::Set_BorderDyeSurfaceType(class UMaterialInstanceDynamic* InputPin, EArmourDyeSurfaceType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.Set BorderDyeSurfaceType");

	UBPW_DebugInventory_C_Set_BorderDyeSurfaceType_Params params;
	params.InputPin = InputPin;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.Set FabricDyeSurfaceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmourDyeSurfaceType          Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::Set_FabricDyeSurfaceType(class UMaterialInstanceDynamic* InputPin, EArmourDyeSurfaceType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.Set FabricDyeSurfaceType");

	UBPW_DebugInventory_C_Set_FabricDyeSurfaceType_Params params;
	params.InputPin = InputPin;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowTinting
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowTinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowTinting");

	UBPW_DebugInventory_C_ShowTinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBPW_DebugInventory_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnKeyDown");

	UBPW_DebugInventory_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowLoadout
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowLoadout");

	UBPW_DebugInventory_C_ShowLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowCatalog
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowCatalog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowCatalog");

	UBPW_DebugInventory_C_ShowCatalog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::ShowInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ShowInventory");

	UBPW_DebugInventory_C_ShowInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_9EA2D14B47EE7C91239632AB84B21F61
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_9EA2D14B47EE7C91239632AB84B21F61(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_9EA2D14B47EE7C91239632AB84B21F61");

	UBPW_DebugInventory_C_OnLoaded_9EA2D14B47EE7C91239632AB84B21F61_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_E16B41A74A714CCEB928A4BC74E9B6A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_E16B41A74A714CCEB928A4BC74E9B6A8(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_E16B41A74A714CCEB928A4BC74E9B6A8");

	UBPW_DebugInventory_C_OnLoaded_E16B41A74A714CCEB928A4BC74E9B6A8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_1D18E0784A8669F687D90686988DAA83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_1D18E0784A8669F687D90686988DAA83(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_1D18E0784A8669F687D90686988DAA83");

	UBPW_DebugInventory_C_OnLoaded_1D18E0784A8669F687D90686988DAA83_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_3401DEEF476AF8B4FAA930A291129175
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_3401DEEF476AF8B4FAA930A291129175(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_3401DEEF476AF8B4FAA930A291129175");

	UBPW_DebugInventory_C_OnLoaded_3401DEEF476AF8B4FAA930A291129175_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_6D437E5544B6B78808CAD4A90D711683
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_6D437E5544B6B78808CAD4A90D711683(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_6D437E5544B6B78808CAD4A90D711683");

	UBPW_DebugInventory_C_OnLoaded_6D437E5544B6B78808CAD4A90D711683_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_657040F04BF9B451FC0C3DBACE1DF91B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_657040F04BF9B451FC0C3DBACE1DF91B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_657040F04BF9B451FC0C3DBACE1DF91B");

	UBPW_DebugInventory_C_OnLoaded_657040F04BF9B451FC0C3DBACE1DF91B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_A704830146CF5BA966ABF594D7D5EEAE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_A704830146CF5BA966ABF594D7D5EEAE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_A704830146CF5BA966ABF594D7D5EEAE");

	UBPW_DebugInventory_C_OnLoaded_A704830146CF5BA966ABF594D7D5EEAE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_643D9DA748556155B5C0D7BEE3701D7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_643D9DA748556155B5C0D7BEE3701D7E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_643D9DA748556155B5C0D7BEE3701D7E");

	UBPW_DebugInventory_C_OnLoaded_643D9DA748556155B5C0D7BEE3701D7E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_86B0336B4A3A521EF61C108A9B0E0EE2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_86B0336B4A3A521EF61C108A9B0E0EE2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_86B0336B4A3A521EF61C108A9B0E0EE2");

	UBPW_DebugInventory_C_OnLoaded_86B0336B4A3A521EF61C108A9B0E0EE2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_96ECD3B04D3C9EC14CC062BBDA7DFA20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_96ECD3B04D3C9EC14CC062BBDA7DFA20(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_96ECD3B04D3C9EC14CC062BBDA7DFA20");

	UBPW_DebugInventory_C_OnLoaded_96ECD3B04D3C9EC14CC062BBDA7DFA20_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_8B27C243488D883A279982B07D8E8C7B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_8B27C243488D883A279982B07D8E8C7B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_8B27C243488D883A279982B07D8E8C7B");

	UBPW_DebugInventory_C_OnLoaded_8B27C243488D883A279982B07D8E8C7B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_C5B3EF544EDF5898C520E4897CCFC684
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::OnLoaded_C5B3EF544EDF5898C520E4897CCFC684(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_C5B3EF544EDF5898C520E4897CCFC684");

	UBPW_DebugInventory_C_OnLoaded_C5B3EF544EDF5898C520E4897CCFC684_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_DebugInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.Construct");

	UBPW_DebugInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_475_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_475_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_475_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_475_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_DebugInventory_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.Destruct");

	UBPW_DebugInventory_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_1_PlayEmote__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  emoteID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_DebugInventory_C::BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_1_PlayEmote__DelegateSignature(const class FString& emoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_1_PlayEmote__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_1_PlayEmote__DelegateSignature_Params params;
	params.emoteID = emoteID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_576_ResetEmote__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_576_ResetEmote__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_576_ResetEmote__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_576_ResetEmote__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_163_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_163_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_163_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_163_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.SpawnBanner
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::SpawnBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.SpawnBanner");

	UBPW_DebugInventory_C_SpawnBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.RefreshBanner
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::RefreshBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.RefreshBanner");

	UBPW_DebugInventory_C_RefreshBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1012_BannerUpdateEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBannerCustomizationItemIDs BannerIDs                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_DebugInventory_C::BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1012_BannerUpdateEvent__DelegateSignature(const struct FBannerCustomizationItemIDs& BannerIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1012_BannerUpdateEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1012_BannerUpdateEvent__DelegateSignature_Params params;
	params.BannerIDs = BannerIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Quests_K2Node_ComponentBoundEvent_382_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_Quests_K2Node_ComponentBoundEvent_382_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Quests_K2Node_ComponentBoundEvent_382_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_Quests_K2Node_ComponentBoundEvent_382_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_141_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_141_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_141_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_141_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1224_BannerUpdateEvent_Dye__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveDyeSlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1224_BannerUpdateEvent_Dye__DelegateSignature(const struct FName& RowName, int ActiveDyeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1224_BannerUpdateEvent_Dye__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1224_BannerUpdateEvent_Dye__DelegateSignature_Params params;
	params.RowName = RowName;
	params.ActiveDyeSlot = ActiveDyeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_682_LoadoutCategoryHovered_L__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_682_LoadoutCategoryHovered_L__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_682_LoadoutCategoryHovered_L__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_682_LoadoutCategoryHovered_L__DelegateSignature_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_713_LoadoutCategoryHovered_R__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_713_LoadoutCategoryHovered_R__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_713_LoadoutCategoryHovered_R__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_713_LoadoutCategoryHovered_R__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_743_LoadoutCategoryHovered_D__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_743_LoadoutCategoryHovered_D__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_743_LoadoutCategoryHovered_D__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_743_LoadoutCategoryHovered_D__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_772_LoadoutCategorySelected_L_Weapons__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_772_LoadoutCategorySelected_L_Weapons__DelegateSignature(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_772_LoadoutCategorySelected_L_Weapons__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_772_LoadoutCategorySelected_L_Weapons__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_800_LoadoutCategorySelected_R_Armour__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_800_LoadoutCategorySelected_R_Armour__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_800_LoadoutCategorySelected_R_Armour__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_800_LoadoutCategorySelected_R_Armour__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_827_LoadoutCategorySelected_D_Consumables__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_827_LoadoutCategorySelected_D_Consumables__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_827_LoadoutCategorySelected_D_Consumables__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_827_LoadoutCategorySelected_D_Consumables__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_307_BackToMainStage_FromArmour__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> ScreenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_307_BackToMainStage_FromArmour__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_307_BackToMainStage_FromArmour__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_307_BackToMainStage_FromArmour__DelegateSignature_Params params;
	params.ScreenMode = ScreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_334_BackToMainStage_FromWeapons__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_334_BackToMainStage_FromWeapons__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_334_BackToMainStage_FromWeapons__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_334_BackToMainStage_FromWeapons__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_359_BackToMainStage_FromConsumables__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_359_BackToMainStage_FromConsumables__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_359_BackToMainStage_FromConsumables__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_359_BackToMainStage_FromConsumables__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.SetBannerMaterial
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventory_C::SetBannerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.SetBannerMaterial");

	UBPW_DebugInventory_C_SetBannerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_154_UpdatePaperdoll_EquipNewItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_154_UpdatePaperdoll_EquipNewItem__DelegateSignature(const class FString& ItemID, EItemGroupType Type, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_154_UpdatePaperdoll_EquipNewItem__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_154_UpdatePaperdoll_EquipNewItem__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Type = Type;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_737_RefreshPaperdoll_Pose__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_737_RefreshPaperdoll_Pose__DelegateSignature(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_737_RefreshPaperdoll_Pose__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_737_RefreshPaperdoll_Pose__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_672_UpdatePaperdoll_ArmourTint__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDyeVariant             NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EArmorType                     NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_672_UpdatePaperdoll_ArmourTint__DelegateSignature(const struct FDyeVariant& NewParam, EArmorType NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_672_UpdatePaperdoll_ArmourTint__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_672_UpdatePaperdoll_ArmourTint__DelegateSignature_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_237_K2Node_ComponentBoundEvent_545_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_237_K2Node_ComponentBoundEvent_545_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_237_K2Node_ComponentBoundEvent_545_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_237_K2Node_ComponentBoundEvent_545_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_armor_tintcontrol_loadout_K2Node_ComponentBoundEvent_136_UpdatePaperdoll__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__bpw_armor_tintcontrol_loadout_K2Node_ComponentBoundEvent_136_UpdatePaperdoll__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_armor_tintcontrol_loadout_K2Node_ComponentBoundEvent_136_UpdatePaperdoll__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__bpw_armor_tintcontrol_loadout_K2Node_ComponentBoundEvent_136_UpdatePaperdoll__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Cells_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_Cells_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Cells_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_Cells_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_DataModel_K2Node_ComponentBoundEvent_627_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_DataModel_K2Node_ComponentBoundEvent_627_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_DataModel_K2Node_ComponentBoundEvent_627_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_DataModel_K2Node_ComponentBoundEvent_627_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Challenges_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_Challenges_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Challenges_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_Challenges_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Catalog_K2Node_ComponentBoundEvent_423_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_Catalog_K2Node_ComponentBoundEvent_423_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Catalog_K2Node_ComponentBoundEvent_423_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_Catalog_K2Node_ComponentBoundEvent_423_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugInventory_C::BndEvt__Button_63_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugInventory_C_BndEvt__Button_63_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventory.BPW_DebugInventory_C.ExecuteUbergraph_BPW_DebugInventory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventory_C::ExecuteUbergraph_BPW_DebugInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventory.BPW_DebugInventory_C.ExecuteUbergraph_BPW_DebugInventory");

	UBPW_DebugInventory_C_ExecuteUbergraph_BPW_DebugInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
