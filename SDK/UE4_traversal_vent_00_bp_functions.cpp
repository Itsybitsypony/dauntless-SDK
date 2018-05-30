// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_traversal_vent_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.IsCharacterValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*   Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Atraversal_vent_00_bp_C::IsCharacterValid(class ABP_PlayerCharacter_C* Char, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function traversal_vent_00_bp.traversal_vent_00_bp_C.IsCharacterValid");

	Atraversal_vent_00_bp_C_IsCharacterValid_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetHorizontalForce
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          xForce                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          yForce                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Atraversal_vent_00_bp_C::GetHorizontalForce(float Time, float* xForce, float* yForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetHorizontalForce");

	Atraversal_vent_00_bp_C_GetHorizontalForce_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (xForce != nullptr)
		*xForce = params.xForce;
	if (yForce != nullptr)
		*yForce = params.yForce;
}


// Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetFlightTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Atraversal_vent_00_bp_C::GetFlightTime(float Height, float Gravity, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetFlightTime");

	Atraversal_vent_00_bp_C_GetFlightTime_Params params;
	params.Height = Height;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetVerticalForce
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacterBase*    Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorVertical                 (Parm, OutParm, IsPlainOldData)
// float                          VerticalHeight                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Atraversal_vent_00_bp_C::GetVerticalForce(class AArchonCharacterBase* Character, struct FVector* VectorVertical, float* VerticalHeight, float* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetVerticalForce");

	Atraversal_vent_00_bp_C_GetVerticalForce_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorVertical != nullptr)
		*VectorVertical = params.VectorVertical;
	if (VerticalHeight != nullptr)
		*VerticalHeight = params.VerticalHeight;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
}


// Function traversal_vent_00_bp.traversal_vent_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Atraversal_vent_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function traversal_vent_00_bp.traversal_vent_00_bp_C.UserConstructionScript");

	Atraversal_vent_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function traversal_vent_00_bp.traversal_vent_00_bp_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Atraversal_vent_00_bp_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function traversal_vent_00_bp.traversal_vent_00_bp_C.ReceiveActorBeginOverlap");

	Atraversal_vent_00_bp_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function traversal_vent_00_bp.traversal_vent_00_bp_C.ExecuteUbergraph_traversal_vent_00_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Atraversal_vent_00_bp_C::ExecuteUbergraph_traversal_vent_00_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function traversal_vent_00_bp.traversal_vent_00_bp_C.ExecuteUbergraph_traversal_vent_00_bp");

	Atraversal_vent_00_bp_C_ExecuteUbergraph_traversal_vent_00_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
