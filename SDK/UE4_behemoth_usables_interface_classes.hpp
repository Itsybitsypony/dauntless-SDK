#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_usables_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_usables_interface.behemoth_usables_interface_C
// 0x0000 (0x0028 - 0x0028)
class Ubehemoth_usables_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_usables_interface.behemoth_usables_interface_C");
		return ptr;
	}


	void SetBehemothHasUsed(bool HasBehemothUsed);
	void GetBehemothHasUsed(bool* HasBehemothUsed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
