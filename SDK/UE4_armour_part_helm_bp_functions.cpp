// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_armour_part_helm_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function armour_part_helm_bp.armour_part_helm_bp_C.OnOwnerHidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutHidden                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_helm_bp_C::OnOwnerHidden(bool* Hidden, bool* OutHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_helm_bp.armour_part_helm_bp_C.OnOwnerHidden");

	Aarmour_part_helm_bp_C_OnOwnerHidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHidden != nullptr)
		*OutHidden = params.OutHidden;
}


// Function armour_part_helm_bp.armour_part_helm_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aarmour_part_helm_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_helm_bp.armour_part_helm_bp_C.UserConstructionScript");

	Aarmour_part_helm_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_helm_bp.armour_part_helm_bp_C.OnLoaded_96FACC83476ED76D0F2D16A46C247DD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_helm_bp_C::OnLoaded_96FACC83476ED76D0F2D16A46C247DD5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_helm_bp.armour_part_helm_bp_C.OnLoaded_96FACC83476ED76D0F2D16A46C247DD5");

	Aarmour_part_helm_bp_C_OnLoaded_96FACC83476ED76D0F2D16A46C247DD5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_helm_bp.armour_part_helm_bp_C.ReEquip
// (BlueprintCallable, BlueprintEvent)

void Aarmour_part_helm_bp_C::ReEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_helm_bp.armour_part_helm_bp_C.ReEquip");

	Aarmour_part_helm_bp_C_ReEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_helm_bp.armour_part_helm_bp_C.BP_OnArmourEquipped
// (Event, Public, BlueprintEvent)

void Aarmour_part_helm_bp_C::BP_OnArmourEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_helm_bp.armour_part_helm_bp_C.BP_OnArmourEquipped");

	Aarmour_part_helm_bp_C_BP_OnArmourEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_helm_bp.armour_part_helm_bp_C.ExecuteUbergraph_armour_part_helm_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_helm_bp_C::ExecuteUbergraph_armour_part_helm_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_helm_bp.armour_part_helm_bp_C.ExecuteUbergraph_armour_part_helm_bp");

	Aarmour_part_helm_bp_C_ExecuteUbergraph_armour_part_helm_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
