// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_combosheet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_combosheet.w_combosheet_C.SetupSpecialActionKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_combosheet_C::SetupSpecialActionKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupSpecialActionKey");

	Uw_combosheet_C_SetupSpecialActionKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupSecondaryAttacKKeyInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_combosheet_C::SetupSecondaryAttacKKeyInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupSecondaryAttacKKeyInput");

	Uw_combosheet_C_SetupSecondaryAttacKKeyInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupBasicAttackKeyinput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_combosheet_C::SetupBasicAttackKeyinput()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupBasicAttackKeyinput");

	Uw_combosheet_C_SetupBasicAttackKeyinput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupSpecialAttack2Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fui_combo               InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_combosheet_C::SetupSpecialAttack2Info(const struct Fui_combo& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupSpecialAttack2Info");

	Uw_combosheet_C_SetupSpecialAttack2Info_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupSpecialAttack1Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fui_combo               InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_combosheet_C::SetupSpecialAttack1Info(const struct Fui_combo& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupSpecialAttack1Info");

	Uw_combosheet_C_SetupSpecialAttack1Info_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupHeavyAttackInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fui_combo               InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_combosheet_C::SetupHeavyAttackInfo(const struct Fui_combo& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupHeavyAttackInfo");

	Uw_combosheet_C_SetupHeavyAttackInfo_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupBasicAttackInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fui_combo               InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_combosheet_C::SetupBasicAttackInfo(const struct Fui_combo& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupBasicAttackInfo");

	Uw_combosheet_C_SetupBasicAttackInfo_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupExtraSpecialAttack2Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fui_combo>       InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_combosheet_C::SetupExtraSpecialAttack2Info(TArray<struct Fui_combo>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupExtraSpecialAttack2Info");

	Uw_combosheet_C_SetupExtraSpecialAttack2Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function w_combosheet.w_combosheet_C.SetupExtraSpecialAttack1Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fui_combo>       InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_combosheet_C::SetupExtraSpecialAttack1Info(TArray<struct Fui_combo>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupExtraSpecialAttack1Info");

	Uw_combosheet_C_SetupExtraSpecialAttack1Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function w_combosheet.w_combosheet_C.SetupExtraHeavyAttackInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fui_combo>       InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_combosheet_C::SetupExtraHeavyAttackInfo(TArray<struct Fui_combo>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupExtraHeavyAttackInfo");

	Uw_combosheet_C_SetupExtraHeavyAttackInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function w_combosheet.w_combosheet_C.SetupExtraBasicAttackInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fui_combo>       InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_combosheet_C::SetupExtraBasicAttackInfo(TArray<struct Fui_combo>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupExtraBasicAttackInfo");

	Uw_combosheet_C_SetupExtraBasicAttackInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function w_combosheet.w_combosheet_C.OnLoaded_A058EA6248D678A919D5DF91C17C00BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_combosheet_C::OnLoaded_A058EA6248D678A919D5DF91C17C00BB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.OnLoaded_A058EA6248D678A919D5DF91C17C00BB");

	Uw_combosheet_C_OnLoaded_A058EA6248D678A919D5DF91C17C00BB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_combosheet_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.InputSwap");

	Uw_combosheet_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_combosheet_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.OnSynchronizeProperties");

	Uw_combosheet_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_combosheet_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.Construct");

	Uw_combosheet_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_combosheet_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.Refresh");

	Uw_combosheet_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.SetupKeyinputs
// (BlueprintCallable, BlueprintEvent)

void Uw_combosheet_C::SetupKeyinputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.SetupKeyinputs");

	Uw_combosheet_C_SetupKeyinputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combosheet.w_combosheet_C.ExecuteUbergraph_w_combosheet
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_combosheet_C::ExecuteUbergraph_w_combosheet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combosheet.w_combosheet_C.ExecuteUbergraph_w_combosheet");

	Uw_combosheet_C_ExecuteUbergraph_w_combosheet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
