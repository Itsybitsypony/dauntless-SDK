#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_akevent_conditional_notify_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass akevent_conditional_notify.akevent_conditional_notify_C
// 0x00CE (0x0118 - 0x004A)
class Uakevent_conditional_notify_C : public UAnimNotify_AkEvent_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0050(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass akevent_conditional_notify.akevent_conditional_notify_C");
		return ptr;
	}


	void ShouldExecuteNotify(class AActor** Owner, bool* ShouldExecute_);
	class FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
