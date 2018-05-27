// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_autoplayer_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function autoplayer_interface.autoplayer_interface_C.GetAutorunMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutorunMode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_interface_C::GetAutorunMode(bool* AutorunMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_interface.autoplayer_interface_C.GetAutorunMode");

	Uautoplayer_interface_C_GetAutorunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AutorunMode != nullptr)
		*AutorunMode = params.AutorunMode;
}


// Function autoplayer_interface.autoplayer_interface_C.StopAutoProgression
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_interface_C::StopAutoProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_interface.autoplayer_interface_C.StopAutoProgression");

	Uautoplayer_interface_C_StopAutoProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_interface.autoplayer_interface_C.TestQuestProgression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  IDToStopAt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_interface_C::TestQuestProgression(const class FString& IDToStopAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_interface.autoplayer_interface_C.TestQuestProgression");

	Uautoplayer_interface_C_TestQuestProgression_Params params;
	params.IDToStopAt = IDToStopAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_interface.autoplayer_interface_C.TryToAcceptQuest
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_interface_C::TryToAcceptQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_interface.autoplayer_interface_C.TryToAcceptQuest");

	Uautoplayer_interface_C_TryToAcceptQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_interface.autoplayer_interface_C.TryToRedeemQuests
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_interface_C::TryToRedeemQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_interface.autoplayer_interface_C.TryToRedeemQuests");

	Uautoplayer_interface_C_TryToRedeemQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_interface.autoplayer_interface_C.TryToCompleteQuests
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_interface_C::TryToCompleteQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_interface.autoplayer_interface_C.TryToCompleteQuests");

	Uautoplayer_interface_C_TryToCompleteQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_interface.autoplayer_interface_C.StartAutoplayerComp
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_interface_C::StartAutoplayerComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_interface.autoplayer_interface_C.StartAutoplayerComp");

	Uautoplayer_interface_C_StartAutoplayerComp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
