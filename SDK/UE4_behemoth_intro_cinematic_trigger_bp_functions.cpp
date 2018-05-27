// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_intro_cinematic_trigger_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abehemoth_intro_cinematic_trigger_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.UserConstructionScript");

	Abehemoth_intro_cinematic_trigger_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.OnLoaded_85526137426123A96780D6A2B6A48CFC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_intro_cinematic_trigger_bp_C::OnLoaded_85526137426123A96780D6A2B6A48CFC(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.OnLoaded_85526137426123A96780D6A2B6A48CFC");

	Abehemoth_intro_cinematic_trigger_bp_C_OnLoaded_85526137426123A96780D6A2B6A48CFC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.CineComplete
// (BlueprintCallable, BlueprintEvent)

void Abehemoth_intro_cinematic_trigger_bp_C::CineComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.CineComplete");

	Abehemoth_intro_cinematic_trigger_bp_C_CineComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_intro_cinematic_trigger_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ReceiveTick");

	Abehemoth_intro_cinematic_trigger_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abehemoth_intro_cinematic_trigger_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ReceiveBeginPlay");

	Abehemoth_intro_cinematic_trigger_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_intro_cinematic_trigger_bp_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ReceiveActorBeginOverlap");

	Abehemoth_intro_cinematic_trigger_bp_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ExecuteUbergraph_behemoth_intro_cinematic_trigger_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_intro_cinematic_trigger_bp_C::ExecuteUbergraph_behemoth_intro_cinematic_trigger_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C.ExecuteUbergraph_behemoth_intro_cinematic_trigger_bp");

	Abehemoth_intro_cinematic_trigger_bp_C_ExecuteUbergraph_behemoth_intro_cinematic_trigger_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
