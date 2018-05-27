#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_register_zero_health_bpo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass register_zero_health_bpo.register_zero_health_bpo_C
// 0x0008 (0x0058 - 0x0050)
class Uregister_zero_health_bpo_C : public UArchonGameplayOperation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass register_zero_health_bpo.register_zero_health_bpo_C");
		return ptr;
	}


	void OnStart(struct FArchonGameplayOperationArgs* Args);
	void ExecuteUbergraph_register_zero_health_bpo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
