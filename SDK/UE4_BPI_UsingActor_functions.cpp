// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_UsingActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_UsingActor.BPI_UsingActor_C.StartInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractiveActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interacting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_UsingActor_C::StartInteracting(class AActor* InteractiveActor, bool* Interacting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UsingActor.BPI_UsingActor_C.StartInteracting");

	UBPI_UsingActor_C_StartInteracting_Params params;
	params.InteractiveActor = InteractiveActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interacting != nullptr)
		*Interacting = params.Interacting;
}


// Function BPI_UsingActor.BPI_UsingActor_C.OnConsumeUseCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Resource_Cost                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_UsingActor_C::OnConsumeUseCost(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Resource_Cost, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UsingActor.BPI_UsingActor_C.OnConsumeUseCost");

	UBPI_UsingActor_C_OnConsumeUseCost_Params params;
	params.Resource_Type = Resource_Type;
	params.Resource_Cost = Resource_Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function BPI_UsingActor.BPI_UsingActor_C.OnStartUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Using_Montage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_UsingActor_C::OnStartUse(class UAnimMontage* Using_Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UsingActor.BPI_UsingActor_C.OnStartUse");

	UBPI_UsingActor_C_OnStartUse_Params params;
	params.Using_Montage = Using_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_UsingActor.BPI_UsingActor_C.OnCompleteUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Successful_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            InteractionMontage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_UsingActor_C::OnCompleteUse(bool Successful_, class UAnimMontage* InteractionMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_UsingActor.BPI_UsingActor_C.OnCompleteUse");

	UBPI_UsingActor_C_OnCompleteUse_Params params;
	params.Successful_ = Successful_;
	params.InteractionMontage = InteractionMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
