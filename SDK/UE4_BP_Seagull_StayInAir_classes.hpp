#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Seagull_StayInAir_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Seagull_StayInAir.BP_Seagull_StayInAir_C
// 0x001C (0x08D8 - 0x08BC)
class ABP_Seagull_StayInAir_C : public ABP_NPC_FlyingWalking_Bird_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Seagull_sound;                                            // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Seagull_StayInAir.BP_Seagull_StayInAir_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Seagull_StayInAir(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
