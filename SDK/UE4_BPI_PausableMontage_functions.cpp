// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_PausableMontage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_PausableMontage.BPI_PausableMontage_C.Pause Montage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Length_of_Pause                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_PausableMontage_C::Pause_Montage(float Length_of_Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PausableMontage.BPI_PausableMontage_C.Pause Montage");

	UBPI_PausableMontage_C_Pause_Montage_Params params;
	params.Length_of_Pause = Length_of_Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
