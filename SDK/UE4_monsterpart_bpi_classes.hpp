#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_monsterpart_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass monsterpart_bpi.monsterpart_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Umonsterpart_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass monsterpart_bpi.monsterpart_bpi_C");
		return ptr;
	}


	void GetPhatBones(TArray<struct FName>* PhATBones);
	void GetSeverPhatBones(TArray<struct FName>* SeverPhatBones);
	void GetCurrentPartType(TEnumAsByte<Ebehemoth_part_type>* PartType);
	void GetBodyPartType(TEnumAsByte<Ebehemoth_bodypart_type>* BodyPartType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
