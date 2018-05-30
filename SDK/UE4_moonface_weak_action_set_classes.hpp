#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moonface_weak_action_set_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass moonface_weak_action_set.moonface_weak_action_set_C
// 0x000C (0x03D0 - 0x03C4)
class Amoonface_weak_action_set_C : public ABp_BehemothActionSet_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass moonface_weak_action_set.moonface_weak_action_set_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_moonface_weak_action_set(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
