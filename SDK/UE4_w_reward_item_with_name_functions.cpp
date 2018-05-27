// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_reward_item_with_name_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_reward_item_with_name.w_reward_item_with_name_C.Get_Icon_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_reward_item_with_name_C::Get_Icon_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_with_name.w_reward_item_with_name_C.Get_Icon_ToolTipWidget_1");

	Uw_reward_item_with_name_C_Get_Icon_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_reward_item_with_name.w_reward_item_with_name_C.OnLoaded_B7CC8BFF45268CC761D266A5338A8EF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reward_item_with_name_C::OnLoaded_B7CC8BFF45268CC761D266A5338A8EF3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_with_name.w_reward_item_with_name_C.OnLoaded_B7CC8BFF45268CC761D266A5338A8EF3");

	Uw_reward_item_with_name_C_OnLoaded_B7CC8BFF45268CC761D266A5338A8EF3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_item_with_name.w_reward_item_with_name_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    IconSoftReference              (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_reward_item_with_name_C::LoadIcon(TAssetPtr<class UTexture2D> IconSoftReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_with_name.w_reward_item_with_name_C.LoadIcon");

	Uw_reward_item_with_name_C_LoadIcon_Params params;
	params.IconSoftReference = IconSoftReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_item_with_name.w_reward_item_with_name_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_reward_item_with_name_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_with_name.w_reward_item_with_name_C.Construct");

	Uw_reward_item_with_name_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_item_with_name.w_reward_item_with_name_C.ExecuteUbergraph_w_reward_item_with_name
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reward_item_with_name_C::ExecuteUbergraph_w_reward_item_with_name(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_with_name.w_reward_item_with_name_C.ExecuteUbergraph_w_reward_item_with_name");

	Uw_reward_item_with_name_C_ExecuteUbergraph_w_reward_item_with_name_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
