// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_player_03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cine_player_03.cine_player_03_C.GetMorphTargetDriver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MorphTargetOwner               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  AnimInstanceOwner              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acine_player_03_C::GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_03.cine_player_03_C.GetMorphTargetDriver");

	Acine_player_03_C_GetMorphTargetDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MorphTargetOwner != nullptr)
		*MorphTargetOwner = params.MorphTargetOwner;
	if (AnimInstanceOwner != nullptr)
		*AnimInstanceOwner = params.AnimInstanceOwner;
}


// Function cine_player_03.cine_player_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acine_player_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_03.cine_player_03_C.UserConstructionScript");

	Acine_player_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_03.cine_player_03_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acine_player_03_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_03.cine_player_03_C.ReceiveTick");

	Acine_player_03_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_03.cine_player_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acine_player_03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_03.cine_player_03_C.ReceiveBeginPlay");

	Acine_player_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_03.cine_player_03_C.ExecuteUbergraph_cine_player_03
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acine_player_03_C::ExecuteUbergraph_cine_player_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_03.cine_player_03_C.ExecuteUbergraph_cine_player_03");

	Acine_player_03_C_ExecuteUbergraph_cine_player_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
