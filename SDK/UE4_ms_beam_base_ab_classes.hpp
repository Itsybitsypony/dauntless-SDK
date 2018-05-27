#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_beam_base_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ms_beam_base_ab.ms_beam_base_ab_C
// 0x0028 (0x0AA8 - 0x0A80)
class Ums_beam_base_ab_C : public Uweapon_eqs_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A80(0x0008) (Transient, DuplicateTransient)
	struct FName                                       FlamethrowerDurationAttribute;                            // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FlamethrowerDurationModAttribute;                         // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AArchonWeapon*                               Weapon;                                                   // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Uammo_bpc_C*                                 AmmoComponent;                                            // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ms_beam_base_ab.ms_beam_base_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_ms_beam_base_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
