#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_morph_target_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass morph_target_interface.morph_target_interface_C
// 0x0000 (0x0028 - 0x0028)
class Umorph_target_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass morph_target_interface.morph_target_interface_C");
		return ptr;
	}


	void GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
