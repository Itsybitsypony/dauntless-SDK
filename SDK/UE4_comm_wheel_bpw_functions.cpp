// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_comm_wheel_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function comm_wheel_bpw.comm_wheel_bpw_C.FindFlareQuickItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_QuickItem* Quick_Item                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucomm_wheel_bpw_C::FindFlareQuickItem(class UArchonInventoryItem_QuickItem** Quick_Item, int* Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.FindFlareQuickItem");

	Ucomm_wheel_bpw_C_FindFlareQuickItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quick_Item != nullptr)
		*Quick_Item = params.Quick_Item;
	if (Slot_Index != nullptr)
		*Slot_Index = params.Slot_Index;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucomm_wheel_bpw_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.OnMouseButtonUp");

	Ucomm_wheel_bpw_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Action Widget Angle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucomm_wheel_bpw_C::Get_Action_Widget_Angle(int Index, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Get Action Widget Angle");

	Ucomm_wheel_bpw_C_Get_Action_Widget_Angle_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Find Selected Action Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucomm_wheel_bpw_C::Find_Selected_Action_Index(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Find Selected Action Index");

	Ucomm_wheel_bpw_C_Find_Selected_Action_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Emote ItemId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Ucomm_wheel_bpw_C::Get_Emote_ItemId(int Index, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Get Emote ItemId");

	Ucomm_wheel_bpw_C_Get_Emote_ItemId_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Banner ItemId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  AnimationItemID                (Parm, OutParm, ZeroConstructor)

void Ucomm_wheel_bpw_C::Get_Banner_ItemId(class FString* AnimationItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Get Banner ItemId");

	Ucomm_wheel_bpw_C_Get_Banner_ItemId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationItemID != nullptr)
		*AnimationItemID = params.AnimationItemID;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Flare Properties
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonInventoryItem_QuickItem* QuickItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Display_Name                   (Parm, OutParm)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)
// EItemRarityLevelType           Rarity_Level                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucomm_wheel_bpw_C::Get_Flare_Properties(class UArchonInventoryItem_QuickItem* QuickItem, struct FText* Display_Name, TAssetPtr<class UTexture2D>* Icon, EItemRarityLevelType* Rarity_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Get Flare Properties");

	Ucomm_wheel_bpw_C_Get_Flare_Properties_Params params;
	params.QuickItem = QuickItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display_Name != nullptr)
		*Display_Name = params.Display_Name;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Rarity_Level != nullptr)
		*Rarity_Level = params.Rarity_Level;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucomm_wheel_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.OnKeyUp");

	Ucomm_wheel_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucomm_wheel_bpw_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.OnAnalogValueChanged");

	Ucomm_wheel_bpw_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucomm_wheel_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Construct");

	Ucomm_wheel_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucomm_wheel_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Tick");

	Ucomm_wheel_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Confirm Action
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Confirm_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Confirm Action");

	Ucomm_wheel_bpw_C_Confirm_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Ucomm_wheel_bpw_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.OnFocusLost");

	Ucomm_wheel_bpw_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Selection
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Update_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Update Selection");

	Ucomm_wheel_bpw_C_Update_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Visual Selection
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Update_Visual_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Update Visual Selection");

	Ucomm_wheel_bpw_C_Update_Visual_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Show Selector
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Show_Selector()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Show Selector");

	Ucomm_wheel_bpw_C_Show_Selector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Hide Selector
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Hide_Selector()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Hide Selector");

	Ucomm_wheel_bpw_C_Hide_Selector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Angle from Vector
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ucomm_wheel_bpw_C::Update_Angle_from_Vector(const struct FVector& Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Update Angle from Vector");

	Ucomm_wheel_bpw_C_Update_Angle_from_Vector_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.On Flare Selected
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::On_Flare_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.On Flare Selected");

	Ucomm_wheel_bpw_C_On_Flare_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.On Banner Selected
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::On_Banner_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.On Banner Selected");

	Ucomm_wheel_bpw_C_On_Banner_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 1
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::On_Emote_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 1");

	Ucomm_wheel_bpw_C_On_Emote_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 2
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::On_Emote_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 2");

	Ucomm_wheel_bpw_C_On_Emote_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 3
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::On_Emote_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 3");

	Ucomm_wheel_bpw_C_On_Emote_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 4
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::On_Emote_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 4");

	Ucomm_wheel_bpw_C_On_Emote_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Close Wheel
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Close_Wheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Close Wheel");

	Ucomm_wheel_bpw_C_Close_Wheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Selector Strength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucomm_wheel_bpw_C::Update_Selector_Strength(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Update Selector Strength");

	Ucomm_wheel_bpw_C_Update_Selector_Strength_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Input
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Update_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Update Input");

	Ucomm_wheel_bpw_C_Update_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Cooldowns
// (BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::Update_Cooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.Update Cooldowns");

	Ucomm_wheel_bpw_C_Update_Cooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.ExecuteUbergraph_comm_wheel_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucomm_wheel_bpw_C::ExecuteUbergraph_comm_wheel_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.ExecuteUbergraph_comm_wheel_bpw");

	Ucomm_wheel_bpw_C_ExecuteUbergraph_comm_wheel_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function comm_wheel_bpw.comm_wheel_bpw_C.OnWheelClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ucomm_wheel_bpw_C::OnWheelClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function comm_wheel_bpw.comm_wheel_bpw_C.OnWheelClose__DelegateSignature");

	Ucomm_wheel_bpw_C_OnWheelClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
