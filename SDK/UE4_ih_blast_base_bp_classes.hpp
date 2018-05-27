#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_blast_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ih_blast_base_bp.ih_blast_base_bp_C
// 0x0010 (0x04C0 - 0x04B0)
class Aih_blast_base_bp_C : public Aweapon_eqs_aoe_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    p_ihammer_blast;                                          // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ih_blast_base_bp.ih_blast_base_bp_C");
		return ptr;
	}


	void GetCustomDamageScale(class AActor** TargetActor, float* Scale);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomAOELogic();
	void ExecuteUbergraph_ih_blast_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
