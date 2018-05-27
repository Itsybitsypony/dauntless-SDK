// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_status_effect_item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_item_C::SetData(const class FString& Name, class UObject* Icon, float Duration, int StackCount, float TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.SetData");

	Ubpw_hud_status_effect_item_C_SetData_Params params;
	params.Name = Name;
	params.Icon = Icon;
	params.Duration = Duration;
	params.StackCount = StackCount;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.UpdateStatusEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_item_C::UpdateStatusEffect(const class FString& Name, class UObject* Icon, float Duration, int StackCount, float TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.UpdateStatusEffect");

	Ubpw_hud_status_effect_item_C_UpdateStatusEffect_Params params;
	params.Name = Name;
	params.Icon = Icon;
	params.Duration = Duration;
	params.StackCount = StackCount;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.DeactivateStatusEffect
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_hud_status_effect_item_C::DeactivateStatusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.DeactivateStatusEffect");

	Ubpw_hud_status_effect_item_C_DeactivateStatusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.ActivateStatusEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_item_C::ActivateStatusEffect(const class FString& Name, class UObject* Icon, float Duration, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.ActivateStatusEffect");

	Ubpw_hud_status_effect_item_C_ActivateStatusEffect_Params params;
	params.Name = Name;
	params.Icon = Icon;
	params.Duration = Duration;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_item_C::SetIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.SetIcon");

	Ubpw_hud_status_effect_item_C_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_hud_status_effect_item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.Construct");

	Ubpw_hud_status_effect_item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_item_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.Tick");

	Ubpw_hud_status_effect_item_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.ExecuteUbergraph_bpw_hud_status_effect_item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_item_C::ExecuteUbergraph_bpw_hud_status_effect_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.ExecuteUbergraph_bpw_hud_status_effect_item");

	Ubpw_hud_status_effect_item_C_ExecuteUbergraph_bpw_hud_status_effect_item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
