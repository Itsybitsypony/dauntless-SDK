#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moonface_normal_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass moonface_normal_bp.moonface_normal_bp_C
// 0x0034 (0x1320 - 0x12EC)
class Amoonface_normal_bp_C : public Amoonface_archetype_bp_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x12EC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12F0(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            FrontLeft01Influence;                                     // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            FrontRight01Influence;                                    // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Body02Influence;                                          // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Head01Influence;                                          // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Body01Influence;                                          // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass moonface_normal_bp.moonface_normal_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_moonface_normal_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
