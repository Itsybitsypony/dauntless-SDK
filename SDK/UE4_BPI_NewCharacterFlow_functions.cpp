// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_NewCharacterFlow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_NewCharacterFlow.BPI_NewCharacterFlow_C.FinishNewCharacterFlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NewCharacterFlow_C::FinishNewCharacterFlow(class APlayerController* Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NewCharacterFlow.BPI_NewCharacterFlow_C.FinishNewCharacterFlow");

	UBPI_NewCharacterFlow_C_FinishNewCharacterFlow_Params params;
	params.Player_Controller = Player_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NewCharacterFlow.BPI_NewCharacterFlow_C.StartNewCharacterFlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NewCharacterFlow_C::StartNewCharacterFlow(class APlayerController* Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NewCharacterFlow.BPI_NewCharacterFlow_C.StartNewCharacterFlow");

	UBPI_NewCharacterFlow_C_StartNewCharacterFlow_Params params;
	params.Player_Controller = Player_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
