// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_small_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_context_menu_action_small.w_context_menu_action_small_C.Get Label Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D Uw_context_menu_action_small_C::Get_Label_Position(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.Get Label Position");

	Uw_context_menu_action_small_C_Get_Label_Position_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.Position Label
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Alignment                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_small_C::Position_Label(const struct FVector2D& Alignment, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.Position Label");

	Uw_context_menu_action_small_C_Position_Label_Params params;
	params.Alignment = Alignment;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.Selected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_small_C::Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.Selected");

	Uw_context_menu_action_small_C_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_small_C::Unselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.Unselected");

	Uw_context_menu_action_small_C_Unselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_small_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.Initialize");

	Uw_context_menu_action_small_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_small_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.PreConstruct");

	Uw_context_menu_action_small_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_context_menu_action_small_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.Construct");

	Uw_context_menu_action_small_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.Handle Action
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_small_C::Handle_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.Handle Action");

	Uw_context_menu_action_small_C_Handle_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_small.w_context_menu_action_small_C.ExecuteUbergraph_w_context_menu_action_small
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_small_C::ExecuteUbergraph_w_context_menu_action_small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_small.w_context_menu_action_small_C.ExecuteUbergraph_w_context_menu_action_small");

	Uw_context_menu_action_small_C_ExecuteUbergraph_w_context_menu_action_small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
