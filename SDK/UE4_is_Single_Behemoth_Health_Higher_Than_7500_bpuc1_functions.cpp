// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C.OnGetDescription
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uis_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C::OnGetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C.OnGetDescription");

	Uis_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C_OnGetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C.OnEvaluate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest**                 OwningQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uis_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C::OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C.OnEvaluate");

	Uis_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C_OnEvaluate_Params params;
	params.PlayerController = PlayerController;
	params.OwningQuest = OwningQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
