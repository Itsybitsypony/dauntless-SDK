#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_reload_ammo_hammer_bpn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass reload_ammo_hammer_bpn.reload_ammo_hammer_bpn_C
// 0x0002 (0x003A - 0x0038)
class Ureload_ammo_hammer_bpn_C : public UAnimNotify
{
public:
	bool                                               FastReloadSuccess;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FastReloadFailure;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass reload_ammo_hammer_bpn.reload_ammo_hammer_bpn_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
