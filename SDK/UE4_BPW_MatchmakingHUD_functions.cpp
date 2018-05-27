// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_MatchmakingHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_MatchmakingHUD.BPW_MatchmakingHUD_C.Update Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Show_Spinner                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MatchmakingHUD_C::Update_Message(const struct FText& Message, bool Show_Spinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MatchmakingHUD.BPW_MatchmakingHUD_C.Update Message");

	UBPW_MatchmakingHUD_C_Update_Message_Params params;
	params.Message = Message;
	params.Show_Spinner = Show_Spinner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
