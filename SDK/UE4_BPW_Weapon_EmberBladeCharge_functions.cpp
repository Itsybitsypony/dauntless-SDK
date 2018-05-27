// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_Weapon_EmberBladeCharge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.Get_Image_0_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_Weapon_EmberBladeCharge_C::Get_Image_0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.Get_Image_0_Visibility_1");

	UBPW_Weapon_EmberBladeCharge_C_Get_Image_0_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPW_Weapon_EmberBladeCharge_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.GetPercent_1");

	UBPW_Weapon_EmberBladeCharge_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_Weapon_EmberBladeCharge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.Construct");

	UBPW_Weapon_EmberBladeCharge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Weapon_EmberBladeCharge_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.Tick");

	UBPW_Weapon_EmberBladeCharge_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.ExecuteUbergraph_BPW_Weapon_EmberBladeCharge
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Weapon_EmberBladeCharge_C::ExecuteUbergraph_BPW_Weapon_EmberBladeCharge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Weapon_EmberBladeCharge.BPW_Weapon_EmberBladeCharge_C.ExecuteUbergraph_BPW_Weapon_EmberBladeCharge");

	UBPW_Weapon_EmberBladeCharge_C_ExecuteUbergraph_BPW_Weapon_EmberBladeCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
