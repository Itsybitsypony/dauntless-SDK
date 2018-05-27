// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_buff.base_buff_C.GetModifyDamageEventPriority
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_buff_C::GetModifyDamageEventPriority(int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.GetModifyDamageEventPriority");

	Abase_buff_C_GetModifyDamageEventPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function base_buff.base_buff_C.CustomModifyDamageEventData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ModifiedDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)
// bool                           ShouldOverrideDamageTags       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OverriddenDamageTags           (Parm, OutParm)

void Abase_buff_C::CustomModifyDamageEventData(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.CustomModifyDamageEventData");

	Abase_buff_C_CustomModifyDamageEventData_Params params;
	params.DamageEventData = DamageEventData;
	params.DamagedActor = DamagedActor;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedDamageEventData != nullptr)
		*ModifiedDamageEventData = params.ModifiedDamageEventData;
	if (OverriddenDamageEventData != nullptr)
		*OverriddenDamageEventData = params.OverriddenDamageEventData;
	if (ShouldOverrideDamageTags != nullptr)
		*ShouldOverrideDamageTags = params.ShouldOverrideDamageTags;
	if (OverriddenDamageTags != nullptr)
		*OverriddenDamageTags = params.OverriddenDamageTags;
}


// Function base_buff.base_buff_C.GetVFXAttachPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         AttachComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_buff_C::GetVFXAttachPoint(class USceneComponent** AttachComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.GetVFXAttachPoint");

	Abase_buff_C_GetVFXAttachPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachComponent != nullptr)
		*AttachComponent = params.AttachComponent;
}


// Function base_buff.base_buff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abase_buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.UserConstructionScript");

	Abase_buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_buff.base_buff_C.OnAdded
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Abase_buff_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.OnAdded");

	Abase_buff_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_buff.base_buff_C.OnRemoved
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Abase_buff_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.OnRemoved");

	Abase_buff_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_buff.base_buff_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Abase_buff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.ReceiveDestroyed");

	Abase_buff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_buff.base_buff_C.ExecuteUbergraph_base_buff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_buff_C::ExecuteUbergraph_base_buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_buff.base_buff_C.ExecuteUbergraph_base_buff");

	Abase_buff_C_ExecuteUbergraph_base_buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
