// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atk_moonface_jumpslam_onspot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.ActionSpecifcTests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TestsPassed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aatk_moonface_jumpslam_onspot_C::ActionSpecifcTests(bool* TestsPassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.ActionSpecifcTests");

	Aatk_moonface_jumpslam_onspot_C_ActionSpecifcTests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestsPassed != nullptr)
		*TestsPassed = params.TestsPassed;
}


// Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aatk_moonface_jumpslam_onspot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.UserConstructionScript");

	Aatk_moonface_jumpslam_onspot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatk_moonface_jumpslam_onspot_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.ReceiveTick");

	Aatk_moonface_jumpslam_onspot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.ExecuteUbergraph_atk_moonface_jumpslam_onspot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatk_moonface_jumpslam_onspot_C::ExecuteUbergraph_atk_moonface_jumpslam_onspot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function atk_moonface_jumpslam_onspot.atk_moonface_jumpslam_onspot_C.ExecuteUbergraph_atk_moonface_jumpslam_onspot");

	Aatk_moonface_jumpslam_onspot_C_ExecuteUbergraph_atk_moonface_jumpslam_onspot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
