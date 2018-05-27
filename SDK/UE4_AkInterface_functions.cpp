// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AkInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkInterface.AkInterface_C.GetShouldExecuteAKNotify
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimNotify_AkEvent_C*   NotifyInstance                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAkInterface_C::GetShouldExecuteAKNotify(class UAnimNotify_AkEvent_C* NotifyInstance, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkInterface.AkInterface_C.GetShouldExecuteAKNotify");

	UAkInterface_C_GetShouldExecuteAKNotify_Params params;
	params.NotifyInstance = NotifyInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
