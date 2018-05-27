// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonChatCommand_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArchonChatCommand.ArchonChatCommand_C.Handle Command
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UArchonChatCommand_C::Handle_Command(const class FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArchonChatCommand.ArchonChatCommand_C.Handle Command");

	UArchonChatCommand_C_Handle_Command_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
