// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_opener_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function core_opener.core_opener_C.Spawn_Core_3Plug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Spawn_Core_3Plug()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Spawn_Core_3Plug");

	Acore_opener_C_Spawn_Core_3Plug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.ReduceSpinBy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReduceBy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::ReduceSpinBy(float ReduceBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.ReduceSpinBy");

	Acore_opener_C_ReduceSpinBy_Params params;
	params.ReduceBy = ReduceBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.GetIconFromItemID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)
// struct FLinearColor            Linear_Colour                  (Parm, OutParm, IsPlainOldData)
// struct FLinearColor            CoreLevelColour                (Parm, OutParm, IsPlainOldData)

void Acore_opener_C::GetIconFromItemID(const class FString& ItemID, TAssetPtr<class UTexture2D>* Icon, struct FLinearColor* Linear_Colour, struct FLinearColor* CoreLevelColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.GetIconFromItemID");

	Acore_opener_C_GetIconFromItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Linear_Colour != nullptr)
		*Linear_Colour = params.Linear_Colour;
	if (CoreLevelColour != nullptr)
		*CoreLevelColour = params.CoreLevelColour;
}


// Function core_opener.core_opener_C.DestroyCoreBPS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destroy_Basic                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy_Ball                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy_3_Plug                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy_8_Plug                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::DestroyCoreBPS(bool Destroy_Basic, bool Destroy_Ball, bool Destroy_3_Plug, bool Destroy_8_Plug)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.DestroyCoreBPS");

	Acore_opener_C_DestroyCoreBPS_Params params;
	params.Destroy_Basic = Destroy_Basic;
	params.Destroy_Ball = Destroy_Ball;
	params.Destroy_3_Plug = Destroy_3_Plug;
	params.Destroy_8_Plug = Destroy_8_Plug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OnInteractionBegin_GetOriginalViewTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::OnInteractionBegin_GetOriginalViewTarget(class APawn* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OnInteractionBegin_GetOriginalViewTarget");

	Acore_opener_C_OnInteractionBegin_GetOriginalViewTarget_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.UpdateCoreFXLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SwitchFrequency                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SwitchDecayRatio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::UpdateCoreFXLights(float SwitchFrequency, float SwitchDecayRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.UpdateCoreFXLights");

	Acore_opener_C_UpdateCoreFXLights_Params params;
	params.SwitchFrequency = SwitchFrequency;
	params.SwitchDecayRatio = SwitchDecayRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.UpdateCoreSpin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Core                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::UpdateCoreSpin(class AActor* Core, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.UpdateCoreSpin");

	Acore_opener_C_UpdateCoreSpin_Params params;
	params.Core = Core;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.GetActiveCore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Active_Core                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::GetActiveCore(class AActor** Active_Core, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.GetActiveCore");

	Acore_opener_C_GetActiveCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active_Core != nullptr)
		*Active_Core = params.Active_Core;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function core_opener.core_opener_C.Spawn_Core_Ball
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Spawn_Core_Ball()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Spawn_Core_Ball");

	Acore_opener_C_Spawn_Core_Ball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Spawn_Core_8Plug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Spawn_Core_8Plug()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Spawn_Core_8Plug");

	Acore_opener_C_Spawn_Core_8Plug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Spawn_Core_Basic_Default
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Spawn_Core_Basic_Default()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Spawn_Core_Basic_Default");

	Acore_opener_C_Spawn_Core_Basic_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.HasCoresToUnlock
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasCore                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECoreType>         CoreType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::HasCoresToUnlock(bool* HasCore, TEnumAsByte<ECoreType>* CoreType)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.HasCoresToUnlock");

	Acore_opener_C_HasCoresToUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasCore != nullptr)
		*HasCore = params.HasCore;
	if (CoreType != nullptr)
		*CoreType = params.CoreType;
}


// Function core_opener.core_opener_C.RaiseInteractWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Interactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::RaiseInteractWith(class APawn* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.RaiseInteractWith");

	Acore_opener_C_RaiseInteractWith_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acore_opener_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.UserConstructionScript");

	Acore_opener_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.CameraReset__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::CameraReset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.CameraReset__FinishedFunc");

	Acore_opener_C_CameraReset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.CameraReset__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::CameraReset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.CameraReset__UpdateFunc");

	Acore_opener_C_CameraReset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_0__FinishedFunc");

	Acore_opener_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_0__UpdateFunc");

	Acore_opener_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_1__FinishedFunc");

	Acore_opener_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_1__UpdateFunc");

	Acore_opener_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_2__FinishedFunc");

	Acore_opener_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_2__UpdateFunc");

	Acore_opener_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_3__FinishedFunc");

	Acore_opener_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_3__UpdateFunc");

	Acore_opener_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OpenerActivation__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::OpenerActivation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OpenerActivation__FinishedFunc");

	Acore_opener_C_OpenerActivation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OpenerActivation__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::OpenerActivation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OpenerActivation__UpdateFunc");

	Acore_opener_C_OpenerActivation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OpenerDeactivation__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::OpenerDeactivation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OpenerDeactivation__FinishedFunc");

	Acore_opener_C_OpenerDeactivation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OpenerDeactivation__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::OpenerDeactivation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OpenerDeactivation__UpdateFunc");

	Acore_opener_C_OpenerDeactivation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.CoreOpenSpin__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::CoreOpenSpin__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.CoreOpenSpin__FinishedFunc");

	Acore_opener_C_CoreOpenSpin__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.CoreOpenSpin__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::CoreOpenSpin__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.CoreOpenSpin__UpdateFunc");

	Acore_opener_C_CoreOpenSpin__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.CoreOpenSpin__fx_color_switch__EventFunc
// (BlueprintEvent)

void Acore_opener_C::CoreOpenSpin__fx_color_switch__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.CoreOpenSpin__fx_color_switch__EventFunc");

	Acore_opener_C_CoreOpenSpin__fx_color_switch__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_4__FinishedFunc");

	Acore_opener_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void Acore_opener_C::Timeline_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Timeline_4__UpdateFunc");

	Acore_opener_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OnLoaded_301D17874C4E11C70ADB999B551115CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::OnLoaded_301D17874C4E11C70ADB999B551115CE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OnLoaded_301D17874C4E11C70ADB999B551115CE");

	Acore_opener_C_OnLoaded_301D17874C4E11C70ADB999B551115CE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OnLoaded_BC4CABB443137E5D23E4F0BFFE9F6C81
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::OnLoaded_BC4CABB443137E5D23E4F0BFFE9F6C81(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OnLoaded_BC4CABB443137E5D23E4F0BFFE9F6C81");

	Acore_opener_C_OnLoaded_BC4CABB443137E5D23E4F0BFFE9F6C81_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OnLoaded_AE1471914E5B126BFF5BF8B960B0AEE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::OnLoaded_AE1471914E5B126BFF5BF8B960B0AEE4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OnLoaded_AE1471914E5B126BFF5BF8B960B0AEE4");

	Acore_opener_C_OnLoaded_AE1471914E5B126BFF5BF8B960B0AEE4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OnLoaded_15E42471462612D44BA5ECB176E96724
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::OnLoaded_15E42471462612D44BA5ECB176E96724(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OnLoaded_15E42471462612D44BA5ECB176E96724");

	Acore_opener_C_OnLoaded_15E42471462612D44BA5ECB176E96724_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acore_opener_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.ReceiveBeginPlay");

	Acore_opener_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OnUserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::OnUserCompletedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OnUserCompletedInteraction");

	Acore_opener_C_OnUserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Refresh Marker
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Refresh_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Refresh Marker");

	Acore_opener_C_Refresh_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.OnMenuClosed
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::OnMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.OnMenuClosed");

	Acore_opener_C_OnMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Set Fadeout of All Nearby Players
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fadeout_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::Set_Fadeout_of_All_Nearby_Players(bool Fadeout_)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Set Fadeout of All Nearby Players");

	Acore_opener_C_Set_Fadeout_of_All_Nearby_Players_Params params;
	params.Fadeout_ = Fadeout_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      pc                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::K2_OnBecomeViewTarget(class APlayerController** pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.K2_OnBecomeViewTarget");

	Acore_opener_C_K2_OnBecomeViewTarget_Params params;
	params.pc = pc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Acore_opener_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.ReceiveGameplayStart");

	Acore_opener_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.PlayCoreOpenAnimation
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::PlayCoreOpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.PlayCoreOpenAnimation");

	Acore_opener_C_PlayCoreOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.UpdateCoreModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    CoreItemReference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::UpdateCoreModel(class UArchonInventoryItem* CoreItemReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.UpdateCoreModel");

	Acore_opener_C_UpdateCoreModel_Params params;
	params.CoreItemReference = CoreItemReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.HasNoCores
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::HasNoCores()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.HasNoCores");

	Acore_opener_C_HasNoCores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.ResetCamera");

	Acore_opener_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.ZoomOutCameraonOpen
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::ZoomOutCameraonOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.ZoomOutCameraonOpen");

	Acore_opener_C_ZoomOutCameraonOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.DissolveBasicCore
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::DissolveBasicCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.DissolveBasicCore");

	Acore_opener_C_DissolveBasicCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Dissolve Core 8Plug
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Dissolve_Core_8Plug()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Dissolve Core 8Plug");

	Acore_opener_C_Dissolve_Core_8Plug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Dissolve Core Ball
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Dissolve_Core_Ball()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Dissolve Core Ball");

	Acore_opener_C_Dissolve_Core_Ball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.SetRotationMomentum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MomentumPercent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::SetRotationMomentum(float MomentumPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.SetRotationMomentum");

	Acore_opener_C_SetRotationMomentum_Params params;
	params.MomentumPercent = MomentumPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.UpdateDecals_FromUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowPlayer1_Decal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Player1_IsChampion             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowPlayer2_Decal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowPlayer3_Decal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowPlayer4_Decal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::UpdateDecals_FromUI(bool ShowPlayer1_Decal, bool Player1_IsChampion, bool ShowPlayer2_Decal, bool ShowPlayer3_Decal, bool ShowPlayer4_Decal)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.UpdateDecals_FromUI");

	Acore_opener_C_UpdateDecals_FromUI_Params params;
	params.ShowPlayer1_Decal = ShowPlayer1_Decal;
	params.Player1_IsChampion = Player1_IsChampion;
	params.ShowPlayer2_Decal = ShowPlayer2_Decal;
	params.ShowPlayer3_Decal = ShowPlayer3_Decal;
	params.ShowPlayer4_Decal = ShowPlayer4_Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Set FX Rarity TINT
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Param                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Acore_opener_C::Set_FX_Rarity_TINT(const struct FLinearColor& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Set FX Rarity TINT");

	Acore_opener_C_Set_FX_Rarity_TINT_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.ReceiveTick");

	Acore_opener_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.CreateUI
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::CreateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.CreateUI");

	Acore_opener_C_CreateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.SetupCoreA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Acore_opener_C::SetupCoreA(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.SetupCoreA");

	Acore_opener_C_SetupCoreA_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.SetupCore - Ball Core
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Acore_opener_C::SetupCore___Ball_Core(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.SetupCore - Ball Core");

	Acore_opener_C_SetupCore___Ball_Core_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.SetupCore - 8Plug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Acore_opener_C::SetupCore___8Plug(const class FString& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.SetupCore - 8Plug");

	Acore_opener_C_SetupCore___8Plug_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.SetupCore - 3Plug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Acore_opener_C::SetupCore___3Plug(const class FString& InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.SetupCore - 3Plug");

	Acore_opener_C_SetupCore___3Plug_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.Dissolve 3 Plug Core
// (BlueprintCallable, BlueprintEvent)

void Acore_opener_C::Dissolve_3_Plug_Core()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.Dissolve 3 Plug Core");

	Acore_opener_C_Dissolve_3_Plug_Core_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_opener.core_opener_C.ExecuteUbergraph_core_opener
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_opener_C::ExecuteUbergraph_core_opener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_opener.core_opener_C.ExecuteUbergraph_core_opener");

	Acore_opener_C_ExecuteUbergraph_core_opener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
