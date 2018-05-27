#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_stop_montage_input_action_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass stop_montage_input_action_bp.stop_montage_input_action_bp_C
// 0x0000 (0x0028 - 0x0028)
class Ustop_montage_input_action_bp_C : public UInputAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass stop_montage_input_action_bp.stop_montage_input_action_bp_C");
		return ptr;
	}


	void ExecuteAction(class AArchonCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
