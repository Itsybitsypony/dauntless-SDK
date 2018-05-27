#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_animgraph_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_animgraph_interface.player_animgraph_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uplayer_animgraph_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_animgraph_interface.player_animgraph_interface_C");
		return ptr;
	}


	void SetIsClient(bool IsClient);
	void SetSecondaryMotion(float SkirtHeavyAlpha, float SkirtLightAlpha, float TabardAdjustAlpha);
	void UpdateAimOffsetTarget(const struct FVector& Target);
	void EnableAimOffset(bool Enable);
	void SetCBladePullAimRotation(const struct FRotator& Rotation);
	void SetCBladePullAimTarget(class UPrimitiveComponent* AimTarget);
	void SetCBladeEnablePullAim(bool Enable);
	void SetCBladePullAttachTarget(class UPrimitiveComponent* AttachTarget, const struct FVector& ImpactPoint);
	void SetWeaponOnBack(bool OnBack);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
