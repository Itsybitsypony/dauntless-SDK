// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Set Action From ItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_context_menu_action_icon_C::Set_Action_From_ItemID(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Set Action From ItemID");

	Uw_context_menu_action_icon_C_Set_Action_From_ItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Get Rarity Background Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemRarityLevelType           Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_context_menu_action_icon_C::Get_Rarity_Background_Color(EItemRarityLevelType Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Get Rarity Background Color");

	Uw_context_menu_action_icon_C_Get_Rarity_Background_Color_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Get Label Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D Uw_context_menu_action_icon_C::Get_Label_Position(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Get Label Position");

	Uw_context_menu_action_icon_C_Get_Label_Position_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.OnLoaded_A058EA6248D678A919D5DF914AEC729E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_icon_C::OnLoaded_A058EA6248D678A919D5DF914AEC729E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.OnLoaded_A058EA6248D678A919D5DF914AEC729E");

	Uw_context_menu_action_icon_C_OnLoaded_A058EA6248D678A919D5DF914AEC729E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.PreConstruct");

	Uw_context_menu_action_icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_context_menu_action_icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Construct");

	Uw_context_menu_action_icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Selected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_icon_C::Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Selected");

	Uw_context_menu_action_icon_C_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_icon_C::Unselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Unselected");

	Uw_context_menu_action_icon_C_Unselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_icon_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Initialize");

	Uw_context_menu_action_icon_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Handle Action
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_icon_C::Handle_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Handle Action");

	Uw_context_menu_action_icon_C_Handle_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Refresh Action
// (BlueprintCallable, BlueprintEvent)

void Uw_context_menu_action_icon_C::Refresh_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.Refresh Action");

	Uw_context_menu_action_icon_C_Refresh_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_context_menu_action_icon.w_context_menu_action_icon_C.ExecuteUbergraph_w_context_menu_action_icon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_context_menu_action_icon_C::ExecuteUbergraph_w_context_menu_action_icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_context_menu_action_icon.w_context_menu_action_icon_C.ExecuteUbergraph_w_context_menu_action_icon");

	Uw_context_menu_action_icon_C_ExecuteUbergraph_w_context_menu_action_icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
