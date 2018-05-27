// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_non_behemoth_play_montage_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unon_behemoth_play_montage_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.ReceiveExecuteAI");

	Unon_behemoth_play_montage_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.MontagBlendingOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unon_behemoth_play_montage_bttask_C::MontagBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.MontagBlendingOut");

	Unon_behemoth_play_montage_bttask_C_MontagBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.ExecuteUbergraph_non_behemoth_play_montage_bttask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unon_behemoth_play_montage_bttask_C::ExecuteUbergraph_non_behemoth_play_montage_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.ExecuteUbergraph_non_behemoth_play_montage_bttask");

	Unon_behemoth_play_montage_bttask_C_ExecuteUbergraph_non_behemoth_play_montage_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
