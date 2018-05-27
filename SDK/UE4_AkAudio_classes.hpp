#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkComponent
// 0x0050 (0x0430 - 0x03E0)
class UAkComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03E0(0x0028) MISSED OFFSET
	class UAkAudioEventBase*                           AkAudioEvent;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAkAudioSettings                            Settings;                                                 // 0x0410(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      AutoPlay : 1;                                             // 0x041C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x13];                                      // 0x041D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}


	void SetUseReverbVolumes(bool inUseReverbVolumes);
	bool PostAssociatedAkEvent(const struct FScriptDelegate& Callback, EAkCallbackType CallbackType);
	bool PostAkEvent(class UAkAudioEventBase* AkEvent, const struct FScriptDelegate& Callback, EAkCallbackType CallbackType);
	bool IsPlaying();
	float GetAttenuationRadius();
};


// Class AkAudio.AkListenerComponent
// 0x0000 (0x0430 - 0x0430)
class UAkListenerComponent : public UAkComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkListenerComponent");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0038 (0x03C0 - 0x0388)
class AAkAmbientSound : public AActor
{
public:
	class UAkComponent*                                AkComponent;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0390(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAudioBank
// 0x0038 (0x0060 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	unsigned char                                      AutoLoad : 1;                                             // 0x0028(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0029(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

};


// Class AkAudio.AkAudioEventBase
// 0x0000 (0x0028 - 0x0028)
class UAkAudioEventBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEventBase");
		return ptr;
	}


	bool IsInfinite();
	float GetMinDuration();
	float GetMaxDuration();
	float GetMaxAttenuationRadius();
};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0040 - 0x0028)
class UAkAudioEvent : public UAkAudioEventBase
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MinimumDuration;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.AkProximityComponent
// 0x0040 (0x0420 - 0x03E0)
class UAkProximityComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnProximityChange;                                        // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     TargetPosition;                                           // 0x0400(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              TriggerDistance;                                          // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastDistance;                                             // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	ELocationSource                                    LocationSource;                                           // 0x0414(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERangeStatus                                       RangeStatus;                                              // 0x0415(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0416(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkProximityComponent");
		return ptr;
	}

};


// Class AkAudio.AkAudioProximityComponent
// 0x0010 (0x0430 - 0x0420)
class UAkAudioProximityComponent : public UAkProximityComponent
{
public:
	class UAkComponent*                                AudioComponent;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UseEventAttenuationRadius : 1;                            // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      PlayEnabled : 1;                                          // 0x0428(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0429(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioProximityComponent");
		return ptr;
	}

};


// Class AkAudio.AkAudioVolume
// 0x0008 (0x03C8 - 0x03C0)
class AAkAudioVolume : public AVolume
{
public:
	class UAkAudioProximityComponent*                  AkProximityComponent;                                     // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioVolume");
		return ptr;
	}

};


// Class AkAudio.AkBankComponent
// 0x0010 (0x03F0 - 0x03E0)
class UAkBankComponent : public USceneComponent
{
public:
	class UAkAudioBank*                                AudioBank;                                                // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EBankLoadTrigger                                   BankLoadTrigger;                                          // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkBankComponent");
		return ptr;
	}


	void UnloadBankAsync();
	void LoadBankAsync();
};


// Class AkAudio.AkBankProximityComponent
// 0x0010 (0x0400 - 0x03F0)
class UAkBankProximityComponent : public UAkBankComponent
{
public:
	float                                              TriggerDistance;                                          // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkBankProximityComponent");
		return ptr;
	}

};


// Class AkAudio.AkExternalSourceEvent
// 0x0018 (0x0040 - 0x0028)
class UAkExternalSourceEvent : public UAkAudioEventBase
{
public:
	class UAkAudioEvent*                               Event;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAkExternalSource>                   ExternalSources;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkExternalSourceEvent");
		return ptr;
	}

};


