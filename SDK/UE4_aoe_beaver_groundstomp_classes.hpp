#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_beaver_groundstomp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass aoe_beaver_groundstomp.aoe_beaver_groundstomp_C
// 0x0010 (0x0550 - 0x0540)
class Aaoe_beaver_groundstomp_C : public Aaoe_base_slam_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Beaver_Hell_Stomp;                                        // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass aoe_beaver_groundstomp.aoe_beaver_groundstomp_C");
		return ptr;
	}


	void UserConstructionScript();
	void CustomAOELogic();
	void ExecuteUbergraph_aoe_beaver_groundstomp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
