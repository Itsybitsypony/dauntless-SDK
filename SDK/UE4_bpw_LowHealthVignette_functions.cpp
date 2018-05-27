// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_LowHealthVignette_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_LowHealthVignette.bpw_LowHealthVignette_C.Vignette_Opacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Ubpw_LowHealthVignette_C::Vignette_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_LowHealthVignette.bpw_LowHealthVignette_C.Vignette_Opacity");

	Ubpw_LowHealthVignette_C_Vignette_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
