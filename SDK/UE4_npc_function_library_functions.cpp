// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function npc_function_library.npc_function_library_C.SetAllPlayersVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_function_library_C::STATIC_SetAllPlayersVisibility(bool Visible, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_function_library.npc_function_library_C.SetAllPlayersVisibility");

	Unpc_function_library_C_SetAllPlayersVisibility_Params params;
	params.Visible = Visible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_function_library.npc_function_library_C.DoesPlayerMeetRequirement
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fplayercontroller_requirements Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TScriptInterface<class Uinteractable_npc_interface_C> Vendor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   NoValidConditionsFoundText     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MeetsRequirement               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   FailureReason                  (Parm, OutParm)

void Unpc_function_library_C::STATIC_DoesPlayerMeetRequirement(class APlayerController* PlayerController, const struct Fplayercontroller_requirements& Requirement, const TScriptInterface<class Uinteractable_npc_interface_C>& Vendor, const struct FText& NoValidConditionsFoundText, class UObject* __WorldContext, bool* MeetsRequirement, struct FText* FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_function_library.npc_function_library_C.DoesPlayerMeetRequirement");

	Unpc_function_library_C_DoesPlayerMeetRequirement_Params params;
	params.PlayerController = PlayerController;
	params.Requirement = Requirement;
	params.Vendor = Vendor;
	params.NoValidConditionsFoundText = NoValidConditionsFoundText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeetsRequirement != nullptr)
		*MeetsRequirement = params.MeetsRequirement;
	if (FailureReason != nullptr)
		*FailureReason = params.FailureReason;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
