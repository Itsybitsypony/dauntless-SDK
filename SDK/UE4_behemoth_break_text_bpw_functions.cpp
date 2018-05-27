// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_break_text_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_break_text_bpw.behemoth_break_text_bpw_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubehemoth_break_text_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_break_text_bpw.behemoth_break_text_bpw_C.GetText_1");

	Ubehemoth_break_text_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function behemoth_break_text_bpw.behemoth_break_text_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubehemoth_break_text_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_break_text_bpw.behemoth_break_text_bpw_C.Construct");

	Ubehemoth_break_text_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_break_text_bpw.behemoth_break_text_bpw_C.ExecuteUbergraph_behemoth_break_text_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_break_text_bpw_C::ExecuteUbergraph_behemoth_break_text_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_break_text_bpw.behemoth_break_text_bpw_C.ExecuteUbergraph_behemoth_break_text_bpw");

	Ubehemoth_break_text_bpw_C_ExecuteUbergraph_behemoth_break_text_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
