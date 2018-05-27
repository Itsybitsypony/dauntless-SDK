// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_DebugText_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_DebugText.w_DebugText_C.Show Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   In_Text                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_DebugText_C::Show_Text(const struct FText& In_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_DebugText.w_DebugText_C.Show Text");

	Uw_DebugText_C_Show_Text_Params params;
	params.In_Text = In_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_DebugText.w_DebugText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_DebugText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_DebugText.w_DebugText_C.Construct");

	Uw_DebugText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_DebugText.w_DebugText_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_DebugText_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_DebugText.w_DebugText_C.OnSynchronizeProperties");

	Uw_DebugText_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_DebugText.w_DebugText_C.ExecuteUbergraph_w_DebugText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_DebugText_C::ExecuteUbergraph_w_DebugText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_DebugText.w_DebugText_C.ExecuteUbergraph_w_DebugText");

	Uw_DebugText_C_ExecuteUbergraph_w_DebugText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
