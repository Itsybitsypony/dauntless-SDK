#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_override_lookat_target_bts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass override_lookat_target_bts.override_lookat_target_bts_C
// 0x0010 (0x00A8 - 0x0098)
class Uoverride_lookat_target_bts_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FName                                       TargetBBKey;                                              // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass override_lookat_target_bts.override_lookat_target_bts_C");
		return ptr;
	}


	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_override_lookat_target_bts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
