// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CraftingComponent_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_CraftingComponent_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.GetVisibility_1");

	Uw_CraftingComponent_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Get_Image_0_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_CraftingComponent_bpw_C::Get_Image_0_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Get_Image_0_Brush_1");

	Uw_CraftingComponent_bpw_C_Get_Image_0_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Get_IconDisplay_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_CraftingComponent_bpw_C::Get_IconDisplay_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Get_IconDisplay_ToolTipWidget_1");

	Uw_CraftingComponent_bpw_C_Get_IconDisplay_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.From Component
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Inventory_Count                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCatalogRecipeComponent Recipe_Component               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_CraftingComponent_bpw_C::From_Component(int Inventory_Count, struct FCatalogRecipeComponent* Recipe_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.From Component");

	Uw_CraftingComponent_bpw_C_From_Component_Params params;
	params.Inventory_Count = Inventory_Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Recipe_Component != nullptr)
		*Recipe_Component = params.Recipe_Component;
}


// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.OnLoaded_7954BC0B4A8675FD89FA4FBA372CB599
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CraftingComponent_bpw_C::OnLoaded_7954BC0B4A8675FD89FA4FBA372CB599(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.OnLoaded_7954BC0B4A8675FD89FA4FBA372CB599");

	Uw_CraftingComponent_bpw_C_OnLoaded_7954BC0B4A8675FD89FA4FBA372CB599_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CraftingComponent_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.Construct");

	Uw_CraftingComponent_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.ExecuteUbergraph_w_CraftingComponent_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CraftingComponent_bpw_C::ExecuteUbergraph_w_CraftingComponent_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CraftingComponent_bpw.w_CraftingComponent_bpw_C.ExecuteUbergraph_w_CraftingComponent_bpw");

	Uw_CraftingComponent_bpw_C_ExecuteUbergraph_w_CraftingComponent_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
