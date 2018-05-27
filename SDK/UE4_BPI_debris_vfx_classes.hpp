#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_debris_vfx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_debris_vfx.BPI_debris_vfx_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_debris_vfx_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_debris_vfx.BPI_debris_vfx_C");
		return ptr;
	}


	void DestroyDebrisState(class UObject* Data, float LifeTime);
	void AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId);
	void UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
