#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_RecipeReagent_list_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_RecipeReagent_list_bpw.w_RecipeReagent_list_bpw_C.Refresh Component List
struct Uw_RecipeReagent_list_bpw_C_Refresh_Component_List_Params
{
};

// Function w_RecipeReagent_list_bpw.w_RecipeReagent_list_bpw_C.Populate Component List
struct Uw_RecipeReagent_list_bpw_C_Populate_Component_List_Params
{
	class FString                                      Recipe_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_RecipeReagent_list_bpw.w_RecipeReagent_list_bpw_C.Construct
struct Uw_RecipeReagent_list_bpw_C_Construct_Params
{
};

// Function w_RecipeReagent_list_bpw.w_RecipeReagent_list_bpw_C.OnClientInventoryChanged
struct Uw_RecipeReagent_list_bpw_C_OnClientInventoryChanged_Params
{
};

// Function w_RecipeReagent_list_bpw.w_RecipeReagent_list_bpw_C.ExecuteUbergraph_w_RecipeReagent_list_bpw
struct Uw_RecipeReagent_list_bpw_C_ExecuteUbergraph_w_RecipeReagent_list_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
