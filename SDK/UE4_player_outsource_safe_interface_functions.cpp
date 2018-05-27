// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_outsource_safe_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_outsource_safe_interface.player_outsource_safe_interface_C.SetLocalWeatherType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eweather_type_enum> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_outsource_safe_interface_C::SetLocalWeatherType(TEnumAsByte<Eweather_type_enum> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_outsource_safe_interface.player_outsource_safe_interface_C.SetLocalWeatherType");

	Uplayer_outsource_safe_interface_C_SetLocalWeatherType_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
