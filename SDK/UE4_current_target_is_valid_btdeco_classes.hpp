#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_current_target_is_valid_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass current_target_is_valid_btdeco.current_target_is_valid_btdeco_C
// 0x0002 (0x00A2 - 0x00A0)
class Ucurrent_target_is_valid_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               ShouldBeValid;                                            // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Etarget_access_requirement>            ValidityType;                                             // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass current_target_is_valid_btdeco.current_target_is_valid_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
