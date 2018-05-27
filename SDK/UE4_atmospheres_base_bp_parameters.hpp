#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function atmospheres_base_bp.atmospheres_base_bp_C.SetLanternIntensity
struct Aatmospheres_base_bp_C_SetLanternIntensity_Params
{
	float                                              Lantern_Intensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleLightningToggle
struct Aatmospheres_base_bp_C_HandleLightningToggle_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.GetLightSourcePosition
struct Aatmospheres_base_bp_C_GetLightSourcePosition_Params
{
	bool                                               SceneCapture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LightPosition;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.OnRep_weather_type_enum_local
struct Aatmospheres_base_bp_C_OnRep_weather_type_enum_local_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.GetWeatherType
struct Aatmospheres_base_bp_C_GetWeatherType_Params
{
	TEnumAsByte<Eweather_type_enum>                    Weather;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateWindComponent
struct Aatmospheres_base_bp_C_UpdateWindComponent_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleAtmosphericFogToggle
struct Aatmospheres_base_bp_C_HandleAtmosphericFogToggle_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateAtmosphericFog
struct Aatmospheres_base_bp_C_UpdateAtmosphericFog_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleLayerCloudToggle
struct Aatmospheres_base_bp_C_HandleLayerCloudToggle_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.SpawnLayerEmitters
struct Aatmospheres_base_bp_C_SpawnLayerEmitters_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.SpawnRingEmitters
struct Aatmospheres_base_bp_C_SpawnRingEmitters_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.SetCalculatedVectorParameters
struct Aatmospheres_base_bp_C_SetCalculatedVectorParameters_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.GetDirectionalLightVector
struct Aatmospheres_base_bp_C_GetDirectionalLightVector_Params
{
	struct FVector                                     directional_light_vector;                                 // (Parm, OutParm, IsPlainOldData)
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateHeightFog
struct Aatmospheres_base_bp_C_UpdateHeightFog_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.Cleanup
struct Aatmospheres_base_bp_C_Cleanup_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.PositionElement
struct Aatmospheres_base_bp_C_PositionElement_Params
{
	class USceneComponent*                             TargetCardMesh;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InvertFacing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugLine;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugFacing;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.SetVectorParameters
struct Aatmospheres_base_bp_C_SetVectorParameters_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleCloudCardsToggle
struct Aatmospheres_base_bp_C_HandleCloudCardsToggle_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleParticleCloudToggle
struct Aatmospheres_base_bp_C_HandleParticleCloudToggle_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleHeightFogToggle
struct Aatmospheres_base_bp_C_HandleHeightFogToggle_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateSkyLight
struct Aatmospheres_base_bp_C_UpdateSkyLight_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.SetScalarParameters
struct Aatmospheres_base_bp_C_SetScalarParameters_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.PositionAtmosphereCards
struct Aatmospheres_base_bp_C_PositionAtmosphereCards_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleDayNightToggle
struct Aatmospheres_base_bp_C_HandleDayNightToggle_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.ApplyChanges
struct Aatmospheres_base_bp_C_ApplyChanges_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.UserConstructionScript
struct Aatmospheres_base_bp_C_UserConstructionScript_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWindRotation__FinishedFunc
struct Aatmospheres_base_bp_C_AnimateWindRotation__FinishedFunc_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWindRotation__UpdateFunc
struct Aatmospheres_base_bp_C_AnimateWindRotation__UpdateFunc_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWind
struct Aatmospheres_base_bp_C_AnimateWind_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.ReceiveTick
struct Aatmospheres_base_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.ReceiveGameplayStart
struct Aatmospheres_base_bp_C_ReceiveGameplayStart_Params
{
};

// Function atmospheres_base_bp.atmospheres_base_bp_C.ExecuteUbergraph_atmospheres_base_bp
struct Aatmospheres_base_bp_C_ExecuteUbergraph_atmospheres_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
