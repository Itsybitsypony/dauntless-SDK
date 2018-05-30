#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_passes_behemoth_requirements_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass passes_behemoth_requirements_btdeco.passes_behemoth_requirements_btdeco_C
// 0x00C8 (0x0168 - 0x00A0)
class Upasses_behemoth_requirements_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x00A0(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass passes_behemoth_requirements_btdeco.passes_behemoth_requirements_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
