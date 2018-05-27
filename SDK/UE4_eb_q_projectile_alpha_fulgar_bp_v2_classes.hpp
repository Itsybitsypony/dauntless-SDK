#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_q_projectile_alpha_fulgar_bp_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eb_q_projectile_alpha_fulgar_bp_v2.eb_q_projectile_alpha_fulgar_bp_v2_C
// 0x0010 (0x04C0 - 0x04B0)
class Aeb_q_projectile_alpha_fulgar_bp_v2_C : public Aweapon_eqs_aoe_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    p_q_alpha_fulgar_beam;                                    // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eb_q_projectile_alpha_fulgar_bp_v2.eb_q_projectile_alpha_fulgar_bp_v2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_eb_q_projectile_alpha_fulgar_bp_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
