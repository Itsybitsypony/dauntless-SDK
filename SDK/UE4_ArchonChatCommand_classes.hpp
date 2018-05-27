#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonChatCommand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArchonChatCommand.ArchonChatCommand_C
// 0x0000 (0x0028 - 0x0028)
class UArchonChatCommand_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArchonChatCommand.ArchonChatCommand_C");
		return ptr;
	}


	void Handle_Command(const class FString& Command);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
