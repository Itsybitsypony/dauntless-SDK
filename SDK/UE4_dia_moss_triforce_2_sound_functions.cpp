// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dia_moss_triforce_2_sound_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adia_moss_triforce_2_sound_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.ReceiveTick");

	Adia_moss_triforce_2_sound_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Adia_moss_triforce_2_sound_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.ReceiveGameplayStart");

	Adia_moss_triforce_2_sound_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.mutemusic
// (BlueprintCallable, BlueprintEvent)

void Adia_moss_triforce_2_sound_C::mutemusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.mutemusic");

	Adia_moss_triforce_2_sound_C_mutemusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.unmutemusic
// (BlueprintCallable, BlueprintEvent)

void Adia_moss_triforce_2_sound_C::unmutemusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.unmutemusic");

	Adia_moss_triforce_2_sound_C_unmutemusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.ExecuteUbergraph_dia_moss_triforce_2_sound
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adia_moss_triforce_2_sound_C::ExecuteUbergraph_dia_moss_triforce_2_sound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_2_sound.dia_moss_triforce_2_sound_C.ExecuteUbergraph_dia_moss_triforce_2_sound");

	Adia_moss_triforce_2_sound_C_ExecuteUbergraph_dia_moss_triforce_2_sound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
