// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Depreciated_XboxControlerLayout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Depreciated_XboxControlerLayout.Depreciated_XboxControlerLayout_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UDepreciated_XboxControlerLayout_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Depreciated_XboxControlerLayout.Depreciated_XboxControlerLayout_C.GetBrush_1");

	UDepreciated_XboxControlerLayout_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
