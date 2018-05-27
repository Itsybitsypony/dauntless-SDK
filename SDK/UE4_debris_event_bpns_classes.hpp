#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debris_event_bpns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass debris_event_bpns.debris_event_bpns_C
// 0x003E (0x006E - 0x0030)
class Udebris_event_bpns_C : public UAnimNotifyState
{
public:
	int                                                Intensity;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       Socket;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Weapon_;                                                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Orient_To_Surface_;                                       // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Spawn_Decal_;                                             // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
	struct FVector                                     Position_Offset;                                          // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation_Offset;                                          // 0x0050(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Scrape_Audio_;                                            // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              Audio_Volume;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Audio_Delay;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime_Before_Destroy;                                  // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Impact_Audio_;                                            // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debris_Spray_Audio_;                                      // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass debris_event_bpns.debris_event_bpns_C");
		return ptr;
	}


	void SetPositionAndRotation(const struct FVector& Location, const struct FRotator& Rotation, TArray<struct Fvfx_state_id_struct>* Debris_VFX);
	bool GetPositionAndRotation(class USkeletalMeshComponent** Mesh_Comp, struct FVector* Location, struct FRotator* Rotation, class UPhysicalMaterial** PhysMat);
	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
	void GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
