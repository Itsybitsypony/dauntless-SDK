#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_test_reztarget_stillvalid_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C
// 0x0009 (0x00A9 - 0x00A0)
class Utest_reztarget_stillvalid_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	bool                                               IgnoreIsInteracting;                                      // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_test_reztarget_stillvalid_btdeco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
