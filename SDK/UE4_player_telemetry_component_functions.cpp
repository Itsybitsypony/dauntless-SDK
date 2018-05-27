// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_telemetry_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_telemetry_component.player_telemetry_component_C.GetCurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  CurrentWeapon                  (Parm, OutParm, ZeroConstructor)

void Uplayer_telemetry_component_C::GetCurrentWeapon(class FString* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.GetCurrentWeapon");

	Uplayer_telemetry_component_C_GetCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeapon != nullptr)
		*CurrentWeapon = params.CurrentWeapon;
}


// Function player_telemetry_component.player_telemetry_component_C.GetClosestBehemoth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ClosestBehemothName            (Parm, OutParm, ZeroConstructor)

void Uplayer_telemetry_component_C::GetClosestBehemoth(class FString* ClosestBehemothName)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.GetClosestBehemoth");

	Uplayer_telemetry_component_C_GetClosestBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestBehemothName != nullptr)
		*ClosestBehemothName = params.ClosestBehemothName;
}


// Function player_telemetry_component.player_telemetry_component_C.GetHuntID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  HuntId                         (Parm, OutParm, ZeroConstructor)

void Uplayer_telemetry_component_C::GetHuntID(class FString* HuntId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.GetHuntID");

	Uplayer_telemetry_component_C_GetHuntID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntId != nullptr)
		*HuntId = params.HuntId;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Logout In Island
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::POST_Server_Player_Logout_In_Island()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Server Player Logout In Island");

	Uplayer_telemetry_component_C_POST_Server_Player_Logout_In_Island_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Login In Island
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::POST_Server_Player_Login_In_Island()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Server Player Login In Island");

	Uplayer_telemetry_component_C_POST_Server_Player_Login_In_Island_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Logout In City
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::POST_Server_Player_Logout_In_City()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Server Player Logout In City");

	Uplayer_telemetry_component_C_POST_Server_Player_Logout_In_City_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Login In City
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::POST_Server_Player_Login_In_City()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Server Player Login In City");

	Uplayer_telemetry_component_C_POST_Server_Player_Login_In_City_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Spawned In Island
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::POST_Server_Player_Spawned_In_Island()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Server Player Spawned In Island");

	Uplayer_telemetry_component_C_POST_Server_Player_Spawned_In_Island_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Spawned In City
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::POST_Server_Player_Spawned_In_City()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Server Player Spawned In City");

	Uplayer_telemetry_component_C_POST_Server_Player_Spawned_In_City_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.Fill Montage Start Data
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::Fill_Montage_Start_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.Fill Montage Start Data");

	Uplayer_telemetry_component_C_Fill_Montage_Start_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Montage Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Started                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_telemetry_component_C::POST_Server_Player_Montage_Event(class UAnimMontage* Montage, bool Interrupted, bool Started)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Server Player Montage Event");

	Uplayer_telemetry_component_C_POST_Server_Player_Montage_Event_Params params;
	params.Montage = Montage;
	params.Interrupted = Interrupted;
	params.Started = Started;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.OnGameModeStartCityEvent
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::OnGameModeStartCityEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.OnGameModeStartCityEvent");

	Uplayer_telemetry_component_C_OnGameModeStartCityEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.On Recover From Fall Event
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::On_Recover_From_Fall_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.On Recover From Fall Event");

	Uplayer_telemetry_component_C_On_Recover_From_Fall_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.Get Player Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJsonBPObjectField      player_id                      (Parm, OutParm)
// struct FJsonBPObjectField      character_id                   (Parm, OutParm)
// struct FJsonBPObjectField      Position                       (Parm, OutParm)
// struct FJsonBPObjectField      Facing                         (Parm, OutParm)
// struct FJsonBPObjectField      Camera                         (Parm, OutParm)
// struct FJsonBPObjectField      Velocity                       (Parm, OutParm)
// struct FJsonBPObjectField      player_stats                   (Parm, OutParm)

void Uplayer_telemetry_component_C::Get_Player_Info(struct FJsonBPObjectField* player_id, struct FJsonBPObjectField* character_id, struct FJsonBPObjectField* Position, struct FJsonBPObjectField* Facing, struct FJsonBPObjectField* Camera, struct FJsonBPObjectField* Velocity, struct FJsonBPObjectField* player_stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.Get Player Info");

	Uplayer_telemetry_component_C_Get_Player_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (player_id != nullptr)
		*player_id = params.player_id;
	if (character_id != nullptr)
		*character_id = params.character_id;
	if (Position != nullptr)
		*Position = params.Position;
	if (Facing != nullptr)
		*Facing = params.Facing;
	if (Camera != nullptr)
		*Camera = params.Camera;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (player_stats != nullptr)
		*player_stats = params.player_stats;
}


// Function player_telemetry_component.player_telemetry_component_C.POST Player Location Telemetry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::POST_Player_Location_Telemetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.POST Player Location Telemetry");

	Uplayer_telemetry_component_C_POST_Player_Location_Telemetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.TIMER Player Location Telemetry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::TIMER_Player_Location_Telemetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.TIMER Player Location Telemetry");

	Uplayer_telemetry_component_C_TIMER_Player_Location_Telemetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.Get Loadout
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_telemetry_component_C::Get_Loadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.Get Loadout");

	Uplayer_telemetry_component_C_Get_Loadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_telemetry_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.ReceiveTick");

	Uplayer_telemetry_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.Montage Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_telemetry_component_C::Montage_Started(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.Montage Started");

	Uplayer_telemetry_component_C_Montage_Started_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.Montage Blending Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_telemetry_component_C::Montage_Blending_Out(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.Montage Blending Out");

	Uplayer_telemetry_component_C_Montage_Blending_Out_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uplayer_telemetry_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.ReceiveBeginPlay");

	Uplayer_telemetry_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_telemetry_component.player_telemetry_component_C.ExecuteUbergraph_player_telemetry_component
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_telemetry_component_C::ExecuteUbergraph_player_telemetry_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_telemetry_component.player_telemetry_component_C.ExecuteUbergraph_player_telemetry_component");

	Uplayer_telemetry_component_C_ExecuteUbergraph_player_telemetry_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
