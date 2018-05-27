#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_opener_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function core_opener.core_opener_C.Spawn_Core_3Plug
struct Acore_opener_C_Spawn_Core_3Plug_Params
{
};

// Function core_opener.core_opener_C.ReduceSpinBy
struct Acore_opener_C_ReduceSpinBy_Params
{
	float                                              ReduceBy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.GetIconFromItemID
struct Acore_opener_C_GetIconFromItemID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
	struct FLinearColor                                Linear_Colour;                                            // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                CoreLevelColour;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function core_opener.core_opener_C.DestroyCoreBPS
struct Acore_opener_C_DestroyCoreBPS_Params
{
	bool                                               Destroy_Basic;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy_Ball;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy_3_Plug;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy_8_Plug;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.OnInteractionBegin_GetOriginalViewTarget
struct Acore_opener_C_OnInteractionBegin_GetOriginalViewTarget_Params
{
	class APawn*                                       self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.UpdateCoreFXLights
struct Acore_opener_C_UpdateCoreFXLights_Params
{
	float                                              SwitchFrequency;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SwitchDecayRatio;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.UpdateCoreSpin
struct Acore_opener_C_UpdateCoreSpin_Params
{
	class AActor*                                      Core;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.GetActiveCore
struct Acore_opener_C_GetActiveCore_Params
{
	class AActor*                                      Active_Core;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.Spawn_Core_Ball
struct Acore_opener_C_Spawn_Core_Ball_Params
{
};

// Function core_opener.core_opener_C.Spawn_Core_8Plug
struct Acore_opener_C_Spawn_Core_8Plug_Params
{
};

// Function core_opener.core_opener_C.Spawn_Core_Basic_Default
struct Acore_opener_C_Spawn_Core_Basic_Default_Params
{
};

// Function core_opener.core_opener_C.HasCoresToUnlock
struct Acore_opener_C_HasCoresToUnlock_Params
{
	bool                                               HasCore;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECoreType>                             CoreType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.RaiseInteractWith
struct Acore_opener_C_RaiseInteractWith_Params
{
	class APawn*                                       Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.UserConstructionScript
struct Acore_opener_C_UserConstructionScript_Params
{
};

// Function core_opener.core_opener_C.CameraReset__FinishedFunc
struct Acore_opener_C_CameraReset__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.CameraReset__UpdateFunc
struct Acore_opener_C_CameraReset__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_0__FinishedFunc
struct Acore_opener_C_Timeline_0__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_0__UpdateFunc
struct Acore_opener_C_Timeline_0__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_1__FinishedFunc
struct Acore_opener_C_Timeline_1__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_1__UpdateFunc
struct Acore_opener_C_Timeline_1__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_2__FinishedFunc
struct Acore_opener_C_Timeline_2__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_2__UpdateFunc
struct Acore_opener_C_Timeline_2__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_3__FinishedFunc
struct Acore_opener_C_Timeline_3__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_3__UpdateFunc
struct Acore_opener_C_Timeline_3__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.OpenerActivation__FinishedFunc
struct Acore_opener_C_OpenerActivation__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.OpenerActivation__UpdateFunc
struct Acore_opener_C_OpenerActivation__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.OpenerDeactivation__FinishedFunc
struct Acore_opener_C_OpenerDeactivation__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.OpenerDeactivation__UpdateFunc
struct Acore_opener_C_OpenerDeactivation__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.CoreOpenSpin__FinishedFunc
struct Acore_opener_C_CoreOpenSpin__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.CoreOpenSpin__UpdateFunc
struct Acore_opener_C_CoreOpenSpin__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.CoreOpenSpin__fx_color_switch__EventFunc
struct Acore_opener_C_CoreOpenSpin__fx_color_switch__EventFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_4__FinishedFunc
struct Acore_opener_C_Timeline_4__FinishedFunc_Params
{
};

// Function core_opener.core_opener_C.Timeline_4__UpdateFunc
struct Acore_opener_C_Timeline_4__UpdateFunc_Params
{
};

// Function core_opener.core_opener_C.OnLoaded_301D17874C4E11C70ADB999B551115CE
struct Acore_opener_C_OnLoaded_301D17874C4E11C70ADB999B551115CE_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.OnLoaded_BC4CABB443137E5D23E4F0BFFE9F6C81
struct Acore_opener_C_OnLoaded_BC4CABB443137E5D23E4F0BFFE9F6C81_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.OnLoaded_AE1471914E5B126BFF5BF8B960B0AEE4
struct Acore_opener_C_OnLoaded_AE1471914E5B126BFF5BF8B960B0AEE4_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.OnLoaded_15E42471462612D44BA5ECB176E96724
struct Acore_opener_C_OnLoaded_15E42471462612D44BA5ECB176E96724_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.ReceiveBeginPlay
struct Acore_opener_C_ReceiveBeginPlay_Params
{
};

// Function core_opener.core_opener_C.OnUserCompletedInteraction
struct Acore_opener_C_OnUserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.Refresh Marker
struct Acore_opener_C_Refresh_Marker_Params
{
};

// Function core_opener.core_opener_C.OnMenuClosed
struct Acore_opener_C_OnMenuClosed_Params
{
};

// Function core_opener.core_opener_C.Set Fadeout of All Nearby Players
struct Acore_opener_C_Set_Fadeout_of_All_Nearby_Players_Params
{
	bool                                               Fadeout_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.K2_OnBecomeViewTarget
struct Acore_opener_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          pc;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.ReceiveGameplayStart
struct Acore_opener_C_ReceiveGameplayStart_Params
{
};

// Function core_opener.core_opener_C.PlayCoreOpenAnimation
struct Acore_opener_C_PlayCoreOpenAnimation_Params
{
};

// Function core_opener.core_opener_C.UpdateCoreModel
struct Acore_opener_C_UpdateCoreModel_Params
{
	class UArchonInventoryItem*                        CoreItemReference;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.HasNoCores
struct Acore_opener_C_HasNoCores_Params
{
};

// Function core_opener.core_opener_C.ResetCamera
struct Acore_opener_C_ResetCamera_Params
{
};

// Function core_opener.core_opener_C.ZoomOutCameraonOpen
struct Acore_opener_C_ZoomOutCameraonOpen_Params
{
};

// Function core_opener.core_opener_C.DissolveBasicCore
struct Acore_opener_C_DissolveBasicCore_Params
{
};

// Function core_opener.core_opener_C.Dissolve Core 8Plug
struct Acore_opener_C_Dissolve_Core_8Plug_Params
{
};

// Function core_opener.core_opener_C.Dissolve Core Ball
struct Acore_opener_C_Dissolve_Core_Ball_Params
{
};

// Function core_opener.core_opener_C.SetRotationMomentum
struct Acore_opener_C_SetRotationMomentum_Params
{
	float                                              MomentumPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.UpdateDecals_FromUI
struct Acore_opener_C_UpdateDecals_FromUI_Params
{
	bool                                               ShowPlayer1_Decal;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Player1_IsChampion;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowPlayer2_Decal;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowPlayer3_Decal;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowPlayer4_Decal;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.Set FX Rarity TINT
struct Acore_opener_C_Set_FX_Rarity_TINT_Params
{
	struct FLinearColor                                Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function core_opener.core_opener_C.ReceiveTick
struct Acore_opener_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_opener.core_opener_C.CreateUI
struct Acore_opener_C_CreateUI_Params
{
};

// Function core_opener.core_opener_C.SetupCoreA
struct Acore_opener_C_SetupCoreA_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function core_opener.core_opener_C.SetupCore - Ball Core
struct Acore_opener_C_SetupCore___Ball_Core_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function core_opener.core_opener_C.SetupCore - 8Plug
struct Acore_opener_C_SetupCore___8Plug_Params
{
	class FString                                      InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function core_opener.core_opener_C.SetupCore - 3Plug
struct Acore_opener_C_SetupCore___3Plug_Params
{
	class FString                                      InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function core_opener.core_opener_C.Dissolve 3 Plug Core
struct Acore_opener_C_Dissolve_3_Plug_Core_Params
{
};

// Function core_opener.core_opener_C.ExecuteUbergraph_core_opener
struct Acore_opener_C_ExecuteUbergraph_core_opener_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
