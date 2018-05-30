#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atk_moonface_jumpslam_onspot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C
// 0x0008 (0x05F0 - 0x05E8)
class Aatk_moonface_jumpslam_onspot_C : public ABP_BehemothAction_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C");
		return ptr;
	}


	void ActionSpecifcTests(bool* TestsPassed);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_atk_moonface_jumpslam_onspot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
