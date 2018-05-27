// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_camera_animbp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cine_camera_animbp.cine_camera_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cine_camera_animbp_AnimGraphNode_ModifyBone_13F333D24F8D0EBC179AB2AE88C2728B
// (BlueprintEvent)

void Ucine_camera_animbp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_cine_camera_animbp_AnimGraphNode_ModifyBone_13F333D24F8D0EBC179AB2AE88C2728B()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_camera_animbp.cine_camera_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cine_camera_animbp_AnimGraphNode_ModifyBone_13F333D24F8D0EBC179AB2AE88C2728B");

	Ucine_camera_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_cine_camera_animbp_AnimGraphNode_ModifyBone_13F333D24F8D0EBC179AB2AE88C2728B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_camera_animbp.cine_camera_animbp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucine_camera_animbp_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_camera_animbp.cine_camera_animbp_C.BlueprintUpdateAnimation");

	Ucine_camera_animbp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_camera_animbp.cine_camera_animbp_C.ExecuteUbergraph_cine_camera_animbp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucine_camera_animbp_C::ExecuteUbergraph_cine_camera_animbp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_camera_animbp.cine_camera_animbp_C.ExecuteUbergraph_cine_camera_animbp");

	Ucine_camera_animbp_C_ExecuteUbergraph_cine_camera_animbp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
