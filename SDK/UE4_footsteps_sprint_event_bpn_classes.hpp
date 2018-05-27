#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_footsteps_sprint_event_bpn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass footsteps_sprint_event_bpn.footsteps_sprint_event_bpn_C
// 0x0019 (0x0051 - 0x0038)
class Ufootsteps_sprint_event_bpn_C : public UAnimNotify
{
public:
	TEnumAsByte<Enum_FootstepSockets>                  FootstepSockets;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation_Offset;                                          // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Audio_Delay;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Audio_Volume;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Foley_Sound_;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass footsteps_sprint_event_bpn.footsteps_sprint_event_bpn_C");
		return ptr;
	}


	void GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName);
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
