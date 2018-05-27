// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonChatFunc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArchonChatFunc.ArchonChatFunc_C.Get Guild Chat Color
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void UArchonChatFunc_C::STATIC_Get_Guild_Chat_Color(class UObject* __WorldContext, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArchonChatFunc.ArchonChatFunc_C.Get Guild Chat Color");

	UArchonChatFunc_C_Get_Guild_Chat_Color_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ArchonChatFunc.ArchonChatFunc_C.Set Text Opacity
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Shadow_Opacity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UArchonChatFunc_C::STATIC_Set_Text_Opacity(class UTextBlock* Text, float Opacity, float Shadow_Opacity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArchonChatFunc.ArchonChatFunc_C.Set Text Opacity");

	UArchonChatFunc_C_Set_Text_Opacity_Params params;
	params.Text = Text;
	params.Opacity = Opacity;
	params.Shadow_Opacity = Shadow_Opacity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArchonChatFunc.ArchonChatFunc_C.Get Status Message Color
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void UArchonChatFunc_C::STATIC_Get_Status_Message_Color(class UObject* __WorldContext, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArchonChatFunc.ArchonChatFunc_C.Get Status Message Color");

	UArchonChatFunc_C_Get_Status_Message_Color_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ArchonChatFunc.ArchonChatFunc_C.Get Whisper Chat Color
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void UArchonChatFunc_C::STATIC_Get_Whisper_Chat_Color(class UObject* __WorldContext, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArchonChatFunc.ArchonChatFunc_C.Get Whisper Chat Color");

	UArchonChatFunc_C_Get_Whisper_Chat_Color_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ArchonChatFunc.ArchonChatFunc_C.Get Party Chat Color
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void UArchonChatFunc_C::STATIC_Get_Party_Chat_Color(class UObject* __WorldContext, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArchonChatFunc.ArchonChatFunc_C.Get Party Chat Color");

	UArchonChatFunc_C_Get_Party_Chat_Color_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ArchonChatFunc.ArchonChatFunc_C.Get Lobby Client
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonLobbyClient*      Lobby_Client                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UArchonChatFunc_C::STATIC_Get_Lobby_Client(class APlayerController* Player_Controller, class UObject* __WorldContext, class AArchonLobbyClient** Lobby_Client)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArchonChatFunc.ArchonChatFunc_C.Get Lobby Client");

	UArchonChatFunc_C_Get_Lobby_Client_Params params;
	params.Player_Controller = Player_Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lobby_Client != nullptr)
		*Lobby_Client = params.Lobby_Client;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
