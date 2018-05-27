// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_reward_xp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_reward_xp.w_reward_xp_C.OnLoaded_A3B838C04A8A82A17CF22084B70E800D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reward_xp_C::OnLoaded_A3B838C04A8A82A17CF22084B70E800D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_xp.w_reward_xp_C.OnLoaded_A3B838C04A8A82A17CF22084B70E800D");

	Uw_reward_xp_C_OnLoaded_A3B838C04A8A82A17CF22084B70E800D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_xp.w_reward_xp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_reward_xp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_xp.w_reward_xp_C.Construct");

	Uw_reward_xp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_xp.w_reward_xp_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    IconSoftReference              (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_reward_xp_C::LoadIcon(TAssetPtr<class UTexture2D> IconSoftReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_xp.w_reward_xp_C.LoadIcon");

	Uw_reward_xp_C_LoadIcon_Params params;
	params.IconSoftReference = IconSoftReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_xp.w_reward_xp_C.ExecuteUbergraph_w_reward_xp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reward_xp_C::ExecuteUbergraph_w_reward_xp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_xp.w_reward_xp_C.ExecuteUbergraph_w_reward_xp");

	Uw_reward_xp_C_ExecuteUbergraph_w_reward_xp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
