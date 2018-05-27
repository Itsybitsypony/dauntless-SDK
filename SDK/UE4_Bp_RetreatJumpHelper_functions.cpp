// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_RetreatJumpHelper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.GetPatrolPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PatrolCenterPoint_C* PatrolPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_RetreatJumpHelper_C::GetPatrolPoint(class ABP_PatrolCenterPoint_C** PatrolPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.GetPatrolPoint");

	ABp_RetreatJumpHelper_C_GetPatrolPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PatrolPoint != nullptr)
		*PatrolPoint = params.PatrolPoint;
}


// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABp_RetreatJumpHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.UserConstructionScript");

	ABp_RetreatJumpHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABp_RetreatJumpHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ReceiveBeginPlay");

	ABp_RetreatJumpHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ShowLinks
// (BlueprintCallable, BlueprintEvent)

void ABp_RetreatJumpHelper_C::ShowLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ShowLinks");

	ABp_RetreatJumpHelper_C_ShowLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ExecuteUbergraph_Bp_RetreatJumpHelper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_RetreatJumpHelper_C::ExecuteUbergraph_Bp_RetreatJumpHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ExecuteUbergraph_Bp_RetreatJumpHelper");

	ABp_RetreatJumpHelper_C_ExecuteUbergraph_Bp_RetreatJumpHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
