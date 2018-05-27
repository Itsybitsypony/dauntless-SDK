// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_gamemode_behemoth_spawner_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.TrySetBehemothPowerOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  BehemothName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FHunt_BehemothInfo      HuntBehemothInfo               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OverrideFound                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_gamemode_behemoth_spawner_component_C::TrySetBehemothPowerOverride(class AArchonBehemoth* Behemoth, const class FString& BehemothName, const struct FHunt_BehemothInfo& HuntBehemothInfo, bool* OverrideFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.TrySetBehemothPowerOverride");

	Ubp_gamemode_behemoth_spawner_component_C_TrySetBehemothPowerOverride_Params params;
	params.Behemoth = Behemoth;
	params.BehemothName = BehemothName;
	params.HuntBehemothInfo = HuntBehemothInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverrideFound != nullptr)
		*OverrideFound = params.OverrideFound;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void Ubp_gamemode_behemoth_spawner_component_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.Initialize");

	Ubp_gamemode_behemoth_spawner_component_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.AddOffsetToLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OriginalLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, IsPlainOldData)

void Ubp_gamemode_behemoth_spawner_component_C::AddOffsetToLocation(const struct FVector& OriginalLocation, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.AddOffsetToLocation");

	Ubp_gamemode_behemoth_spawner_component_C_AddOffsetToLocation_Params params;
	params.OriginalLocation = OriginalLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemothAtLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MonsterClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AArchonBehemoth*         Behemoth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (Parm, OutParm, IsPlainOldData)

void Ubp_gamemode_behemoth_spawner_component_C::SpawnBehemothAtLocation(class UClass* MonsterClass, const struct FVector& Location, const struct FRotator& Rotation, class AArchonBehemoth** Behemoth, struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemothAtLocation");

	Ubp_gamemode_behemoth_spawner_component_C_SpawnBehemothAtLocation_Params params;
	params.MonsterClass = MonsterClass;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoth != nullptr)
		*Behemoth = params.Behemoth;
	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SelectSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PatrolCenterPoint_C* SelectedPatrolPoint            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class Abehemoth_cinematic_intro_marker_C* SelectedCinematicMarker        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_gamemode_behemoth_spawner_component_C::SelectSpawnLocation(class ABP_PatrolCenterPoint_C** SelectedPatrolPoint, class Abehemoth_cinematic_intro_marker_C** SelectedCinematicMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SelectSpawnLocation");

	Ubp_gamemode_behemoth_spawner_component_C_SelectSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedPatrolPoint != nullptr)
		*SelectedPatrolPoint = params.SelectedPatrolPoint;
	if (SelectedCinematicMarker != nullptr)
		*SelectedCinematicMarker = params.SelectedCinematicMarker;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemothAtPatrolPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MonsterClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PatrolCenterPoint_C* PatrolPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Abehemoth_cinematic_intro_marker_C* CinematicMarker                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Behemoth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_gamemode_behemoth_spawner_component_C::SpawnBehemothAtPatrolPoint(class UClass* MonsterClass, class ABP_PatrolCenterPoint_C* PatrolPoint, class Abehemoth_cinematic_intro_marker_C* CinematicMarker, class AArchonBehemoth** Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemothAtPatrolPoint");

	Ubp_gamemode_behemoth_spawner_component_C_SpawnBehemothAtPatrolPoint_Params params;
	params.MonsterClass = MonsterClass;
	params.PatrolPoint = PatrolPoint;
	params.CinematicMarker = CinematicMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoth != nullptr)
		*Behemoth = params.Behemoth;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.ShouldShowBehemothIntros
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubp_gamemode_behemoth_spawner_component_C::ShouldShowBehemothIntros()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.ShouldShowBehemothIntros");

	Ubp_gamemode_behemoth_spawner_component_C_ShouldShowBehemothIntros_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemoth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  SelectedMonsterClass           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IntroCinematicsEnabled         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_gamemode_behemoth_spawner_component_C::SpawnBehemoth(class UClass* SelectedMonsterClass, bool IntroCinematicsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemoth");

	Ubp_gamemode_behemoth_spawner_component_C_SpawnBehemoth_Params params;
	params.SelectedMonsterClass = SelectedMonsterClass;
	params.IntroCinematicsEnabled = IntroCinematicsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.ExecuteUbergraph_bp_gamemode_behemoth_spawner_component
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubp_gamemode_behemoth_spawner_component_C::ExecuteUbergraph_bp_gamemode_behemoth_spawner_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.ExecuteUbergraph_bp_gamemode_behemoth_spawner_component");

	Ubp_gamemode_behemoth_spawner_component_C_ExecuteUbergraph_bp_gamemode_behemoth_spawner_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
