// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_LocalMap_Manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LocalMap_Manager.LocalMap_Manager_C.ToggleOff
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::ToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.ToggleOff");

	ULocalMap_Manager_C_ToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.ToggleOn
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::ToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.ToggleOn");

	ULocalMap_Manager_C_ToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.AddPlayerMarkerInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::AddPlayerMarkerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.AddPlayerMarkerInfo");

	ULocalMap_Manager_C_AddPlayerMarkerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.GetMapScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULocalMap_Manager_C::GetMapScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.GetMapScale");

	ULocalMap_Manager_C_GetMapScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function LocalMap_Manager.LocalMap_Manager_C.Update Location
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::Update_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.Update Location");

	ULocalMap_Manager_C_Update_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.Initialize");

	ULocalMap_Manager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.UpdatePlayerLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::UpdatePlayerLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.UpdatePlayerLocation");

	ULocalMap_Manager_C_UpdatePlayerLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.UpdatePlayerRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::UpdatePlayerRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.UpdatePlayerRotation");

	ULocalMap_Manager_C_UpdatePlayerRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.LocationCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ULocalMap_Manager_C::LocationCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.LocationCheck");

	ULocalMap_Manager_C_LocationCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalMap_Manager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.ReceiveTick");

	ULocalMap_Manager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalMap_Manager.LocalMap_Manager_C.ExecuteUbergraph_LocalMap_Manager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalMap_Manager_C::ExecuteUbergraph_LocalMap_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalMap_Manager.LocalMap_Manager_C.ExecuteUbergraph_LocalMap_Manager");

	ULocalMap_Manager_C_ExecuteUbergraph_LocalMap_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
