// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_text_tokenizer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cell_text_tokenizer.cell_text_tokenizer_C.GetTokenSubstitution
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWithinSubstitution           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SubstitutionText               (Parm, OutParm, ZeroConstructor)
// bool                           RetainBrackets                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ucell_text_tokenizer_C::GetTokenSubstitution(class UObject* WorldContextObject, const struct FName& Token, bool IsWithinSubstitution, class FString* SubstitutionText, bool* RetainBrackets)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_text_tokenizer.cell_text_tokenizer_C.GetTokenSubstitution");

	Ucell_text_tokenizer_C_GetTokenSubstitution_Params params;
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


// Function cell_text_tokenizer.cell_text_tokenizer_C.FormatFloatValue
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxFractionalDigits            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Formatted                      (Parm, OutParm)

void Ucell_text_tokenizer_C::FormatFloatValue(float Value, int MaxFractionalDigits, struct FText* Formatted)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_text_tokenizer.cell_text_tokenizer_C.FormatFloatValue");

	Ucell_text_tokenizer_C_FormatFloatValue_Params params;
	params.Value = Value;
	params.MaxFractionalDigits = MaxFractionalDigits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Formatted != nullptr)
		*Formatted = params.Formatted;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
