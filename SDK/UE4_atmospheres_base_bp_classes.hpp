#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass atmospheres_base_bp.atmospheres_base_bp_C
// 0x04F0 (0x0880 - 0x0390)
class Aatmospheres_base_bp_C : public AAtmosphereBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    p_lightning;                                              // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_lightning_below;                                        // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWindDirectionalSourceComponent*             WindDirectionalSource;                                    // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAtmosphericFogComponent*                    AtmosphericFog;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        moon;                                                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        sun;                                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        skydome;                                                  // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExponentialHeightFogComponent*              height_fog_component;                                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimateWindRotation_WindRotation_1D22CDC54C9CC9C40B181C91FD2C0B95;// 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimateWindRotation__Direction_1D22CDC54C9CC9C40B181C91FD2C0B95;// 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AnimateWindRotation;                                      // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_vertical_position;                                    // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_horizontal_position;                                  // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                sun_disc_color;                                           // 0x0410(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColor                                      sun_lightshaft_color;                                     // 0x0420(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              sun_disc_brightness;                                      // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_edge_hardness;                                        // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_disc_size;                                            // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Day;                                                      // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	struct FLinearColor                                skylight_color;                                           // 0x0434(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              skylight_brightness;                                      // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_nadir_blend_amount;                               // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              skydome_zenith_blend_amount;                              // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_horizon_haze_opacity;                             // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_horizon_haze_width;                               // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                skydome_zenith_color;                                     // 0x0458(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                skydome_horizon_color;                                    // 0x0468(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                skydome_nadir_color;                                      // 0x0478(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                skydome_horizon_haze_color;                               // 0x0488(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              skydome_stars_brightness;                                 // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_stars_scale;                                      // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                skydome_stars_color;                                      // 0x04A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               height_fog_;                                              // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               card_clouds;                                              // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04B2(0x0002) MISSED OFFSET
	float                                              moon_vertical_position;                                   // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              moon_horizontal_position;                                 // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                moon_color;                                               // 0x04BC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                moon_disc_color;                                          // 0x04CC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColor                                      moon_lightshaft_color;                                    // 0x04DC(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              moon_brightness;                                          // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     moon_disc_scale;                                          // 0x04E4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              aether_intensity;                                         // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                aether_color;                                             // 0x04F4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              cloud_card_offset;                                        // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                cloud_card_color;                                         // 0x0508(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Lantern_Intensity;                                        // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Lantern_Color;                                            // 0x051C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                wisps_color;                                              // 0x052C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              wetness;                                                  // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rain_ripples;                                             // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              disc_offset;                                              // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugLineDuration;                                        // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugArrowDuration;                                       // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Height_Fog_Transform;                                     // 0x0550(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Height_Fog_Colour;                                        // 0x055C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Height_Fog_Density;                                       // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height_Fog_Opacity;                                       // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height_Fog_Falloff;                                       // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height_Fog_Start_Distance;                                // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Height_Fog_Sun_Glow_Colour;                               // 0x057C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Height_Fog_Sun_Glow_Exponent;                             // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height_Fog_Sun_Glow_Start_Distance;                       // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_brightness;                                           // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                cloud_colour;                                             // 0x0598(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                cloud_color_top;                                          // 0x05A8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                cloud_color_bottom;                                       // 0x05B8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              cloud_color_gradient_blend_amount;                        // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_brightness;                                         // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                directional_light_color;                                  // 0x05D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     sun_disc_scale;                                           // 0x05E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              sun_glow_cloud_opacity;                                   // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_glow_cloud_radius;                                    // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_thickness;                                          // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_highlight_intensity;                                // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_rimlight_falloff;                                   // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAtmosphereRing>                     CloudRings;                                               // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            InstancedRings;                                           // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAtmosphereLayer>                    CloudLayers;                                              // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            InstancedLayers;                                          // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAtmosphereCard>                     CloudCards;                                               // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                InstancedCards;                                           // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              distant_cloud_color_blend;                                // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height_Fog_End_Distance;                                  // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wind_rotation;                                            // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wind_speed_particles;                                     // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_normal_brightness;                                  // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_normal_contrast;                                    // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_glow_minimum;                                         // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_top_brightness;                                     // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_sun_glow_intensity;                                 // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_sun_glow_radius;                                    // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_cloud_sun_glow;                                   // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                skydome_overhead_cloud_inner_color;                       // 0x068C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                skydome_overhead_cloud_outer_color;                       // 0x069C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              skydome_overhead_cloud_density;                           // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_overhead_cloud_opacity;                           // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                skydome_wisps_color;                                      // 0x06B4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              skydome_wisps_brightness;                                 // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_scale;                                      // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_scale_x;                                    // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_scale_y;                                    // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_density_2;                                  // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_density_3;                                  // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_mask_intensity;                             // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_mask_power;                                 // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_mask_contrast;                              // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_wisps_mask_scale;                                 // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_fluff_brightness;                                 // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ACloudConfiguration*                         cloud_configuration_reference;                            // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      cloud_configuration;                                      // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  cloud_configuration_transform;                            // 0x0700(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               tuning_mode;                                              // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	float                                              cloud_shadow_intensity;                                   // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_shadow_density;                                     // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_shadow_scale;                                       // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_floor_brightness;                                   // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_floor_scale;                                        // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_dissolve_contrast;                                  // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Multiplier;                               // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               atmospheric_fog_;                                         // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	float                                              Atmospheric_Density_Multiplier;                           // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Sun_Multiplier;                               // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_fluff_scale;                                      // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_fluff_density_2;                                  // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skydome_fluff_density_3;                                  // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rimlight_intensity;                                       // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rimlight_falloff;                                         // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wind_speed_grass;                                         // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	struct FName                                       Audio_Level_Atmosphere;                                   // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              wind_speed;                                               // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wind_strength;                                            // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wind_min_gust;                                            // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wind_max_gust;                                            // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                particle_fog_color;                                       // 0x0790(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              particle_fog_intenisty;                                   // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              moon_disc_brightness;                                     // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                sun_color;                                                // 0x07A8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                cloud_floor_colour_2;                                     // 0x07B8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              skydome_zenith_horizon_bias;                              // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              shadow_gain;                                              // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              albedo_brighten_global;                                   // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_glow_radius;                                          // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sun_glow_intenisty;                                       // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                sun_glow_color;                                           // 0x07DC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<Eweather_type_enum>                    weather_type_enum;                                        // 0x07EC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eweather_type_enum>                    weather_type_enum_local;                                  // 0x07ED(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x07EE(0x0002) MISSED OFFSET
	float                                              scene_capture_offset;                                     // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skin_thickness;                                           // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              skin_ao;                                                  // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloth_ao;                                                 // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              foliage_ao;                                               // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              world_ao;                                                 // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CachedAtmospheres;                                        // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               lightning;                                                // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	struct FLinearColor                                lightning_colour;                                         // 0x081C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              lightning_intensity;                                      // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sparkle_intensity;                                        // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               volumetric_fog;                                           // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ______________________________;                           // 0x0835(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0836(0x0002) MISSED OFFSET
	float                                              volume_fog_scattering;                                    // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              volume_fog_extintion_scale;                               // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      volume_fog_color;                                         // 0x0840(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                volume_fog_emissive;                                      // 0x0844(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              volume_fog_dir_light_scattering;                          // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              dir_light_shadow_distance_near;                           // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              dir_light_shadow_distance_far;                            // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           moon_material;                                            // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                cloud_floor_colour_3;                                     // 0x0868(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              cloud_floor_opacity;                                      // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloud_floor_opacity_contrast;                             // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass atmospheres_base_bp.atmospheres_base_bp_C");
		return ptr;
	}


	void SetLanternIntensity(float Lantern_Intensity);
	void HandleLightningToggle();
	void GetLightSourcePosition(bool SceneCapture, struct FVector* LightPosition);
	void OnRep_weather_type_enum_local();
	void GetWeatherType(TEnumAsByte<Eweather_type_enum>* Weather);
	void UpdateWindComponent();
	void HandleAtmosphericFogToggle();
	void UpdateAtmosphericFog();
	void HandleLayerCloudToggle();
	void SpawnLayerEmitters();
	void SpawnRingEmitters();
	void SetCalculatedVectorParameters();
	void GetDirectionalLightVector(struct FVector* directional_light_vector);
	void UpdateHeightFog();
	void Cleanup();
	void PositionElement(class USceneComponent* TargetCardMesh, float Yaw, float Offset, const struct FVector& Scale, float Pitch, bool InvertFacing, bool ShowDebugLine, bool ShowDebugFacing);
	void SetVectorParameters();
	void HandleCloudCardsToggle();
	void HandleParticleCloudToggle();
	void HandleHeightFogToggle();
	void UpdateSkyLight();
	void SetScalarParameters();
	void PositionAtmosphereCards();
	void HandleDayNightToggle();
	void ApplyChanges();
	void UserConstructionScript();
	void AnimateWindRotation__FinishedFunc();
	void AnimateWindRotation__UpdateFunc();
	void AnimateWind();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveGameplayStart();
	void ExecuteUbergraph_atmospheres_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
