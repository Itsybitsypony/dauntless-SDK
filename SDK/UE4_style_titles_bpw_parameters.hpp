#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_titles_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function style_titles_bpw.style_titles_bpw_C.CollectTitlesFromInventory
struct Ustyle_titles_bpw_C_CollectTitlesFromInventory_Params
{
	class UArchonInventoryItem*                        Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_titles_bpw.style_titles_bpw_C.AddOwnedTitlesToScrollbox
struct Ustyle_titles_bpw_C_AddOwnedTitlesToScrollbox_Params
{
};

// Function style_titles_bpw.style_titles_bpw_C.Construct
struct Ustyle_titles_bpw_C_Construct_Params
{
};

// Function style_titles_bpw.style_titles_bpw_C.Equip
struct Ustyle_titles_bpw_C_Equip_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_titles_bpw.style_titles_bpw_C.ExecuteUbergraph_style_titles_bpw
struct Ustyle_titles_bpw_C_ExecuteUbergraph_style_titles_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_titles_bpw.style_titles_bpw_C.UpdateTitleDisplay__DelegateSignature
struct Ustyle_titles_bpw_C_UpdateTitleDisplay__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
