// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_LocationInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_LocationInfo.w_LocationInfo_C.Get_FastTravelText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_LocationInfo_C::Get_FastTravelText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LocationInfo.w_LocationInfo_C.Get_FastTravelText_Text_1");

	Uw_LocationInfo_C_Get_FastTravelText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LocationInfo.w_LocationInfo_C.Get_DiscoveredText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_LocationInfo_C::Get_DiscoveredText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LocationInfo.w_LocationInfo_C.Get_DiscoveredText_Text_1");

	Uw_LocationInfo_C_Get_DiscoveredText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LocationInfo.w_LocationInfo_C.Get_HoverName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_LocationInfo_C::Get_HoverName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LocationInfo.w_LocationInfo_C.Get_HoverName_Text_1");

	Uw_LocationInfo_C_Get_HoverName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
