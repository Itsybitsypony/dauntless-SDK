#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Crafting_Thingsmith_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.GetDefaultFocusedWidget
struct UCrafting_Thingsmith_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnKeyDown
struct UCrafting_Thingsmith_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnSpawnAlternateQuestWidget__DelegateSignature
struct UCrafting_Thingsmith_bpw_C_OnSpawnAlternateQuestWidget__DelegateSignature_Params
{
};

// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.OnCraftPressedDispatcher__DelegateSignature
struct UCrafting_Thingsmith_bpw_C_OnCraftPressedDispatcher__DelegateSignature_Params
{
	bool                                               Successful_Purchase;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.NewRecipeSelection__DelegateSignature
struct UCrafting_Thingsmith_bpw_C_NewRecipeSelection__DelegateSignature_Params
{
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C.On MenuClosed__DelegateSignature
struct UCrafting_Thingsmith_bpw_C_On_MenuClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
