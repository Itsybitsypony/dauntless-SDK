// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_debris_vfx_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_debris_vfx.BPI_debris_vfx_C.DestroyDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_debris_vfx_C::DestroyDebrisState(class UObject* Data, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_debris_vfx.BPI_debris_vfx_C.DestroyDebrisState");

	UBPI_debris_vfx_C_DestroyDebrisState_Params params;
	params.Data = Data;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_debris_vfx.BPI_debris_vfx_C.AddDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimNotifyState*        CallerEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fvfx_state_id_struct    StateId                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_debris_vfx_C::AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_debris_vfx.BPI_debris_vfx_C.AddDebrisState");

	UBPI_debris_vfx_C_AddDebrisState_Params params;
	params.CallerEvent = CallerEvent;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_debris_vfx.BPI_debris_vfx_C.UpdateDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_debris_vfx_C::UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_debris_vfx.BPI_debris_vfx_C.UpdateDebrisState");

	UBPI_debris_vfx_C_UpdateDebrisState_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
