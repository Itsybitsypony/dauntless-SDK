// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_montage_bpo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function play_montage_bpo.play_montage_bpo_C.OnMontageBlendingOut_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_montage_bpo_C::OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_montage_bpo.play_montage_bpo_C.OnMontageBlendingOut_Event_1");

	Uplay_montage_bpo_C_OnMontageBlendingOut_Event_1_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_montage_bpo.play_montage_bpo_C.OnStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FArchonGameplayOperationArgs* Args                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uplay_montage_bpo_C::OnStart(struct FArchonGameplayOperationArgs* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_montage_bpo.play_montage_bpo_C.OnStart");

	Uplay_montage_bpo_C_OnStart_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_montage_bpo.play_montage_bpo_C.OnTick
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FArchonGameplayOperationArgs* Args                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uplay_montage_bpo_C::OnTick(struct FArchonGameplayOperationArgs* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_montage_bpo.play_montage_bpo_C.OnTick");

	Uplay_montage_bpo_C_OnTick_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_montage_bpo.play_montage_bpo_C.ExecuteUbergraph_play_montage_bpo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_montage_bpo_C::ExecuteUbergraph_play_montage_bpo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_montage_bpo.play_montage_bpo_C.ExecuteUbergraph_play_montage_bpo");

	Uplay_montage_bpo_C_ExecuteUbergraph_play_montage_bpo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
