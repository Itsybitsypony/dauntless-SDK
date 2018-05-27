// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Seagull_StayInAir_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Seagull_StayInAir.BP_Seagull_StayInAir_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Seagull_StayInAir_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull_StayInAir.BP_Seagull_StayInAir_C.UserConstructionScript");

	ABP_Seagull_StayInAir_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Seagull_StayInAir.BP_Seagull_StayInAir_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Seagull_StayInAir_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull_StayInAir.BP_Seagull_StayInAir_C.ReceiveBeginPlay");

	ABP_Seagull_StayInAir_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Seagull_StayInAir.BP_Seagull_StayInAir_C.ExecuteUbergraph_BP_Seagull_StayInAir
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Seagull_StayInAir_C::ExecuteUbergraph_BP_Seagull_StayInAir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull_StayInAir.BP_Seagull_StayInAir_C.ExecuteUbergraph_BP_Seagull_StayInAir");

	ABP_Seagull_StayInAir_C_ExecuteUbergraph_BP_Seagull_StayInAir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
