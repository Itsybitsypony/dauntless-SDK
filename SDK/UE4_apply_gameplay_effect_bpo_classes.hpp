#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_apply_gameplay_effect_bpo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass apply_gameplay_effect_bpo.apply_gameplay_effect_bpo_C
// 0x0010 (0x0060 - 0x0050)
class Uapply_gameplay_effect_bpo_C : public UArchonGameplayOperation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GameplayEffect;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass apply_gameplay_effect_bpo.apply_gameplay_effect_bpo_C");
		return ptr;
	}


	void OnStart(struct FArchonGameplayOperationArgs* Args);
	void ExecuteUbergraph_apply_gameplay_effect_bpo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
