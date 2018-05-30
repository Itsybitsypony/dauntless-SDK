#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dia_moss_triforce_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dia_moss_triforce_3.dia_moss_triforce_2_C
// 0x0010 (0x03A0 - 0x0390)
class Adia_moss_triforce_2_C : public AArchonIslandScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class ALandscape*                                  main_landscape;                                           // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dia_moss_triforce_3.dia_moss_triforce_2_C");
		return ptr;
	}


	void hide_foliage();
	void unhide_foliage();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveGameplayStart();
	void ExecuteUbergraph_dia_moss_triforce_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
