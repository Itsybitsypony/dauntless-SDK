// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_blast_frost_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ih_blast_frost_bp.ih_blast_frost_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aih_blast_frost_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_frost_bp.ih_blast_frost_bp_C.UserConstructionScript");

	Aih_blast_frost_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_blast_frost_bp.ih_blast_frost_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aih_blast_frost_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_frost_bp.ih_blast_frost_bp_C.ReceiveBeginPlay");

	Aih_blast_frost_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_blast_frost_bp.ih_blast_frost_bp_C.ExecuteUbergraph_ih_blast_frost_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aih_blast_frost_bp_C::ExecuteUbergraph_ih_blast_frost_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_frost_bp.ih_blast_frost_bp_C.ExecuteUbergraph_ih_blast_frost_bp");

	Aih_blast_frost_bp_C_ExecuteUbergraph_ih_blast_frost_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
