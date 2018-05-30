#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moonface_beta_gust_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass moonface_beta_gust_bp.moonface_beta_gust_bp_C
// 0x0044 (0x06A4 - 0x0660)
class Amoonface_beta_gust_bp_C : public Aprojectile_simple_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Audio_Proximity;                                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Audio_Main_sound;                                         // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Grass_To_Default_NewTrack_0_1A8C20BA4E2F8DDE0175D0B49DE0DA25;// 0x0678(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Grass_To_Default__Direction_1A8C20BA4E2F8DDE0175D0B49DE0DA25;// 0x067C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Grass_To_Default;                                         // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity_Velocity_E251D45945B98789EA228DAA1D84CB30;       // 0x0688(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Velocity__Direction_E251D45945B98789EA228DAA1D84CB30;     // 0x0694(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0695(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Velocity;                                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default_Grass_Push_Strength;                              // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass moonface_beta_gust_bp.moonface_beta_gust_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void Velocity__FinishedFunc();
	void Velocity__UpdateFunc();
	void Grass_To_Default__FinishedFunc();
	void Grass_To_Default__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_moonface_beta_gust_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
