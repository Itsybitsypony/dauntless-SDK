// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_shiny_drop_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abehemoth_shiny_drop_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C.UserConstructionScript");

	Abehemoth_shiny_drop_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abehemoth_shiny_drop_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C.ReceiveBeginPlay");

	Abehemoth_shiny_drop_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C.ExecuteUbergraph_behemoth_shiny_drop_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_shiny_drop_bp_C::ExecuteUbergraph_behemoth_shiny_drop_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C.ExecuteUbergraph_behemoth_shiny_drop_bp");

	Abehemoth_shiny_drop_bp_C_ExecuteUbergraph_behemoth_shiny_drop_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
