#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MyGameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MyGameInstance.MyGameInstance_C.LookupCellCatalogRow
struct UMyGameInstance_C_LookupCellCatalogRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCellCatalogTableData                       OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MyGameInstance.MyGameInstance_C.StartPlayingState
struct UMyGameInstance_C_StartPlayingState_Params
{
};

// Function MyGameInstance.MyGameInstance_C.OnFailure_87273E2B480CEE79C9C9859A60AD6AD7
struct UMyGameInstance_C_OnFailure_87273E2B480CEE79C9C9859A60AD6AD7_Params
{
};

// Function MyGameInstance.MyGameInstance_C.OnSuccess_87273E2B480CEE79C9C9859A60AD6AD7
struct UMyGameInstance_C_OnSuccess_87273E2B480CEE79C9C9859A60AD6AD7_Params
{
};

// Function MyGameInstance.MyGameInstance_C.HandleNetworkError
struct UMyGameInstance_C_HandleNetworkError_Params
{
	TEnumAsByte<ENetworkFailure>*                      FailureType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsServer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyGameInstance.MyGameInstance_C.HandleTravelError
struct UMyGameInstance_C_HandleTravelError_Params
{
	TEnumAsByte<ETravelFailure>*                       FailureType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MyGameInstance.MyGameInstance_C.GotoMainMenu
struct UMyGameInstance_C_GotoMainMenu_Params
{
};

// Function MyGameInstance.MyGameInstance_C.DestroyActiveSession
struct UMyGameInstance_C_DestroyActiveSession_Params
{
};

// Function MyGameInstance.MyGameInstance_C.ShowLoadingScreen
struct UMyGameInstance_C_ShowLoadingScreen_Params
{
};

// Function MyGameInstance.MyGameInstance_C.Show MainMenu
struct UMyGameInstance_C_Show_MainMenu_Params
{
};

// Function MyGameInstance.MyGameInstance_C.ExecuteUbergraph_MyGameInstance
struct UMyGameInstance_C_ExecuteUbergraph_MyGameInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
