#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_check_next_message_type_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass check_next_message_type_btdeco.check_next_message_type_btdeco_C
// 0x0001 (0x00A1 - 0x00A0)
class Ucheck_next_message_type_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	TEnumAsByte<Ecoordination_message_type>            MessageType;                                              // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass check_next_message_type_btdeco.check_next_message_type_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
