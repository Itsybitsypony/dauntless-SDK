// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_player_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cine_player_bp.cine_player_bp_C.HideSkinUnderArmor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> SkinDynamicMats                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aarmour_part_base_bp_C*  ArmourPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkinMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acine_player_bp_C::HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.HideSkinUnderArmor");

	Acine_player_bp_C_HideSkinUnderArmor_Params params;
	params.CutMask = CutMask;
	params.ArmourType = ArmourType;
	params.ArmourPart = ArmourPart;
	params.SkinMesh = SkinMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinDynamicMats != nullptr)
		*SkinDynamicMats = params.SkinDynamicMats;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function cine_player_bp.cine_player_bp_C.UpdateChains
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USplineMeshComponent*> SplineCOmponenentArray         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Acine_player_bp_C::UpdateChains(class USplineComponent* Spline, TArray<class USplineMeshComponent*>* SplineCOmponenentArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.UpdateChains");

	Acine_player_bp_C_UpdateChains_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplineCOmponenentArray != nullptr)
		*SplineCOmponenentArray = params.SplineCOmponenentArray;
}


// Function cine_player_bp.cine_player_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.UserConstructionScript");

	Acine_player_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.phys_blend_timeline__FinishedFunc
// (BlueprintEvent)

void Acine_player_bp_C::phys_blend_timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.phys_blend_timeline__FinishedFunc");

	Acine_player_bp_C_phys_blend_timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.phys_blend_timeline__UpdateFunc
// (BlueprintEvent)

void Acine_player_bp_C::phys_blend_timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.phys_blend_timeline__UpdateFunc");

	Acine_player_bp_C_phys_blend_timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.OnCinematicStart
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::OnCinematicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.OnCinematicStart");

	Acine_player_bp_C_OnCinematicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.OnCinematicEnd
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::OnCinematicEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.OnCinematicEnd");

	Acine_player_bp_C_OnCinematicEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.ReInitPhysics_blend
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::ReInitPhysics_blend()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.ReInitPhysics_blend");

	Acine_player_bp_C_ReInitPhysics_blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.DisableDynamics_blend
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::DisableDynamics_blend()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.DisableDynamics_blend");

	Acine_player_bp_C_DisableDynamics_blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.ReinitPhysics_tempered_blend
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::ReinitPhysics_tempered_blend()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.ReinitPhysics_tempered_blend");

	Acine_player_bp_C_ReinitPhysics_tempered_blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.Disable_Bangs
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::Disable_Bangs()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.Disable_Bangs");

	Acine_player_bp_C_Disable_Bangs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acine_player_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.ReceiveBeginPlay");

	Acine_player_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acine_player_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.ReceiveTick");

	Acine_player_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.Set Morph Target
// (BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::Set_Morph_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.Set Morph Target");

	Acine_player_bp_C_Set_Morph_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.ReInitPhysics
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::ReInitPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.ReInitPhysics");

	Acine_player_bp_C_ReInitPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.DisableDynamics
// (Public, BlueprintCallable, BlueprintEvent)

void Acine_player_bp_C::DisableDynamics()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.DisableDynamics");

	Acine_player_bp_C_DisableDynamics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_player_bp.cine_player_bp_C.ExecuteUbergraph_cine_player_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acine_player_bp_C::ExecuteUbergraph_cine_player_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_player_bp.cine_player_bp_C.ExecuteUbergraph_cine_player_bp");

	Acine_player_bp_C_ExecuteUbergraph_cine_player_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
