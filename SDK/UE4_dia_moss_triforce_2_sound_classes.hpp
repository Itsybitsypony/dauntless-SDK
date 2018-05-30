#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dia_moss_triforce_2_sound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C
// 0x0010 (0x03A0 - 0x0390)
class Adia_moss_triforce_2_sound_C : public AArchonIslandScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class ATargetPoint*                                TargetPoint_1_ExecuteUbergraph_dia_moss_triforce_2_sound_RefProperty;// 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveGameplayStart();
	void mutemusic();
	void unmutemusic();
	void ExecuteUbergraph_dia_moss_triforce_2_sound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
