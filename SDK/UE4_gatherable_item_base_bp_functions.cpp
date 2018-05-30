// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_item_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.SetGrantItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  GatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Agatherable_item_base_bp_C::SetGrantItemID(const class FString& GatherID, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.SetGrantItemID");

	Agatherable_item_base_bp_C_SetGrantItemID_Params params;
	params.GatherID = GatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.EnableHighlightForDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Agatherable_item_base_bp_C::EnableHighlightForDuration(float Duration, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.EnableHighlightForDuration");

	Agatherable_item_base_bp_C_EnableHighlightForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Agatherable_item_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.UserConstructionScript");

	Agatherable_item_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.SpawnShinyLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Feqs_lobbed_projectile_data ShinyInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               ShinyEQS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_item_base_bp_C::SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.SpawnShinyLoot");

	Agatherable_item_base_bp_C_SpawnShinyLoot_Params params;
	params.LootID = LootID;
	params.ShinyInfo = ShinyInfo;
	params.ShinyEQS = ShinyEQS;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.OnUserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_item_base_bp_C::OnUserCompletedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.OnUserCompletedInteraction");

	Agatherable_item_base_bp_C_OnUserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.EventOnEnableHighlight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_item_base_bp_C::EventOnEnableHighlight(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.EventOnEnableHighlight");

	Agatherable_item_base_bp_C_EventOnEnableHighlight_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.EventOnDisableHighlight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Agatherable_item_base_bp_C::EventOnDisableHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.EventOnDisableHighlight");

	Agatherable_item_base_bp_C_EventOnDisableHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.SwapMesh
// (Public, BlueprintCallable, BlueprintEvent)

void Agatherable_item_base_bp_C::SwapMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.SwapMesh");

	Agatherable_item_base_bp_C_SwapMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_item_base_bp.gatherable_item_base_bp_C.ExecuteUbergraph_gatherable_item_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_item_base_bp_C::ExecuteUbergraph_gatherable_item_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_item_base_bp.gatherable_item_base_bp_C.ExecuteUbergraph_gatherable_item_base_bp");

	Agatherable_item_base_bp_C_ExecuteUbergraph_gatherable_item_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
