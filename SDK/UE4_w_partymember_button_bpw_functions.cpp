// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_partymember_button_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetColour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SpecifiedColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UImage*                  img                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partymember_button_bpw_C::SetColour(const struct FLinearColor& SpecifiedColor, class UImage* img)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetColour");

	Uw_partymember_button_bpw_C_SetColour_Params params;
	params.SpecifiedColor = SpecifiedColor;
	params.img = img;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Get_Fill_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_partymember_button_bpw_C::Get_Fill_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.Get_Fill_Visibility_1");

	Uw_partymember_button_bpw_C_Get_Fill_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.GetDyeColourFromID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            Preview_Color                  (Parm, OutParm, IsPlainOldData)

void Uw_partymember_button_bpw_C::GetDyeColourFromID(const class FString& inString, struct FLinearColor* Preview_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.GetDyeColourFromID");

	Uw_partymember_button_bpw_C_GetDyeColourFromID_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Preview_Color != nullptr)
		*Preview_Color = params.Preview_Color;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_partymember_button_bpw_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.GetBrushColor_1");

	Uw_partymember_button_bpw_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Get_playerValidVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_partymember_button_bpw_C::Get_playerValidVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.Get_playerValidVisible");

	Uw_partymember_button_bpw_C_Get_playerValidVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.OnLoaded_A058EA6248D678A919D5DF9139EBB81C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partymember_button_bpw_C::OnLoaded_A058EA6248D678A919D5DF9139EBB81C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.OnLoaded_A058EA6248D678A919D5DF9139EBB81C");

	Uw_partymember_button_bpw_C_OnLoaded_A058EA6248D678A919D5DF9139EBB81C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.OnLoaded_A29F8C0E4A5F3B9BE97D59B4FC2D0E82
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partymember_button_bpw_C::OnLoaded_A29F8C0E4A5F3B9BE97D59B4FC2D0E82(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.OnLoaded_A29F8C0E4A5F3B9BE97D59B4FC2D0E82");

	Uw_partymember_button_bpw_C_OnLoaded_A29F8C0E4A5F3B9BE97D59B4FC2D0E82_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_partymember_button_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.Construct");

	Uw_partymember_button_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetupPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TAssetPtr<class UObject>       playericon                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsLeader                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partymember_button_bpw_C::SetupPlayer(const struct FText& PlayerName, TAssetPtr<class UObject> playericon, bool IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetupPlayer");

	Uw_partymember_button_bpw_C_SetupPlayer_Params params;
	params.PlayerName = PlayerName;
	params.playericon = playericon;
	params.IsLeader = IsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.NoActivePlayer
// (BlueprintCallable, BlueprintEvent)

void Uw_partymember_button_bpw_C::NoActivePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.NoActivePlayer");

	Uw_partymember_button_bpw_C_NoActivePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetupPortraitColours
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  FabricColourDyeID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  BorderColourDyeID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  SigilColourDyeID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_partymember_button_bpw_C::SetupPortraitColours(const class FString& FabricColourDyeID, const class FString& BorderColourDyeID, const class FString& SigilColourDyeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetupPortraitColours");

	Uw_partymember_button_bpw_C_SetupPortraitColours_Params params;
	params.FabricColourDyeID = FabricColourDyeID;
	params.BorderColourDyeID = BorderColourDyeID;
	params.SigilColourDyeID = SigilColourDyeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partymember_button_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.PreConstruct");

	Uw_partymember_button_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Load Player Icon
// (BlueprintCallable, BlueprintEvent)

void Uw_partymember_button_bpw_C::Load_Player_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.Load Player Icon");

	Uw_partymember_button_bpw_C_Load_Player_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Clear Player Icon
// (BlueprintCallable, BlueprintEvent)

void Uw_partymember_button_bpw_C::Clear_Player_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.Clear Player Icon");

	Uw_partymember_button_bpw_C_Clear_Player_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Setup Player Name
// (BlueprintCallable, BlueprintEvent)

void Uw_partymember_button_bpw_C::Setup_Player_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.Setup Player Name");

	Uw_partymember_button_bpw_C_Setup_Player_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partymember_button_bpw.w_partymember_button_bpw_C.ExecuteUbergraph_w_partymember_button_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partymember_button_bpw_C::ExecuteUbergraph_w_partymember_button_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partymember_button_bpw.w_partymember_button_bpw_C.ExecuteUbergraph_w_partymember_button_bpw");

	Uw_partymember_button_bpw_C_ExecuteUbergraph_w_partymember_button_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
