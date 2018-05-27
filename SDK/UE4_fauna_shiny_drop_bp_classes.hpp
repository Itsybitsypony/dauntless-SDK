#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_shiny_drop_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass fauna_shiny_drop_bp.fauna_shiny_drop_bp_C
// 0x000F (0x0700 - 0x06F1)
class Afauna_shiny_drop_bp_C : public Ashiny_drop_base_bp_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        Sphere_1;                                                 // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass fauna_shiny_drop_bp.fauna_shiny_drop_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
