// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Chat_MenuRoot_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.RefreshHintText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::RefreshHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.RefreshHintText");

	UChat_MenuRoot_bpw_C_RefreshHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Is Valid Channel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChat_MenuRoot_bpw_C::Is_Valid_Channel(const class FString& Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Is Valid Channel");

	UChat_MenuRoot_bpw_C_Is_Valid_Channel_Params params;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChat_MenuRoot_bpw_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnPaint");

	UChat_MenuRoot_bpw_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Set Whisper Reply Player Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPChatClientMessage    InMessage                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChat_MenuRoot_bpw_C::Set_Whisper_Reply_Player_Name(struct FBPChatClientMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Set Whisper Reply Player Name");

	UChat_MenuRoot_bpw_C_Set_Whisper_Reply_Player_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Scroll to End Next Frame
// (Public, BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Scroll_to_End_Next_Frame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Scroll to End Next Frame");

	UChat_MenuRoot_bpw_C_Scroll_to_End_Next_Frame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Should Show Message
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBPChatClientMessage    InMessage                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChat_MenuRoot_bpw_C::Should_Show_Message(struct FBPChatClientMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Should Show Message");

	UChat_MenuRoot_bpw_C_Should_Show_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;

	return params.ReturnValue;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Is Chat System Ready
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChat_MenuRoot_bpw_C::Is_Chat_System_Ready(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Is Chat System Ready");

	UChat_MenuRoot_bpw_C_Is_Chat_System_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Get Player Context
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_In_City                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsInLobby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChat_MenuRoot_bpw_C::Get_Player_Context(bool* Is_In_City, bool* IsInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Get Player Context");

	UChat_MenuRoot_bpw_C_Get_Player_Context_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_In_City != nullptr)
		*Is_In_City = params.Is_In_City;
	if (IsInLobby != nullptr)
		*IsInLobby = params.IsInLobby;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Get Party Chat Channel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UChat_MenuRoot_bpw_C::Get_Party_Chat_Channel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Get Party Chat Channel");

	UChat_MenuRoot_bpw_C_Get_Party_Chat_Channel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Construct");

	UChat_MenuRoot_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Join Chat Rooms
// (BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Join_Chat_Rooms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Join Chat Rooms");

	UChat_MenuRoot_bpw_C_Join_Chat_Rooms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnChatClientMessageAdded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPChatClientMessage    Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChat_MenuRoot_bpw_C::OnChatClientMessageAdded(const struct FBPChatClientMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnChatClientMessageAdded");

	UChat_MenuRoot_bpw_C_OnChatClientMessageAdded_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Escape Chat Window
// (BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Escape_Chat_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Escape Chat Window");

	UChat_MenuRoot_bpw_C_Escape_Chat_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Focus Chat Window
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GameplayMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChat_MenuRoot_bpw_C::Focus_Chat_Window(bool GameplayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Focus Chat Window");

	UChat_MenuRoot_bpw_C_Focus_Chat_Window_Params params;
	params.GameplayMode = GameplayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChat_MenuRoot_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Tick");

	UChat_MenuRoot_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Escape to Normal Chat
// (BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Escape_to_Normal_Chat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Escape to Normal Chat");

	UChat_MenuRoot_bpw_C_Escape_to_Normal_Chat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Destruct");

	UChat_MenuRoot_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Exit Chat Rooms
// (BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Exit_Chat_Rooms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Exit Chat Rooms");

	UChat_MenuRoot_bpw_C_Exit_Chat_Rooms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnBroadcastMessagesUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FArchonBroadcastMessage> Messages                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UChat_MenuRoot_bpw_C::OnBroadcastMessagesUpdated(TArray<struct FArchonBroadcastMessage> Messages)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnBroadcastMessagesUpdated");

	UChat_MenuRoot_bpw_C_OnBroadcastMessagesUpdated_Params params;
	params.Messages = Messages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Focus to Whisper Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChat_MenuRoot_bpw_C::Focus_to_Whisper_Mode(const class FString& Player_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Focus to Whisper Mode");

	UChat_MenuRoot_bpw_C_Focus_to_Whisper_Mode_Params params;
	params.Player_Name = Player_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_7_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void UChat_MenuRoot_bpw_C::BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_7_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_7_FakeFocusReceived__DelegateSignature");

	UChat_MenuRoot_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_7_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Create New Chat Window
// (BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::Create_New_Chat_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Create New Chat Window");

	UChat_MenuRoot_bpw_C_Create_New_Chat_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnKeyMappingUpdate
// (BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::OnKeyMappingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnKeyMappingUpdate");

	UChat_MenuRoot_bpw_C_OnKeyMappingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.ExecuteUbergraph_Chat_MenuRoot_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChat_MenuRoot_bpw_C::ExecuteUbergraph_Chat_MenuRoot_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.ExecuteUbergraph_Chat_MenuRoot_bpw");

	UChat_MenuRoot_bpw_C_ExecuteUbergraph_Chat_MenuRoot_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.FocusReturn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChat_MenuRoot_bpw_C::FocusReturn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.FocusReturn__DelegateSignature");

	UChat_MenuRoot_bpw_C_FocusReturn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
