#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_wisp_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gatherable_wisp_base_bp.gatherable_wisp_base_bp_C
// 0x000C (0x042C - 0x0420)
class Agatherable_wisp_base_bp_C : public Agatherable_driveby_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	float                                              LanternChargeAmount;                                      // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gatherable_wisp_base_bp.gatherable_wisp_base_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPickupPayload(class AArchonCharacter** PlayerPickingUp);
	void ExecuteUbergraph_gatherable_wisp_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
