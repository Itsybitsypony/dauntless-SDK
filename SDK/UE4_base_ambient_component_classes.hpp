#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_ambient_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_ambient_component.base_ambient_component_C
// 0x0018 (0x0408 - 0x03F0)
class Ubase_ambient_component_C : public UArchonAmbientComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	float                                              DelayMin;                                                 // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayMax;                                                 // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedSinceEvent;                                        // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              NextEvent;                                                // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_ambient_component.base_ambient_component_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnUserRequestedAmbient_Event_1(class UArchonAmbientUserComponent* User, float DeltaTime);
	void ExecuteUbergraph_base_ambient_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
