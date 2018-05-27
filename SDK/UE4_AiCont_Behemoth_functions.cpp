// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AiCont_Behemoth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AiCont_Behemoth.AiCont_Behemoth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAiCont_Behemoth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AiCont_Behemoth.AiCont_Behemoth_C.UserConstructionScript");

	AAiCont_Behemoth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AiCont_Behemoth.AiCont_Behemoth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAiCont_Behemoth_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AiCont_Behemoth.AiCont_Behemoth_C.ReceiveBeginPlay");

	AAiCont_Behemoth_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AiCont_Behemoth.AiCont_Behemoth_C.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent**   BlackboardComp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBlackboardData**        BlackboardAsset                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAiCont_Behemoth_C::OnUsingBlackBoard(class UBlackboardComponent** BlackboardComp, class UBlackboardData** BlackboardAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AiCont_Behemoth.AiCont_Behemoth_C.OnUsingBlackBoard");

	AAiCont_Behemoth_C_OnUsingBlackBoard_Params params;
	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AiCont_Behemoth.AiCont_Behemoth_C.ExecuteUbergraph_AiCont_Behemoth
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAiCont_Behemoth_C::ExecuteUbergraph_AiCont_Behemoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AiCont_Behemoth.AiCont_Behemoth_C.ExecuteUbergraph_AiCont_Behemoth");

	AAiCont_Behemoth_C_ExecuteUbergraph_AiCont_Behemoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
