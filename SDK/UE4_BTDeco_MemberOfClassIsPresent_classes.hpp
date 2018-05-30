#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTDeco_MemberOfClassIsPresent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDeco_MemberOfClassIsPresent.BTDeco_MemberOfClassIsPresent_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTDeco_MemberOfClassIsPresent_C : public UBTDecorator_BlueprintBase
{
public:
	class UClass*                                      ClassToTest;                                              // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDeco_MemberOfClassIsPresent.BTDeco_MemberOfClassIsPresent_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
