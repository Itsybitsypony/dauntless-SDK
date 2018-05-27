// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_interactive_npc_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function city_interactive_npc_bp.city_interactive_npc_bp_C.HideSkinUnderArmor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> SkinDynamicMats                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aarmour_part_base_bp_C*  ArmourPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkinMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.HideSkinUnderArmor");

	Acity_interactive_npc_bp_C_HideSkinUnderArmor_Params params;
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


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.AssignVOTransforms
// (Public, BlueprintCallable, BlueprintEvent)

void Acity_interactive_npc_bp_C::AssignVOTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.AssignVOTransforms");

	Acity_interactive_npc_bp_C_AssignVOTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.SetupArmorComp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PrimaryColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondayColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmourDyeSurfaceType          PrimarySurface                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmourDyeSurfaceType          SecondarySurface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::SetupArmorComp(class USkeletalMeshComponent* Comp, int PrimaryColor, int SecondayColor, class USkeletalMesh* Mesh, EArmourDyeSurfaceType PrimarySurface, EArmourDyeSurfaceType SecondarySurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.SetupArmorComp");

	Acity_interactive_npc_bp_C_SetupArmorComp_Params params;
	params.Comp = Comp;
	params.PrimaryColor = PrimaryColor;
	params.SecondayColor = SecondayColor;
	params.Mesh = Mesh;
	params.PrimarySurface = PrimarySurface;
	params.SecondarySurface = SecondarySurface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.RaiseInteractWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::RaiseInteractWith(class APawn* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.RaiseInteractWith");

	Acity_interactive_npc_bp_C_RaiseInteractWith_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acity_interactive_npc_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.UserConstructionScript");

	Acity_interactive_npc_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_338B341548E4EFB371B643836CD5FF90
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::OnLoaded_338B341548E4EFB371B643836CD5FF90(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_338B341548E4EFB371B643836CD5FF90");

	Acity_interactive_npc_bp_C_OnLoaded_338B341548E4EFB371B643836CD5FF90_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_13D0691D4BF6C34E870C3789A1CECC55
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::OnLoaded_13D0691D4BF6C34E870C3789A1CECC55(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_13D0691D4BF6C34E870C3789A1CECC55");

	Acity_interactive_npc_bp_C_OnLoaded_13D0691D4BF6C34E870C3789A1CECC55_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_B107CEF64B271B0AE82DABB505693B74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::OnLoaded_B107CEF64B271B0AE82DABB505693B74(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnLoaded_B107CEF64B271B0AE82DABB505693B74");

	Acity_interactive_npc_bp_C_OnLoaded_B107CEF64B271B0AE82DABB505693B74_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnUserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::OnUserCompletedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.OnUserCompletedInteraction");

	Acity_interactive_npc_bp_C_OnUserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acity_interactive_npc_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.ReceiveBeginPlay");

	Acity_interactive_npc_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.Set Face Customization
// (BlueprintCallable, BlueprintEvent)

void Acity_interactive_npc_bp_C::Set_Face_Customization()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.Set Face Customization");

	Acity_interactive_npc_bp_C_Set_Face_Customization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_interactive_npc_bp.city_interactive_npc_bp_C.ExecuteUbergraph_city_interactive_npc_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_interactive_npc_bp_C::ExecuteUbergraph_city_interactive_npc_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_interactive_npc_bp.city_interactive_npc_bp_C.ExecuteUbergraph_city_interactive_npc_bp");

	Acity_interactive_npc_bp_C_ExecuteUbergraph_city_interactive_npc_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
