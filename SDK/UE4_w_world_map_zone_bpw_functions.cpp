// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_zone_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_world_map_zone_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnFocusReceived");

	Uw_world_map_zone_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.GetZone4CurrentIslands
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          MapNames                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           AssociatedHuntIDs              (Parm, OutParm, ZeroConstructor)

void Uw_world_map_zone_bpw_C::GetZone4CurrentIslands(TArray<class FString>* MapNames, TArray<struct FName>* AssociatedHuntIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.GetZone4CurrentIslands");

	Uw_world_map_zone_bpw_C_GetZone4CurrentIslands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapNames != nullptr)
		*MapNames = params.MapNames;
	if (AssociatedHuntIDs != nullptr)
		*AssociatedHuntIDs = params.AssociatedHuntIDs;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PlayRevealIslandAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   IslandID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::PlayRevealIslandAnimation(const struct FName& IslandID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PlayRevealIslandAnimation");

	Uw_world_map_zone_bpw_C_PlayRevealIslandAnimation_Params params;
	params.IslandID = IslandID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PlayRevealZoneAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_world_map_zone_bpw_C::PlayRevealZoneAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PlayRevealZoneAnimation");

	Uw_world_map_zone_bpw_C_PlayRevealZoneAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.HasDiscoveredIsland
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  IslandID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsDiscovered                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::HasDiscoveredIsland(const class FString& IslandID, bool* IsDiscovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.HasDiscoveredIsland");

	Uw_world_map_zone_bpw_C_HasDiscoveredIsland_Params params;
	params.IslandID = IslandID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDiscovered != nullptr)
		*IsDiscovered = params.IsDiscovered;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ZoomedIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::SetZoom(bool ZoomedIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetZoom");

	Uw_world_map_zone_bpw_C_SetZoom_Params params;
	params.ZoomedIn = ZoomedIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetIsDiscovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDiscovered                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::SetIsDiscovered(bool IsDiscovered, bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetIsDiscovered");

	Uw_world_map_zone_bpw_C_SetIsDiscovered_Params params;
	params.IsDiscovered = IsDiscovered;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.SetIsSelected");

	Uw_world_map_zone_bpw_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.PreConstruct");

	Uw_world_map_zone_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.LoadZoomedInVersionIcons
// (BlueprintCallable, BlueprintEvent)

void Uw_world_map_zone_bpw_C::LoadZoomedInVersionIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.LoadZoomedInVersionIcons");

	Uw_world_map_zone_bpw_C_LoadZoomedInVersionIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_world_map_zone_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.Construct");

	Uw_world_map_zone_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__w_world_map_zone_button_bpw_K2Node_ComponentBoundEvent_323_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::BndEvt__w_world_map_zone_button_bpw_K2Node_ComponentBoundEvent_323_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__w_world_map_zone_button_bpw_K2Node_ComponentBoundEvent_323_OnArchonUserButtonAction__DelegateSignature");

	Uw_world_map_zone_bpw_C_BndEvt__w_world_map_zone_button_bpw_K2Node_ComponentBoundEvent_323_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_370_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_370_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_370_OnArchonUserButtonAction__DelegateSignature");

	Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_370_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_386_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_386_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_386_OnArchonUserButtonAction__DelegateSignature");

	Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_386_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_42_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_42_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_42_OnArchonUserButtonAction__DelegateSignature");

	Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_42_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_48_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_48_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_48_OnArchonUserButtonAction__DelegateSignature");

	Uw_world_map_zone_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_48_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.ExecuteUbergraph_w_world_map_zone_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::ExecuteUbergraph_w_world_map_zone_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.ExecuteUbergraph_w_world_map_zone_bpw");

	Uw_world_map_zone_bpw_C_ExecuteUbergraph_w_world_map_zone_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneUnfocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_world_map_zone_bpw_C* Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::OnZoneUnfocused__DelegateSignature(class Uw_world_map_zone_bpw_C* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneUnfocused__DelegateSignature");

	Uw_world_map_zone_bpw_C_OnZoneUnfocused__DelegateSignature_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_world_map_zone_bpw_C* Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::OnZoneFocused__DelegateSignature(class Uw_world_map_zone_bpw_C* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneFocused__DelegateSignature");

	Uw_world_map_zone_bpw_C_OnZoneFocused__DelegateSignature_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_world_map_zone_bpw_C* Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_bpw_C::OnZoneClicked__DelegateSignature(class Uw_world_map_zone_bpw_C* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_bpw.w_world_map_zone_bpw_C.OnZoneClicked__DelegateSignature");

	Uw_world_map_zone_bpw_C_OnZoneClicked__DelegateSignature_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
