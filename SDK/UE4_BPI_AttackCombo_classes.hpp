#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_AttackCombo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_AttackCombo.BPI_AttackCombo_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_AttackCombo_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AttackCombo.BPI_AttackCombo_C");
		return ptr;
	}


	void GetInputActionKeyHeld(bool* PrimaryAttackHeld, bool* SecondaryAttackHeld, bool* SpecialAttackHeld);
	void ServerTellClient_StartNextMove(const struct FComboInputBuffer& ComboInputBuffer);
	void GetDefaultWarpSmoothing(float* Smoothing);
	void SetWarpSmoothing(float Smoothing);
	void Set_Slow_Charge_State(bool Slow_State_);
	void ApplyHitPause(float HitPauseDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
