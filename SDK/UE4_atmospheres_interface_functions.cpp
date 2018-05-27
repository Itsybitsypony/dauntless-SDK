// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atmospheres_interface.atmospheres_interface_C.SetWindRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SetWindRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_interface_C::SetWindRotation(float SetWindRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_interface.atmospheres_interface_C.SetWindRotation");

	Uatmospheres_interface_C_SetWindRotation_Params params;
	params.SetWindRotation = SetWindRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_interface.atmospheres_interface_C.GetWeatherType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eweather_type_enum> Weather                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_interface_C::GetWeatherType(TEnumAsByte<Eweather_type_enum>* Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_interface.atmospheres_interface_C.GetWeatherType");

	Uatmospheres_interface_C_GetWeatherType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weather != nullptr)
		*Weather = params.Weather;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
