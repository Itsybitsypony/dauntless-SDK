// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_debug_main_widget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ai_debug_main_widget.ai_debug_main_widget_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uai_debug_main_widget_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_debug_main_widget.ai_debug_main_widget_C.GetText_1");

	Uai_debug_main_widget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ai_debug_main_widget.ai_debug_main_widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_debug_main_widget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_debug_main_widget.ai_debug_main_widget_C.Tick");

	Uai_debug_main_widget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_debug_main_widget.ai_debug_main_widget_C.ExecuteUbergraph_ai_debug_main_widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_debug_main_widget_C::ExecuteUbergraph_ai_debug_main_widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_debug_main_widget.ai_debug_main_widget_C.ExecuteUbergraph_ai_debug_main_widget");

	Uai_debug_main_widget_C_ExecuteUbergraph_ai_debug_main_widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
