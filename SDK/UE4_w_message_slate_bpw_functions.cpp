// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_message_slate_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_message_slate_bpw.w_message_slate_bpw_C.GetTokenSubstitution
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWithinSubstitution           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SubstitutionText               (Parm, OutParm, ZeroConstructor)
// bool                           RetainBrackets                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_message_slate_bpw_C::GetTokenSubstitution(class UObject* WorldContextObject, const struct FName& Token, bool IsWithinSubstitution, class FString* SubstitutionText, bool* RetainBrackets)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.GetTokenSubstitution");

	Uw_message_slate_bpw_C_GetTokenSubstitution_Params params;
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


// Function w_message_slate_bpw.w_message_slate_bpw_C.Process Tokens for Message
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Source                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   Processed_Text                 (Parm, OutParm)

void Uw_message_slate_bpw_C::Process_Tokens_for_Message(struct FText* Source, struct FText* Processed_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Process Tokens for Message");

	Uw_message_slate_bpw_C_Process_Tokens_for_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
	if (Processed_Text != nullptr)
		*Processed_Text = params.Processed_Text;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.Replace Input Token
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Substitution                   (Parm, OutParm, ZeroConstructor)
// bool                           bUseSubstitution               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_bpw_C::Replace_Input_Token(const struct FName& Token, class FString* Substitution, bool* bUseSubstitution)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Replace Input Token");

	Uw_message_slate_bpw_C_Replace_Input_Token_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Substitution != nullptr)
		*Substitution = params.Substitution;
	if (bUseSubstitution != nullptr)
		*bUseSubstitution = params.bUseSubstitution;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.Replace Token
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Substitution                   (Parm, OutParm, ZeroConstructor)
// bool                           TokenReplaced                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_bpw_C::Replace_Token(const struct FName& Token, class FString* Substitution, bool* TokenReplaced)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Replace Token");

	Uw_message_slate_bpw_C_Replace_Token_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Substitution != nullptr)
		*Substitution = params.Substitution;
	if (TokenReplaced != nullptr)
		*TokenReplaced = params.TokenReplaced;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_message_slate_bpw_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.OnMouseButtonUp");

	Uw_message_slate_bpw_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_message_slate_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.OnKeyUp");

	Uw_message_slate_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_message_slate_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.GetDefaultFocusedWidget");

	Uw_message_slate_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.OnLoaded_5A567FC54B867285FEF160AE05451C8E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_bpw_C::OnLoaded_5A567FC54B867285FEF160AE05451C8E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.OnLoaded_5A567FC54B867285FEF160AE05451C8E");

	Uw_message_slate_bpw_C_OnLoaded_5A567FC54B867285FEF160AE05451C8E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.PreConstruct");

	Uw_message_slate_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_message_slate_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Construct");

	Uw_message_slate_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.Load Background Texture
// (BlueprintCallable, BlueprintEvent)

void Uw_message_slate_bpw_C::Load_Background_Texture()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Load Background Texture");

	Uw_message_slate_bpw_C_Load_Background_Texture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.Add Tutorial Slate Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fmessage_slate_image    Image                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_message_slate_bpw_C::Add_Tutorial_Slate_Image(const struct Fmessage_slate_image& Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Add Tutorial Slate Image");

	Uw_message_slate_bpw_C_Add_Tutorial_Slate_Image_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.Close
// (BlueprintCallable, BlueprintEvent)

void Uw_message_slate_bpw_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Close");

	Uw_message_slate_bpw_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.OnInputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_bpw_C::OnInputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.OnInputSwap");

	Uw_message_slate_bpw_C_OnInputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.Process Message Tokens
// (BlueprintCallable, BlueprintEvent)

void Uw_message_slate_bpw_C::Process_Message_Tokens()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.Process Message Tokens");

	Uw_message_slate_bpw_C_Process_Message_Tokens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_bpw.w_message_slate_bpw_C.ExecuteUbergraph_w_message_slate_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_bpw_C::ExecuteUbergraph_w_message_slate_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_bpw.w_message_slate_bpw_C.ExecuteUbergraph_w_message_slate_bpw");

	Uw_message_slate_bpw_C_ExecuteUbergraph_w_message_slate_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
