#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_override_default_turn_warp_btservice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass override_default_turn_warp_btservice.override_default_turn_warp_btservice_C
// 0x0010 (0x00A8 - 0x0098)
class Uoverride_default_turn_warp_btservice_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FName                                       TurnWarpTargetKeyName;                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass override_default_turn_warp_btservice.override_default_turn_warp_btservice_C");
		return ptr;
	}


	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_override_default_turn_warp_btservice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
