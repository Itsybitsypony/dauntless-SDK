// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_radio_prototype_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetTokenSubstitution
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWithinSubstitution           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SubstitutionText               (Parm, OutParm, ZeroConstructor)
// bool                           RetainBrackets                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ulantern_radio_prototype_bpw_C::GetTokenSubstitution(class UObject* WorldContextObject, const struct FName& Token, bool IsWithinSubstitution, class FString* SubstitutionText, bool* RetainBrackets)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetTokenSubstitution");

	Ulantern_radio_prototype_bpw_C_GetTokenSubstitution_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Token = Token;
	params.IsWithinSubstitution = IsWithinSubstitution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubstitutionText != nullptr)
		*SubstitutionText = params.SubstitutionText;
	if (RetainBrackets != nullptr)
		*RetainBrackets = params.RetainBrackets;

	return params.ReturnValue;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetAxisTokens
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReverseOrder                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          AxesValues                     (Parm, OutParm, ZeroConstructor)

void Ulantern_radio_prototype_bpw_C::GetAxisTokens(const struct FName& Token, bool ReverseOrder, TArray<class FString>* AxesValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetAxisTokens");

	Ulantern_radio_prototype_bpw_C_GetAxisTokens_Params params;
	params.Token = Token;
	params.ReverseOrder = ReverseOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AxesValues != nullptr)
		*AxesValues = params.AxesValues;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetMoveTokenSubstitution
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  Substitution                   (Parm, OutParm, ZeroConstructor)

void Ulantern_radio_prototype_bpw_C::GetMoveTokenSubstitution(class FString* Substitution)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetMoveTokenSubstitution");

	Ulantern_radio_prototype_bpw_C_GetMoveTokenSubstitution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Substitution != nullptr)
		*Substitution = params.Substitution;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceAxisToken
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Substitution                   (Parm, OutParm, ZeroConstructor)
// bool                           UseSubstitution                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_radio_prototype_bpw_C::ReplaceAxisToken(const struct FName& Token, class FString* Substitution, bool* UseSubstitution)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceAxisToken");

	Ulantern_radio_prototype_bpw_C_ReplaceAxisToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Substitution != nullptr)
		*Substitution = params.Substitution;
	if (UseSubstitution != nullptr)
		*UseSubstitution = params.UseSubstitution;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceInputToken
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Substitution                   (Parm, OutParm, ZeroConstructor)
// bool                           UseSubstitution                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_radio_prototype_bpw_C::ReplaceInputToken(const struct FName& Token, class FString* Substitution, bool* UseSubstitution)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceInputToken");

	Ulantern_radio_prototype_bpw_C_ReplaceInputToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Substitution != nullptr)
		*Substitution = params.Substitution;
	if (UseSubstitution != nullptr)
		*UseSubstitution = params.UseSubstitution;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceToken
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Substitution                   (Parm, OutParm, ZeroConstructor)
// bool                           TokenReplaced                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_radio_prototype_bpw_C::ReplaceToken(const struct FName& Token, class FString* Substitution, bool* TokenReplaced)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceToken");

	Ulantern_radio_prototype_bpw_C_ReplaceToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Substitution != nullptr)
		*Substitution = params.Substitution;
	if (TokenReplaced != nullptr)
		*TokenReplaced = params.TokenReplaced;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ProcessInputMappingTextTokens
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   Processed_Text                 (Parm, OutParm)

void Ulantern_radio_prototype_bpw_C::ProcessInputMappingTextTokens(struct FText* Processed_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ProcessInputMappingTextTokens");

	Ulantern_radio_prototype_bpw_C_ProcessInputMappingTextTokens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Processed_Text != nullptr)
		*Processed_Text = params.Processed_Text;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.UpdatePlayerInstructionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ulantern_radio_prototype_bpw_C::UpdatePlayerInstructionText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.UpdatePlayerInstructionText");

	Ulantern_radio_prototype_bpw_C_UpdatePlayerInstructionText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.HideLanternRadio
// (Public, BlueprintCallable, BlueprintEvent)

void Ulantern_radio_prototype_bpw_C::HideLanternRadio()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.HideLanternRadio");

	Ulantern_radio_prototype_bpw_C_HideLanternRadio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ShowLanternRadio
// (Public, BlueprintCallable, BlueprintEvent)

void Ulantern_radio_prototype_bpw_C::ShowLanternRadio()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ShowLanternRadio");

	Ulantern_radio_prototype_bpw_C_ShowLanternRadio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.UpdateLanternRadioText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ulantern_radio_prototype_bpw_C::UpdateLanternRadioText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.UpdateLanternRadioText");

	Ulantern_radio_prototype_bpw_C_UpdateLanternRadioText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ulantern_radio_prototype_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.Construct");

	Ulantern_radio_prototype_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.OnInputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulantern_radio_prototype_bpw_C::OnInputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.OnInputSwap");

	Ulantern_radio_prototype_bpw_C_OnInputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ExecuteUbergraph_lantern_radio_prototype_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulantern_radio_prototype_bpw_C::ExecuteUbergraph_lantern_radio_prototype_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ExecuteUbergraph_lantern_radio_prototype_bpw");

	Ulantern_radio_prototype_bpw_C_ExecuteUbergraph_lantern_radio_prototype_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
