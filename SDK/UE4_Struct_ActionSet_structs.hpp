#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_alternate_attack_struct_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_ActionSet.Struct_ActionSet
// 0x0048
struct FStruct_ActionSet
{
	class UClass*                                      Class_38_A2E813EE429E126ADF2E999DA085A8F6;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UAnimMontage*                                Montage_5_69C9740F43CE4938ABF4AEBB9EDD1279;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MontagePlayRate_8_A41689FE4E224D7BD13F658E91AA77C2;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown_18_33D339B64982C289C9C9A98928ABA0F9;             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseValue_20_651135D344D4CF09555D77B2454AE0FE;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SharedCooldownActions_44_7A2CC85E410E7719F54ADFBE676C054F;// 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              StaminaDrainAmount_47_6634606E4322A4E9893A7D9DA819D3D5;   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UsageCount_50_0688BD0F473B93E1F6FBD3B876C40A83;           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Falternate_attack_struct>            AlternateAttacks_57_19B2F56040C0B86E133FCE81C1D6564A;     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
