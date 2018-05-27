// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_part_display_InWorldSpawner_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.GetTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apart_display_InWorldSpawner_bp_C::GetTags(EItemGroupType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.GetTags");

	Apart_display_InWorldSpawner_bp_C_GetTags_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Apart_display_InWorldSpawner_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.UserConstructionScript");

	Apart_display_InWorldSpawner_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.OnLoaded_FB8EFEF447890DD2AEC2DA9ACEF9E03B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apart_display_InWorldSpawner_bp_C::OnLoaded_FB8EFEF447890DD2AEC2DA9ACEF9E03B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.OnLoaded_FB8EFEF447890DD2AEC2DA9ACEF9E03B");

	Apart_display_InWorldSpawner_bp_C_OnLoaded_FB8EFEF447890DD2AEC2DA9ACEF9E03B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apart_display_InWorldSpawner_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ReceiveTick");

	Apart_display_InWorldSpawner_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ChangeDisplayedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apart_display_InWorldSpawner_bp_C::ChangeDisplayedItem(const class FString& ItemID, EArchonBodyType BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ChangeDisplayedItem");

	Apart_display_InWorldSpawner_bp_C_ChangeDisplayedItem_Params params;
	params.ItemID = ItemID;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ClearDisplayedItem
// (BlueprintCallable, BlueprintEvent)

void Apart_display_InWorldSpawner_bp_C::ClearDisplayedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ClearDisplayedItem");

	Apart_display_InWorldSpawner_bp_C_ClearDisplayedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void Apart_display_InWorldSpawner_bp_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.CustomEvent_1");

	Apart_display_InWorldSpawner_bp_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.HideSpawner
// (BlueprintCallable, BlueprintEvent)

void Apart_display_InWorldSpawner_bp_C::HideSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.HideSpawner");

	Apart_display_InWorldSpawner_bp_C_HideSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ShowSpawner
// (BlueprintCallable, BlueprintEvent)

void Apart_display_InWorldSpawner_bp_C::ShowSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ShowSpawner");

	Apart_display_InWorldSpawner_bp_C_ShowSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ExecuteUbergraph_part_display_InWorldSpawner_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Apart_display_InWorldSpawner_bp_C::ExecuteUbergraph_part_display_InWorldSpawner_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C.ExecuteUbergraph_part_display_InWorldSpawner_bp");

	Apart_display_InWorldSpawner_bp_C_ExecuteUbergraph_part_display_InWorldSpawner_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