// Class AkAudio.AkGameObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UAkGameObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameObjectInterface");
		return ptr;
	}


	void Stop();
	int SetSwitch(const class FString& SwitchGroup, const class FString& SwitchState);
	int SetRTPCValue(const class FString& RTPC, float Value, int InterpolationTimeMs);
	int PostTrigger(const class FString& Trigger);
	bool IsPlaying();
	struct FAkRTPCValue GetRTPCValue(const class FString& RTPC);
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}


	void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void STATIC_UnloadBankByName(const class FString& BankName);
	void STATIC_UnloadBank(class UAkAudioBank* Bank);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
	void STATIC_StopAll();
	void STATIC_StopActor(class AActor* Actor);
	void STATIC_StartProfilerCapture(const class FString& FileName);
	void STATIC_StartOutputCapture(const class FString& FileName);
	void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEventBase* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FScriptDelegate& Callback, EAkCallbackType CallbackType, bool AutoDestroy);
	void STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	void STATIC_SetState(const struct FName& StateGroup, const struct FName& State);
	void STATIC_SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor);
	void STATIC_PostEventAtLocation(class UAkAudioEventBase* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject, const struct FScriptDelegate& Callback, EAkCallbackType CallbackType);
	void STATIC_PostEvent(class UAkAudioEventBase* AkEvent, class AActor* Actor, const struct FScriptDelegate& Callback, EAkCallbackType CallbackType, bool bStopWhenAttachedToDestroyed);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void STATIC_LoadBankByName(const class FString& BankName);
	void STATIC_LoadBank(class UAkAudioBank* Bank);
	class UAkComponent* STATIC_GetAkComponentActor(class AActor* Actor, const struct FName& AttachPointName);
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool Create);
	void STATIC_ClearBanks();
	bool STATIC_AkIsGame(class UObject* WorldContextObject);
	void STATIC_AddOutputCaptureMarker(const class FString& MarkerText);
};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x03F8 - 0x03C0)
class AAkReverbVolume : public AVolume
{
public:
	class FString                                      AuxBusName;                                               // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AAkReverbVolume*                             NextLowerPriorityAkReverbVolume;                          // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SendLevel;                                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AuxBusId;                                                 // 0x03E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x03E4(0x0001) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	TArray<class UAkBankComponent*>                    BankComponents;                                           // 0x03E8(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

};


// Class AkAudio.AkReverbProximityVolume
// 0x0008 (0x0400 - 0x03F8)
class AAkReverbProximityVolume : public AAkReverbVolume
{
public:
	float                                              FadeDistance;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbProximityVolume");
		return ptr;
	}

};


// Class AkAudio.AkReverbProximityBankVolume
// 0x0008 (0x0408 - 0x0400)
class AAkReverbProximityBankVolume : public AAkReverbProximityVolume
{
public:
	class UAkBankProximityComponent*                   AkBankComponent;                                          // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbProximityBankVolume");
		return ptr;
	}

};


// Class AkAudio.AkReverbTimeVolume
// 0x0008 (0x0400 - 0x03F8)
class AAkReverbTimeVolume : public AAkReverbVolume
{
public:
	float                                              FadeRate;                                                 // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbTimeVolume");
		return ptr;
	}

};


// Class AkAudio.AkRTPCProximityComponent
// 0x0020 (0x0400 - 0x03E0)
class UAkRTPCProximityComponent : public USceneComponent
{
public:
	class FString                                      RTPCName;                                                 // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TriggerDistance;                                          // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastValue;                                                // 0x03F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRTPCProximityComponent");
		return ptr;
	}

};


// Class AkAudio.AkRTPCVolume
// 0x0008 (0x03C8 - 0x03C0)
class AAkRTPCVolume : public AVolume
{
public:
	class UAkRTPCProximityComponent*                   AkRTPCComponent;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRTPCVolume");
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x00B8 (0x00E0 - 0x0028)
class UAkSettings : public UObject
{
public:
	float                                              DebugDuration;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableListenerSpatialization;                             // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0050(0x0010) (Edit, Config)
	uint32_t                                           MaxPoolCount;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DefaultPoolSize;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FStringClassReference                       ListenerComponentClass;                                   // 0x0068(0x0010) (Edit, Config)
	struct FRotator                                    ListenerRotation;                                         // 0x0078(0x000C) (Edit, Config, IsPlainOldData)
	struct FRotator                                    EmitterRotation;                                          // 0x0084(0x000C) (Edit, Config, IsPlainOldData)
	uint32_t                                           LowerEnginePoolSize;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           CommandQueueSize;                                         // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<class FString>                              ContentPaths;                                             // 0x0098(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       GameObjectStopEvent;                                      // 0x00A8(0x0010) (Edit, Config)
	class FString                                      SpeakerChannelRtpcName;                                   // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               DebugObstructionOcclusion;                                // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              DefaultObstructionOcclusionUpdateFrequencySeconds;        // 0x00CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              OcclusionFadeRate;                                        // 0x00D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableOcclusion;                                         // 0x00D4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               StopEvent;                                                // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0020 (0x00B0 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       AttachSocketName;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                      Param;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x0070 (0x0180 - 0x0110)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0110(0x0038) MISSED OFFSET
	class UAkAudioEventBase*                           Event;                                                    // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RetriggerEvent;                                           // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	int                                                ScrubTailLengthMs;                                        // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopAtSectionEnd;                                         // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x0159(0x0013) MISSED OFFSET
	float                                              MaxSourceDuration;                                        // 0x016C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      MaxDurationSourceID;                                      // 0x0170(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x00C8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0090 (0x01A0 - 0x0110)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	class FString                                      Name;                                                     // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x0128(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
