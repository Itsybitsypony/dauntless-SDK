// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_WorldMap_Image_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_WorldMap_Image.w_WorldMap_Image_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_WorldMap_Image_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WorldMap_Image.w_WorldMap_Image_C.Construct");

	Uw_WorldMap_Image_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_WorldMap_Image.w_WorldMap_Image_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_WorldMap_Image_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WorldMap_Image.w_WorldMap_Image_C.OnMouseEnter");

	Uw_WorldMap_Image_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_WorldMap_Image.w_WorldMap_Image_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_WorldMap_Image_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WorldMap_Image.w_WorldMap_Image_C.OnMouseLeave");

	Uw_WorldMap_Image_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_WorldMap_Image.w_WorldMap_Image_C.ExecuteUbergraph_w_WorldMap_Image
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_WorldMap_Image_C::ExecuteUbergraph_w_WorldMap_Image(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WorldMap_Image.w_WorldMap_Image_C.ExecuteUbergraph_w_WorldMap_Image");

	Uw_WorldMap_Image_C_ExecuteUbergraph_w_WorldMap_Image_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
