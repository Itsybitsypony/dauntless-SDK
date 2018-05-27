// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_Impact_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Impact.BPI_Impact_C.ApplyImpact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DurationScale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MagnitudeScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Impact_C::ApplyImpact(const struct FVector& Position, const struct FVector& Direction, float DurationScale, float MagnitudeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Impact.BPI_Impact_C.ApplyImpact");

	UBPI_Impact_C_ApplyImpact_Params params;
	params.Position = Position;
	params.Direction = Direction;
	params.DurationScale = DurationScale;
	params.MagnitudeScale = MagnitudeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
