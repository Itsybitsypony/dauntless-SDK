// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_context_menu_action_item.w_context_menu_action_item_C.Get Label Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D Uw_context_menu_action_item_C::Get_Label_Position(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.Get Label Position");

	Uw_context_menu_action_item_C_Get_Label_Position_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.Position Label
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Alignment                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_item_C::Position_Label(const struct FVector2D& Alignment, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.Position Label");

	Uw_context_menu_action_item_C_Position_Label_Params params;
	params.Alignment = Alignment;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.Selected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_item_C::Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.Selected");

	Uw_context_menu_action_item_C_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_item_C::Unselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.Unselected");

	Uw_context_menu_action_item_C_Unselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_item_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.Initialize");

	Uw_context_menu_action_item_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.PreConstruct");

	Uw_context_menu_action_item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_context_menu_action_item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.Construct");

	Uw_context_menu_action_item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.Handle Action
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_item_C::Handle_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.Handle Action");

	Uw_context_menu_action_item_C_Handle_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_item.w_context_menu_action_item_C.ExecuteUbergraph_w_context_menu_action_item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_item_C::ExecuteUbergraph_w_context_menu_action_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_item.w_context_menu_action_item_C.ExecuteUbergraph_w_context_menu_action_item");

	Uw_context_menu_action_item_C_ExecuteUbergraph_w_context_menu_action_item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
