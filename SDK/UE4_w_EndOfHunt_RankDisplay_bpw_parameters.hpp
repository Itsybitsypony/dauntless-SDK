#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunt_RankDisplay_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.SetRankImage
struct Uw_EndOfHunt_RankDisplay_bpw_C_SetRankImage_Params
{
	TEnumAsByte<Erankings_enum>                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        RankingText;                                              // (Parm, OutParm)
};

// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.OnLoaded_A84B3FED4B34BC4C76EBD2968AD5CFA9
struct Uw_EndOfHunt_RankDisplay_bpw_C_OnLoaded_A84B3FED4B34BC4C76EBD2968AD5CFA9_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.OnLoaded_3148719D451B4A840EA4FBB438FCEE4C
struct Uw_EndOfHunt_RankDisplay_bpw_C_OnLoaded_3148719D451B4A840EA4FBB438FCEE4C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.SetRankImages
struct Uw_EndOfHunt_RankDisplay_bpw_C_SetRankImages_Params
{
};

// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.ExecuteUbergraph_w_EndOfHunt_RankDisplay_bpw
struct Uw_EndOfHunt_RankDisplay_bpw_C_ExecuteUbergraph_w_EndOfHunt_RankDisplay_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
