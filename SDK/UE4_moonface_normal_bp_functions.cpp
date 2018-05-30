// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moonface_normal_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function moonface_normal_bp.moonface_normal_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Amoonface_normal_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function moonface_normal_bp.moonface_normal_bp_C.UserConstructionScript");

	Amoonface_normal_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function moonface_normal_bp.moonface_normal_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Amoonface_normal_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function moonface_normal_bp.moonface_normal_bp_C.ReceiveBeginPlay");

	Amoonface_normal_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function moonface_normal_bp.moonface_normal_bp_C.ExecuteUbergraph_moonface_normal_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amoonface_normal_bp_C::ExecuteUbergraph_moonface_normal_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function moonface_normal_bp.moonface_normal_bp_C.ExecuteUbergraph_moonface_normal_bp");

	Amoonface_normal_bp_C_ExecuteUbergraph_moonface_normal_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
