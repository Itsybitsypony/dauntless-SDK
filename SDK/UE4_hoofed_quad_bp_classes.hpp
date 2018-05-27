#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hoofed_quad_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass hoofed_quad_bp.hoofed_quad_bp_C
// 0x0009 (0x0C31 - 0x0C28)
class Ahoofed_quad_bp_C : public Afauna_harvestable_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (Transient, DuplicateTransient)
	bool                                               UseRandomMesh;                                            // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass hoofed_quad_bp.hoofed_quad_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void SetLocoState(TEnumAsByte<Efauna_loco_state_enum>* NewState);
	void ExecuteUbergraph_hoofed_quad_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
