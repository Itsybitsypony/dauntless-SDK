// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_PaletteEyeDropper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Inactive
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_PaletteEyeDropper_C::Set_Inactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Inactive");

	Uw_PaletteEyeDropper_C_Set_Inactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Active
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_PaletteEyeDropper_C::Set_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Active");

	Uw_PaletteEyeDropper_C_Set_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Update Secondary Colour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Colour                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_PaletteEyeDropper_C::Update_Secondary_Colour(const struct FLinearColor& Colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Update Secondary Colour");

	Uw_PaletteEyeDropper_C_Update_Secondary_Colour_Params params;
	params.Colour = Colour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Update Primary Colour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Colour                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_PaletteEyeDropper_C::Update_Primary_Colour(const struct FLinearColor& Colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Update Primary Colour");

	Uw_PaletteEyeDropper_C_Update_Primary_Colour_Params params;
	params.Colour = Colour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Position In Viewport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_PaletteEyeDropper_C::Set_Position_In_Viewport(const struct FVector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Set Position In Viewport");

	Uw_PaletteEyeDropper_C_Set_Position_In_Viewport_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_PaletteEyeDropper_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.Construct");

	Uw_PaletteEyeDropper_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.ExecuteUbergraph_w_PaletteEyeDropper
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_PaletteEyeDropper_C::ExecuteUbergraph_w_PaletteEyeDropper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_PaletteEyeDropper.w_PaletteEyeDropper_C.ExecuteUbergraph_w_PaletteEyeDropper");

	Uw_PaletteEyeDropper_C_ExecuteUbergraph_w_PaletteEyeDropper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
