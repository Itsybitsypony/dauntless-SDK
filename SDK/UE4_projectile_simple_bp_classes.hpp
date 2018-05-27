#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_projectile_simple_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass projectile_simple_bp.projectile_simple_bp_C
// 0x0013 (0x0660 - 0x064D)
class Aprojectile_simple_bp_C : public Aprojectile_base_bp_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0650(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           DamageCollision;                                          // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass projectile_simple_bp.projectile_simple_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void AuthSweepHitEvent();
	void ExecuteUbergraph_projectile_simple_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
