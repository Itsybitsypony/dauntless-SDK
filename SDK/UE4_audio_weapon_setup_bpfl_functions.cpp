// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_audio_weapon_setup_bpfl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function audio_weapon_setup_bpfl.audio_weapon_setup_bpfl_C.Audio - Weapon Audio Setup
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Character_Weapon               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Character_Weapon_Specific      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Weapon_Elemental               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Pawn_Owner                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAkAudioBank*>    Weapon_Audio_Banks             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uaudio_weapon_setup_bpfl_C::STATIC_Audio___Weapon_Audio_Setup(const struct FName& Character_Weapon, const struct FName& Character_Weapon_Specific, const struct FName& Weapon_Elemental, class AActor* Pawn_Owner, class UObject* __WorldContext, TArray<class UAkAudioBank*>* Weapon_Audio_Banks)
{
	static auto fn = UObject::FindObject<UFunction>("Function audio_weapon_setup_bpfl.audio_weapon_setup_bpfl_C.Audio - Weapon Audio Setup");

	Uaudio_weapon_setup_bpfl_C_Audio___Weapon_Audio_Setup_Params params;
	params.Character_Weapon = Character_Weapon;
	params.Character_Weapon_Specific = Character_Weapon_Specific;
	params.Weapon_Elemental = Weapon_Elemental;
	params.Pawn_Owner = Pawn_Owner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon_Audio_Banks != nullptr)
		*Weapon_Audio_Banks = params.Weapon_Audio_Banks;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
