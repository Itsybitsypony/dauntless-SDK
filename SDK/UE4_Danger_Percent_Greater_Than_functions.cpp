// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Danger_Percent_Greater_Than_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C.OnGetDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDanger_Percent_Greater_Than_C::OnGetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C.OnGetDescription");

	UDanger_Percent_Greater_Than_C_OnGetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C.OnCommit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest**                 OwningQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDanger_Percent_Greater_Than_C::OnCommit(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C.OnCommit");

	UDanger_Percent_Greater_Than_C_OnCommit_Params params;
	params.PlayerController = PlayerController;
	params.OwningQuest = OwningQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C.OnEvaluate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest**                 OwningQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDanger_Percent_Greater_Than_C::OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C.OnEvaluate");

	UDanger_Percent_Greater_Than_C_OnEvaluate_Params params;
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
