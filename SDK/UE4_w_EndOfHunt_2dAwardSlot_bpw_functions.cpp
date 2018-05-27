// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunt_2dAwardSlot_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.SetQualityLinearColour
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::SetQualityLinearColour()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.SetQualityLinearColour");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_SetQualityLinearColour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.GetBackground_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_EndOfHunt_2dAwardSlot_bpw_C::GetBackground_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.GetBackground_1");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_GetBackground_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Set Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemRarityLevelType           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::Set_Rarity(EItemRarityLevelType InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Set Rarity");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_Set_Rarity_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Construct");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.SetAward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Item_Name                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            CoreSwitch                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemRarityLevelType           Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::SetAward(const struct FText& Item_Name, int CoreSwitch, EItemRarityLevelType Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.SetAward");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_SetAward_Params params;
	params.Item_Name = Item_Name;
	params.CoreSwitch = CoreSwitch;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Anim_RevealCore
// (BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::Anim_RevealCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Anim_RevealCore");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_Anim_RevealCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.SetCoreTint
// (BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::SetCoreTint()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.SetCoreTint");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_SetCoreTint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Anim_RevealStyleCore
// (BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::Anim_RevealStyleCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Anim_RevealStyleCore");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_Anim_RevealStyleCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.ExecuteUbergraph_w_EndOfHunt_2dAwardSlot_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::ExecuteUbergraph_w_EndOfHunt_2dAwardSlot_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.ExecuteUbergraph_w_EndOfHunt_2dAwardSlot_bpw");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_ExecuteUbergraph_w_EndOfHunt_2dAwardSlot_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Update__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunt_2dAwardSlot_bpw_C::Update__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_2dAwardSlot_bpw.w_EndOfHunt_2dAwardSlot_bpw_C.Update__DelegateSignature");

	Uw_EndOfHunt_2dAwardSlot_bpw_C_Update__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
