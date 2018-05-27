#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_actor_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cine_actor_interface.cine_actor_interface_C
// 0x0000 (0x0028 - 0x0028)
class Ucine_actor_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cine_actor_interface.cine_actor_interface_C");
		return ptr;
	}


	void Disable_Bangs();
	void ReinitPhysics_tempered_blend();
	void DisableDynamics_blend();
	void ReInitPhysics_blend();
	void OnCinematicEnd();
	void OnCinematicStart();
	void DisableDynamics();
	void ReInitPhysics();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
