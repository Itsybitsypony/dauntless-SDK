// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_loadout_equip_slot_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::Setup_Item(class UArchonInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Item");

	Uw_loadout_equip_slot_bpw_C_Setup_Item_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Handle No Keyword
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::Handle_No_Keyword(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Handle No Keyword");

	Uw_loadout_equip_slot_bpw_C_Handle_No_Keyword_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Handle Found Keyword
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::Handle_Found_Keyword(int Index, const struct FName& Keyword, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Handle Found Keyword");

	Uw_loadout_equip_slot_bpw_C_Handle_Found_Keyword_Params params;
	params.Index = Index;
	params.Keyword = Keyword;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetFoundKeywordDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasIcon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)
// struct FName                   Keyword                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::GetFoundKeywordDetails(int Index, bool* HasIcon, TAssetPtr<class UTexture2D>* Icon, struct FName* Keyword)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetFoundKeywordDetails");

	Uw_loadout_equip_slot_bpw_C_GetFoundKeywordDetails_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasIcon != nullptr)
		*HasIcon = params.HasIcon;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Keyword != nullptr)
		*Keyword = params.Keyword;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetKeyWordsForItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           Keywords                       (Parm, OutParm, ZeroConstructor)

void Uw_loadout_equip_slot_bpw_C::GetKeyWordsForItem(const class FString& ItemID, TArray<struct FName>* Keywords)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetKeyWordsForItem");

	Uw_loadout_equip_slot_bpw_C_GetKeyWordsForItem_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keywords != nullptr)
		*Keywords = params.Keywords;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_IsWeaponSlot_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_loadout_equip_slot_bpw_C::Get_IsWeaponSlot_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_IsWeaponSlot_Visibility_1");

	Uw_loadout_equip_slot_bpw_C_Get_IsWeaponSlot_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_loadout_equip_slot_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnFocusReceived");

	Uw_loadout_equip_slot_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupWeaponPower
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::LookupWeaponPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupWeaponPower");

	Uw_loadout_equip_slot_bpw_C_LookupWeaponPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupArmourPower
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Global_Resistance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::LookupArmourPower(const class FString& inString, float* Global_Resistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupArmourPower");

	Uw_loadout_equip_slot_bpw_C_LookupArmourPower_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Global_Resistance != nullptr)
		*Global_Resistance = params.Global_Resistance;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupLanternPower
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Global_Resistance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::LookupLanternPower(float* Global_Resistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupLanternPower");

	Uw_loadout_equip_slot_bpw_C_LookupLanternPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Global_Resistance != nullptr)
		*Global_Resistance = params.Global_Resistance;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_Equip_Slot_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_loadout_equip_slot_bpw_C::Get_Equip_Slot_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_Equip_Slot_ToolTipWidget_1");

	Uw_loadout_equip_slot_bpw_C_Get_Equip_Slot_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_EquipImage_ToolTipText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_loadout_equip_slot_bpw_C::Get_EquipImage_ToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_EquipImage_ToolTipText_1");

	Uw_loadout_equip_slot_bpw_C_Get_EquipImage_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_SlotTypeName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_loadout_equip_slot_bpw_C::Get_SlotTypeName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_SlotTypeName_Text_1");

	Uw_loadout_equip_slot_bpw_C_Get_SlotTypeName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetBrush_Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_loadout_equip_slot_bpw_C::GetBrush_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetBrush_Color");

	Uw_loadout_equip_slot_bpw_C_GetBrush_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Item from Slot
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::Setup_Item_from_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Item from Slot");

	Uw_loadout_equip_slot_bpw_C_Setup_Item_from_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Equipped Item from Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    FoundItem                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::Setup_Equipped_Item_from_Slot(class UArchonInventoryItem** FoundItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Equipped Item from Slot");

	Uw_loadout_equip_slot_bpw_C_Setup_Equipped_Item_from_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundItem != nullptr)
		*FoundItem = params.FoundItem;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_B866DD2E4AA25968117B8CB4553E25DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::OnLoaded_B866DD2E4AA25968117B8CB4553E25DD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_B866DD2E4AA25968117B8CB4553E25DD");

	Uw_loadout_equip_slot_bpw_C_OnLoaded_B866DD2E4AA25968117B8CB4553E25DD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_82D3ADED497240A97E87AC90D6FF39AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::OnLoaded_82D3ADED497240A97E87AC90D6FF39AD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_82D3ADED497240A97E87AC90D6FF39AD");

	Uw_loadout_equip_slot_bpw_C_OnLoaded_82D3ADED497240A97E87AC90D6FF39AD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_B53520DB46668B6D716B50883B711D4A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::OnLoaded_B53520DB46668B6D716B50883B711D4A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_B53520DB46668B6D716B50883B711D4A");

	Uw_loadout_equip_slot_bpw_C_OnLoaded_B53520DB46668B6D716B50883B711D4A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_0B5879644ED758A36F0916889C8A1532
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::OnLoaded_0B5879644ED758A36F0916889C8A1532(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_0B5879644ED758A36F0916889C8A1532");

	Uw_loadout_equip_slot_bpw_C_OnLoaded_0B5879644ED758A36F0916889C8A1532_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_4A0E96EA4013F9B88937008639A01418
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::OnLoaded_4A0E96EA4013F9B88937008639A01418(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_4A0E96EA4013F9B88937008639A01418");

	Uw_loadout_equip_slot_bpw_C_OnLoaded_4A0E96EA4013F9B88937008639A01418_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_CFFBADC44D92762AF22AC2AD5A3EA07D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::OnLoaded_CFFBADC44D92762AF22AC2AD5A3EA07D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_CFFBADC44D92762AF22AC2AD5A3EA07D");

	Uw_loadout_equip_slot_bpw_C_OnLoaded_CFFBADC44D92762AF22AC2AD5A3EA07D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateAspects
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::UpdateAspects()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateAspects");

	Uw_loadout_equip_slot_bpw_C_UpdateAspects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Tick");

	Uw_loadout_equip_slot_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Construct");

	Uw_loadout_equip_slot_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateItem_FromID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_loadout_equip_slot_bpw_C::UpdateItem_FromID(const class FString& ItemID, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateItem_FromID");

	Uw_loadout_equip_slot_bpw_C_UpdateItem_FromID_Params params;
	params.ItemID = ItemID;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateItem
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::UpdateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateItem");

	Uw_loadout_equip_slot_bpw_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Hover_Hide
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::Hover_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Hover_Hide");

	Uw_loadout_equip_slot_bpw_C_Hover_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Hover_Show
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::Hover_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Hover_Show");

	Uw_loadout_equip_slot_bpw_C_Hover_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.BndEvt__Equipment_Slot_Button_K2Node_ComponentBoundEvent_120_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::BndEvt__Equipment_Slot_Button_K2Node_ComponentBoundEvent_120_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.BndEvt__Equipment_Slot_Button_K2Node_ComponentBoundEvent_120_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uw_loadout_equip_slot_bpw_C_BndEvt__Equipment_Slot_Button_K2Node_ComponentBoundEvent_120_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Try Load Icon
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::Try_Load_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Try Load Icon");

	Uw_loadout_equip_slot_bpw_C_Try_Load_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Use Default Icon
// (BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::Use_Default_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Use Default Icon");

	Uw_loadout_equip_slot_bpw_C_Use_Default_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.ExecuteUbergraph_w_loadout_equip_slot_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_equip_slot_bpw_C::ExecuteUbergraph_w_loadout_equip_slot_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.ExecuteUbergraph_w_loadout_equip_slot_bpw");

	Uw_loadout_equip_slot_bpw_C_ExecuteUbergraph_w_loadout_equip_slot_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_UnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::EquipSlot_UnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_UnHovered__DelegateSignature");

	Uw_loadout_equip_slot_bpw_C_EquipSlot_UnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_FocusReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::EquipSlot_FocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_FocusReceived__DelegateSignature");

	Uw_loadout_equip_slot_bpw_C_EquipSlot_FocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Instance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_loadout_equip_slot_bpw_C::EquipSlot_Hovered__DelegateSignature(const class FString& ItemID, const class FString& Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_Hovered__DelegateSignature");

	Uw_loadout_equip_slot_bpw_C_EquipSlot_Hovered__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_loadout_equip_slot_bpw_C::EquipSlot_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_Clicked__DelegateSignature");

	Uw_loadout_equip_slot_bpw_C_EquipSlot_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
