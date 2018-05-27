// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CompassManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompassManager.CompassManager_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_Compass_C*          CompassWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompassManager_C::Initialize(class Ubpw_Compass_C* CompassWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassManager.CompassManager_C.Initialize");

	UCompassManager_C_Initialize_Params params;
	params.CompassWidget = CompassWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassManager.CompassManager_C.Update Compass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCompassManager_C::Update_Compass()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassManager.CompassManager_C.Update Compass");

	UCompassManager_C_Update_Compass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassManager.CompassManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCompassManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassManager.CompassManager_C.ReceiveBeginPlay");

	UCompassManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassManager.CompassManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompassManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassManager.CompassManager_C.ReceiveTick");

	UCompassManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompassManager.CompassManager_C.ExecuteUbergraph_CompassManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompassManager_C::ExecuteUbergraph_CompassManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompassManager.CompassManager_C.ExecuteUbergraph_CompassManager");

	UCompassManager_C_ExecuteUbergraph_CompassManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
