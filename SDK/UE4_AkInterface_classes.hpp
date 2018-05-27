#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AkInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AkInterface.AkInterface_C
// 0x0000 (0x0028 - 0x0028)
class UAkInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AkInterface.AkInterface_C");
		return ptr;
	}


	void GetShouldExecuteAKNotify(class UAnimNotify_AkEvent_C* NotifyInstance, bool* Return);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
