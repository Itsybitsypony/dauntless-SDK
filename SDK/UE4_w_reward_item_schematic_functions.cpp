// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_reward_item_schematic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_reward_item_schematic.w_reward_item_schematic_C.OnLoaded_F24843164C6D9248EB96969965E06310
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reward_item_schematic_C::OnLoaded_F24843164C6D9248EB96969965E06310(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_schematic.w_reward_item_schematic_C.OnLoaded_F24843164C6D9248EB96969965E06310");

	Uw_reward_item_schematic_C_OnLoaded_F24843164C6D9248EB96969965E06310_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_item_schematic.w_reward_item_schematic_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    IconSoftReference              (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_reward_item_schematic_C::LoadIcon(TAssetPtr<class UTexture2D> IconSoftReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_schematic.w_reward_item_schematic_C.LoadIcon");

	Uw_reward_item_schematic_C_LoadIcon_Params params;
	params.IconSoftReference = IconSoftReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_item_schematic.w_reward_item_schematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_reward_item_schematic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_schematic.w_reward_item_schematic_C.Construct");

	Uw_reward_item_schematic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_item_schematic.w_reward_item_schematic_C.ExecuteUbergraph_w_reward_item_schematic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reward_item_schematic_C::ExecuteUbergraph_w_reward_item_schematic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_schematic.w_reward_item_schematic_C.ExecuteUbergraph_w_reward_item_schematic");

	Uw_reward_item_schematic_C_ExecuteUbergraph_w_reward_item_schematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
