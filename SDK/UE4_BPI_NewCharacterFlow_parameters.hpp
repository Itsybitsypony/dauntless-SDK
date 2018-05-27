#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_NewCharacterFlow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_NewCharacterFlow.BPI_NewCharacterFlow_C.FinishNewCharacterFlow
struct UBPI_NewCharacterFlow_C_FinishNewCharacterFlow_Params
{
	class APlayerController*                           Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_NewCharacterFlow.BPI_NewCharacterFlow_C.StartNewCharacterFlow
struct UBPI_NewCharacterFlow_C_StartNewCharacterFlow_Params
{
	class APlayerController*                           Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
