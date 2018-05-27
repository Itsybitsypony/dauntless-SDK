#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_MovieScene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__None          = 0,
	EAkCallbackType__EndOfEvent    = 1,
	EAkCallbackType__Duration      = 2,
	EAkCallbackType__EAkCallbackType_MAX = 3
};


// Enum AkAudio.ERangeStatus
enum class ERangeStatus : uint8_t
{
	ERangeStatus__Unknown          = 0,
	ERangeStatus__In               = 1,
	ERangeStatus__Out              = 2,
	ERangeStatus__Error            = 3,
	ERangeStatus__ERangeStatus_MAX = 4
};


// Enum AkAudio.EBankLoadState
enum class EBankLoadState : uint8_t
{
	EBankLoadState__Unloaded       = 0,
	EBankLoadState__Loading        = 1,
	EBankLoadState__Loaded         = 2,
	EBankLoadState__Unloading      = 3,
	EBankLoadState__EBankLoadState_MAX = 4
};


// Enum AkAudio.EBankLoadTrigger
enum class EBankLoadTrigger : uint8_t
{
	EBankLoadTrigger__Load         = 0,
	EBankLoadTrigger__Initialization = 1,
	EBankLoadTrigger__BeginPlay    = 2,
	EBankLoadTrigger__Custom       = 3,
	EBankLoadTrigger__EBankLoadTrigger_MAX = 4
};


// Enum AkAudio.EAkExternalSourceFileType
enum class EAkExternalSourceFileType : uint8_t
{
	EAkExternalSourceFileType__SFX = 0,
	EAkExternalSourceFileType__LocalizedVoice = 1,
	EAkExternalSourceFileType__EAkExternalSourceFileType_MAX = 2
};


// Enum AkAudio.ELocationSource
enum class ELocationSource : uint8_t
{
	ELocationSource__AudioListener = 0,
	ELocationSource__PlayerPawn    = 1,
	ELocationSource__ELocationSource_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkAudioSettings
// 0x000C
struct FAkAudioSettings
{
	float                                              AttenuationScalingFactor;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseReverbVolumes : 1;                                     // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkExternalSource
// 0x0028
struct FAkExternalSource
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      File;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EAkExternalSourceFileType                          SourceFileType;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkRTPCValue
// 0x0008
struct FAkRTPCValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HasValue : 1;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0010
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEventBase*                           AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCSectionData
// 0x0080
struct FMovieSceneAkAudioRTPCSectionData
{
	class FString                                      RTPCName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FRichCurve                                  RTPCCurve;                                                // 0x0010(0x0070)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
