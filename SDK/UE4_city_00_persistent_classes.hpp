#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_00_persistent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass city_00_persistent.city_00_persistent_C
// 0x001C (0x03AC - 0x0390)
class Acity_00_persistent_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	TArray<class ASkeletalMeshActor*>                  SkeletalMeshes;                                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Elapsed;                                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass city_00_persistent.city_00_persistent_C");
		return ptr;
	}


	void NewFunction_1(float A);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_city_00_persistent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
