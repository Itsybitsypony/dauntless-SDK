// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atmospheres_base_bp.atmospheres_base_bp_C.SetLanternIntensity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lantern_Intensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmospheres_base_bp_C::SetLanternIntensity(float Lantern_Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.SetLanternIntensity");

	Aatmospheres_base_bp_C_SetLanternIntensity_Params params;
	params.Lantern_Intensity = Lantern_Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleLightningToggle
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::HandleLightningToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.HandleLightningToggle");

	Aatmospheres_base_bp_C_HandleLightningToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.GetLightSourcePosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SceneCapture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LightPosition                  (Parm, OutParm, IsPlainOldData)

void Aatmospheres_base_bp_C::GetLightSourcePosition(bool SceneCapture, struct FVector* LightPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.GetLightSourcePosition");

	Aatmospheres_base_bp_C_GetLightSourcePosition_Params params;
	params.SceneCapture = SceneCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightPosition != nullptr)
		*LightPosition = params.LightPosition;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.OnRep_weather_type_enum_local
// (BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::OnRep_weather_type_enum_local()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.OnRep_weather_type_enum_local");

	Aatmospheres_base_bp_C_OnRep_weather_type_enum_local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.GetWeatherType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eweather_type_enum> Weather                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aatmospheres_base_bp_C::GetWeatherType(TEnumAsByte<Eweather_type_enum>* Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.GetWeatherType");

	Aatmospheres_base_bp_C_GetWeatherType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weather != nullptr)
		*Weather = params.Weather;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateWindComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::UpdateWindComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateWindComponent");

	Aatmospheres_base_bp_C_UpdateWindComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleAtmosphericFogToggle
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::HandleAtmosphericFogToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.HandleAtmosphericFogToggle");

	Aatmospheres_base_bp_C_HandleAtmosphericFogToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateAtmosphericFog
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::UpdateAtmosphericFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateAtmosphericFog");

	Aatmospheres_base_bp_C_UpdateAtmosphericFog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleLayerCloudToggle
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::HandleLayerCloudToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.HandleLayerCloudToggle");

	Aatmospheres_base_bp_C_HandleLayerCloudToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.SpawnLayerEmitters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::SpawnLayerEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.SpawnLayerEmitters");

	Aatmospheres_base_bp_C_SpawnLayerEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.SpawnRingEmitters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::SpawnRingEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.SpawnRingEmitters");

	Aatmospheres_base_bp_C_SpawnRingEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.SetCalculatedVectorParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::SetCalculatedVectorParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.SetCalculatedVectorParameters");

	Aatmospheres_base_bp_C_SetCalculatedVectorParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.GetDirectionalLightVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 directional_light_vector       (Parm, OutParm, IsPlainOldData)

void Aatmospheres_base_bp_C::GetDirectionalLightVector(struct FVector* directional_light_vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.GetDirectionalLightVector");

	Aatmospheres_base_bp_C_GetDirectionalLightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directional_light_vector != nullptr)
		*directional_light_vector = params.directional_light_vector;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateHeightFog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::UpdateHeightFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateHeightFog");

	Aatmospheres_base_bp_C_UpdateHeightFog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.Cleanup");

	Aatmospheres_base_bp_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.PositionElement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         TargetCardMesh                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InvertFacing                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDebugLine                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDebugFacing                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmospheres_base_bp_C::PositionElement(class USceneComponent* TargetCardMesh, float Yaw, float Offset, const struct FVector& Scale, float Pitch, bool InvertFacing, bool ShowDebugLine, bool ShowDebugFacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.PositionElement");

	Aatmospheres_base_bp_C_PositionElement_Params params;
	params.TargetCardMesh = TargetCardMesh;
	params.Yaw = Yaw;
	params.Offset = Offset;
	params.Scale = Scale;
	params.Pitch = Pitch;
	params.InvertFacing = InvertFacing;
	params.ShowDebugLine = ShowDebugLine;
	params.ShowDebugFacing = ShowDebugFacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.SetVectorParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::SetVectorParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.SetVectorParameters");

	Aatmospheres_base_bp_C_SetVectorParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleCloudCardsToggle
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::HandleCloudCardsToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.HandleCloudCardsToggle");

	Aatmospheres_base_bp_C_HandleCloudCardsToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleParticleCloudToggle
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::HandleParticleCloudToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.HandleParticleCloudToggle");

	Aatmospheres_base_bp_C_HandleParticleCloudToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleHeightFogToggle
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::HandleHeightFogToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.HandleHeightFogToggle");

	Aatmospheres_base_bp_C_HandleHeightFogToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateSkyLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::UpdateSkyLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.UpdateSkyLight");

	Aatmospheres_base_bp_C_UpdateSkyLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.SetScalarParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::SetScalarParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.SetScalarParameters");

	Aatmospheres_base_bp_C_SetScalarParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.PositionAtmosphereCards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::PositionAtmosphereCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.PositionAtmosphereCards");

	Aatmospheres_base_bp_C_PositionAtmosphereCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.HandleDayNightToggle
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::HandleDayNightToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.HandleDayNightToggle");

	Aatmospheres_base_bp_C_HandleDayNightToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.ApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::ApplyChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.ApplyChanges");

	Aatmospheres_base_bp_C_ApplyChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.UserConstructionScript");

	Aatmospheres_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWindRotation__FinishedFunc
// (BlueprintEvent)

void Aatmospheres_base_bp_C::AnimateWindRotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWindRotation__FinishedFunc");

	Aatmospheres_base_bp_C_AnimateWindRotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWindRotation__UpdateFunc
// (BlueprintEvent)

void Aatmospheres_base_bp_C::AnimateWindRotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWindRotation__UpdateFunc");

	Aatmospheres_base_bp_C_AnimateWindRotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWind
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Aatmospheres_base_bp_C::AnimateWind()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.AnimateWind");

	Aatmospheres_base_bp_C_AnimateWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmospheres_base_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.ReceiveTick");

	Aatmospheres_base_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Aatmospheres_base_bp_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.ReceiveGameplayStart");

	Aatmospheres_base_bp_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_base_bp.atmospheres_base_bp_C.ExecuteUbergraph_atmospheres_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmospheres_base_bp_C::ExecuteUbergraph_atmospheres_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_base_bp.atmospheres_base_bp_C.ExecuteUbergraph_atmospheres_base_bp");

	Aatmospheres_base_bp_C_ExecuteUbergraph_atmospheres_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
