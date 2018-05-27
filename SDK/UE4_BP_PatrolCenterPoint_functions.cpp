// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PatrolCenterPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.GetBehemothHasUsed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasBehemothUsed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PatrolCenterPoint_C::GetBehemothHasUsed(bool* HasBehemothUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.GetBehemothHasUsed");

	ABP_PatrolCenterPoint_C_GetBehemothHasUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasBehemothUsed != nullptr)
		*HasBehemothUsed = params.HasBehemothUsed;
}


// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.GetRetreatJump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABp_RetreatJumpHelper_C* JumpPoint                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PatrolCenterPoint_C::GetRetreatJump(class ABp_RetreatJumpHelper_C** JumpPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.GetRetreatJump");

	ABP_PatrolCenterPoint_C_GetRetreatJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpPoint != nullptr)
		*JumpPoint = params.JumpPoint;
}


// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PatrolCenterPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.UserConstructionScript");

	ABP_PatrolCenterPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PatrolCenterPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ReceiveBeginPlay");

	ABP_PatrolCenterPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ShowLinks
// (BlueprintCallable, BlueprintEvent)

void ABP_PatrolCenterPoint_C::ShowLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ShowLinks");

	ABP_PatrolCenterPoint_C_ShowLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.SetBehemothHasUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasBehemothUsed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PatrolCenterPoint_C::SetBehemothHasUsed(bool HasBehemothUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.SetBehemothHasUsed");

	ABP_PatrolCenterPoint_C_SetBehemothHasUsed_Params params;
	params.HasBehemothUsed = HasBehemothUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ExecuteUbergraph_BP_PatrolCenterPoint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PatrolCenterPoint_C::ExecuteUbergraph_BP_PatrolCenterPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ExecuteUbergraph_BP_PatrolCenterPoint");

	ABP_PatrolCenterPoint_C_ExecuteUbergraph_BP_PatrolCenterPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
