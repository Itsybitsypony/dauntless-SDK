// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_chat_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_chat_bpw.w_chat_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_chat_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.GetDefaultFocusedWidget");

	Uw_chat_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Get Chat Mode Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_chat_bpw_C::Get_Chat_Mode_Label()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Get Chat Mode Label");

	Uw_chat_bpw_C_Get_Chat_Mode_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_chat_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.GetVisibility_1");

	Uw_chat_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_chat_bpw_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.OnMouseButtonDown_1");

	Uw_chat_bpw_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Get_BGWindowBacker_Opacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_chat_bpw_C::Get_BGWindowBacker_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Get_BGWindowBacker_Opacity");

	Uw_chat_bpw_C_Get_BGWindowBacker_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Has Reply Recipient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_chat_bpw_C::Has_Reply_Recipient()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Has Reply Recipient");

	Uw_chat_bpw_C_Has_Reply_Recipient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Send Private Message to Recipient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  MsgBody                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_chat_bpw_C::Send_Private_Message_to_Recipient(const class FString& MsgBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Send Private Message to Recipient");

	Uw_chat_bpw_C_Send_Private_Message_to_Recipient_Params params;
	params.MsgBody = MsgBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Send Normal Chat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  MsgBody                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_chat_bpw_C::Send_Normal_Chat(const class FString& MsgBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Send Normal Chat");

	Uw_chat_bpw_C_Send_Normal_Chat_Params params;
	params.MsgBody = MsgBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Send Command
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_chat_bpw_C::Send_Command(const class FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Send Command");

	Uw_chat_bpw_C_Send_Command_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Is Pagebreak
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBPChatClientMessage    InMessage                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_chat_bpw_C::Is_Pagebreak(struct FBPChatClientMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Is Pagebreak");

	Uw_chat_bpw_C_Is_Pagebreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Scroll to End Next Frame
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Scroll_to_End_Next_Frame()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Scroll to End Next Frame");

	Uw_chat_bpw_C_Scroll_to_End_Next_Frame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_chat_bpw_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.OnPaint");

	Uw_chat_bpw_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function w_chat_bpw.w_chat_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_chat_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.OnFocusReceived");

	Uw_chat_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Set Guild Chat Visual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Set_Guild_Chat_Visual()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Set Guild Chat Visual");

	Uw_chat_bpw_C_Set_Guild_Chat_Visual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Set Whisper Chat Visual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Set_Whisper_Chat_Visual()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Set Whisper Chat Visual");

	Uw_chat_bpw_C_Set_Whisper_Chat_Visual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Set Party Chat Visual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Set_Party_Chat_Visual()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Set Party Chat Visual");

	Uw_chat_bpw_C_Set_Party_Chat_Visual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Should Listen for Commands
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_chat_bpw_C::Should_Listen_for_Commands()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Should Listen for Commands");

	Uw_chat_bpw_C_Should_Listen_for_Commands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Set Guild Chat Mode
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Set_Guild_Chat_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Set Guild Chat Mode");

	Uw_chat_bpw_C_Set_Guild_Chat_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Send Guild Chat Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  MsgBody                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_chat_bpw_C::Send_Guild_Chat_Message(const class FString& MsgBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Send Guild Chat Message");

	Uw_chat_bpw_C_Send_Guild_Chat_Message_Params params;
	params.MsgBody = MsgBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Send Party Chat Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  MsgBody                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_chat_bpw_C::Send_Party_Chat_Message(const class FString& MsgBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Send Party Chat Message");

	Uw_chat_bpw_C_Send_Party_Chat_Message_Params params;
	params.MsgBody = MsgBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Is Escapable Window Mode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_chat_bpw_C::Is_Escapable_Window_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Is Escapable Window Mode");

	Uw_chat_bpw_C_Is_Escapable_Window_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Get Message Log Height
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uw_chat_bpw_C::Get_Message_Log_Height()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Get Message Log Height");

	Uw_chat_bpw_C_Get_Message_Log_Height_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Can Scroll Older
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_chat_bpw_C::Can_Scroll_Older()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Can Scroll Older");

	Uw_chat_bpw_C_Can_Scroll_Older_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Get Scroll Older Icon Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_chat_bpw_C::Get_Scroll_Older_Icon_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Get Scroll Older Icon Color");

	Uw_chat_bpw_C_Get_Scroll_Older_Icon_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Can Scroll Newer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::Can_Scroll_Newer(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Can Scroll Newer");

	Uw_chat_bpw_C_Can_Scroll_Newer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function w_chat_bpw.w_chat_bpw_C.Get Scroll Newer Icon Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_chat_bpw_C::Get_Scroll_Newer_Icon_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Get Scroll Newer Icon Color");

	Uw_chat_bpw_C_Get_Scroll_Newer_Icon_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Scroll to Newest Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::Scroll_to_Newest_Message(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Scroll to Newest Message");

	Uw_chat_bpw_C_Scroll_to_Newest_Message_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_chat_bpw_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.OnMouseWheel");

	Uw_chat_bpw_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Should Show Message
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBPChatClientMessage    InMessage                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_chat_bpw_C::Should_Show_Message(struct FBPChatClientMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Should Show Message");

	Uw_chat_bpw_C_Should_Show_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Set Normal Mode Label
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Set_Normal_Mode_Label()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Set Normal Mode Label");

	Uw_chat_bpw_C_Set_Normal_Mode_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Get Player Context
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_In_City                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsInLobby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::Get_Player_Context(bool* Is_In_City, bool* IsInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Get Player Context");

	Uw_chat_bpw_C_Get_Player_Context_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_In_City != nullptr)
		*Is_In_City = params.Is_In_City;
	if (IsInLobby != nullptr)
		*IsInLobby = params.IsInLobby;
}


// Function w_chat_bpw.w_chat_bpw_C.Set Whisper Chat Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_chat_bpw_C::Set_Whisper_Chat_Mode(const class FString& Player_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Set Whisper Chat Mode");

	Uw_chat_bpw_C_Set_Whisper_Chat_Mode_Params params;
	params.Player_Name = Player_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Set Party Chat Mode
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Set_Party_Chat_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Set Party Chat Mode");

	Uw_chat_bpw_C_Set_Party_Chat_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Escape to Normal Mode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Did_Change_Mode                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::Escape_to_Normal_Mode(bool* Did_Change_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Escape to Normal Mode");

	Uw_chat_bpw_C_Escape_to_Normal_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Change_Mode != nullptr)
		*Did_Change_Mode = params.Did_Change_Mode;
}


// Function w_chat_bpw.w_chat_bpw_C.Get Party Chat Channel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString Uw_chat_bpw_C::Get_Party_Chat_Channel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Get Party Chat Channel");

	Uw_chat_bpw_C_Get_Party_Chat_Channel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_chat_bpw.w_chat_bpw_C.Send
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Should_Exit_Input              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::Send(bool* Should_Exit_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Send");

	Uw_chat_bpw_C_Send_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Should_Exit_Input != nullptr)
		*Should_Exit_Input = params.Should_Exit_Input;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessagesNewest_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__ScrollMessagesNewest_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessagesNewest_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__ScrollMessagesNewest_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessagesOldest_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__ScrollMessagesOldest_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessagesOldest_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__ScrollMessagesOldest_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessageNewer_K2Node_ComponentBoundEvent_404_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__ScrollMessageNewer_K2Node_ComponentBoundEvent_404_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessageNewer_K2Node_ComponentBoundEvent_404_OnButtonClickedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__ScrollMessageNewer_K2Node_ComponentBoundEvent_404_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessageOlder_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__ScrollMessageOlder_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessageOlder_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__ScrollMessageOlder_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__Button_282_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__Button_282_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__Message_K2Node_ComponentBoundEvent_96_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::BndEvt__Message_K2Node_ComponentBoundEvent_96_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__Message_K2Node_ComponentBoundEvent_96_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__Message_K2Node_ComponentBoundEvent_96_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_chat_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Construct");

	Uw_chat_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Setup Chat
// (BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Setup_Chat()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Setup Chat");

	Uw_chat_bpw_C_Setup_Chat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.OnChatClientMessageAdded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPChatClientMessage    Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_chat_bpw_C::OnChatClientMessageAdded(const struct FBPChatClientMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.OnChatClientMessageAdded");

	Uw_chat_bpw_C_OnChatClientMessageAdded_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__MessageBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_chat_bpw_C::BndEvt__MessageBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__MessageBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Clear Input Box
// (BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Clear_Input_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Clear Input Box");

	Uw_chat_bpw_C_Clear_Input_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_140_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__HelpButton_K2Node_ComponentBoundEvent_140_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_140_OnButtonHoverEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_140_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__HelpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Refresh Message Log Visibility
// (BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Refresh_Message_Log_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Refresh Message Log Visibility");

	Uw_chat_bpw_C_Refresh_Message_Log_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_chat_bpw_C::BndEvt__HelpButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	Uw_chat_bpw_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Exit Chat Input
// (BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Exit_Chat_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Exit Chat Input");

	Uw_chat_bpw_C_Exit_Chat_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Tick");

	Uw_chat_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Escape Text Input
// (BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Escape_Text_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Escape Text Input");

	Uw_chat_bpw_C_Escape_Text_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Exit To Normal Input
// (BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Exit_To_Normal_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Exit To Normal Input");

	Uw_chat_bpw_C_Exit_To_Normal_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.Input Box Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::Input_Box_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.Input Box Focus");

	Uw_chat_bpw_C_Input_Box_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.ExecuteUbergraph_w_chat_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_chat_bpw_C::ExecuteUbergraph_w_chat_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.ExecuteUbergraph_w_chat_bpw");

	Uw_chat_bpw_C_ExecuteUbergraph_w_chat_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_chat_bpw.w_chat_bpw_C.ClickedOutsideChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_chat_bpw_C::ClickedOutsideChat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_chat_bpw.w_chat_bpw_C.ClickedOutsideChat__DelegateSignature");

	Uw_chat_bpw_C_ClickedOutsideChat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
