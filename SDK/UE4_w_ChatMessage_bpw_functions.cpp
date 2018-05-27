// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_ChatMessage_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Debug Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_ChatMessage_bpw_C::Debug_Message(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Debug Message");

	Uw_ChatMessage_bpw_C_Debug_Message_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Build Status Message
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Content                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Room                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (Parm, OutParm)

void Uw_ChatMessage_bpw_C::Build_Status_Message(const struct FText& Content, const struct FText& Room, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Build Status Message");

	Uw_ChatMessage_bpw_C_Build_Status_Message_Params params;
	params.Content = Content;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Get Party Message Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_From_Self                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void Uw_ChatMessage_bpw_C::Get_Party_Message_Color(bool Is_From_Self, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Get Party Message Color");

	Uw_ChatMessage_bpw_C_Get_Party_Message_Color_Params params;
	params.Is_From_Self = Is_From_Self;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Get Global Message Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_From_Self                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void Uw_ChatMessage_bpw_C::Get_Global_Message_Color(bool Is_From_Self, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Get Global Message Color");

	Uw_ChatMessage_bpw_C_Get_Global_Message_Color_Params params;
	params.Is_From_Self = Is_From_Self;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Setup Message
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPChatClientMessage    InMessage                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_ChatMessage_bpw_C::Setup_Message(struct FBPChatClientMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Setup Message");

	Uw_ChatMessage_bpw_C_Setup_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;
}


// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonChatMessageStruct Chat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Me                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Whisper                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChatMessage_bpw_C::Set_Text(const struct FArchonChatMessageStruct& Chat, bool Me, bool Whisper)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Set Text");

	Uw_ChatMessage_bpw_C_Set_Text_Params params;
	params.Chat = Chat;
	params.Me = Me;
	params.Whisper = Whisper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Show Message
// (BlueprintCallable, BlueprintEvent)

void Uw_ChatMessage_bpw_C::Show_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Show Message");

	Uw_ChatMessage_bpw_C_Show_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.ExecuteUbergraph_w_ChatMessage_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChatMessage_bpw_C::ExecuteUbergraph_w_ChatMessage_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.ExecuteUbergraph_w_ChatMessage_bpw");

	Uw_ChatMessage_bpw_C_ExecuteUbergraph_w_ChatMessage_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
