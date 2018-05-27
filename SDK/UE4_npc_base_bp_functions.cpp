// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function npc_base_bp.npc_base_bp_C.HideSkinUnderArmor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> SkinDynamicMats                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aarmour_part_base_bp_C*  ArmourPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkinMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.HideSkinUnderArmor");

	Anpc_base_bp_C_HideSkinUnderArmor_Params params;
	params.CutMask = CutMask;
	params.ArmourType = ArmourType;
	params.ArmourPart = ArmourPart;
	params.SkinMesh = SkinMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinDynamicMats != nullptr)
		*SkinDynamicMats = params.SkinDynamicMats;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function npc_base_bp.npc_base_bp_C.AddStaticMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::AddStaticMesh(class UStaticMesh* SkeletalMesh, class UStaticMeshComponent** StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.AddStaticMesh");

	Anpc_base_bp_C_AddStaticMesh_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMeshComponent != nullptr)
		*StaticMeshComponent = params.StaticMeshComponent;
}


// Function npc_base_bp.npc_base_bp_C.AddSkeletalMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::AddSkeletalMesh(class USkeletalMesh* SkeletalMesh, class USkeletalMeshComponent** SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.AddSkeletalMesh");

	Anpc_base_bp_C_AddSkeletalMesh_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMeshComponent != nullptr)
		*SkeletalMeshComponent = params.SkeletalMeshComponent;
}


// Function npc_base_bp.npc_base_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Anpc_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.UserConstructionScript");

	Anpc_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.OnLoaded_E53812054BC43D8DF95D93B1D0263C70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::OnLoaded_E53812054BC43D8DF95D93B1D0263C70(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.OnLoaded_E53812054BC43D8DF95D93B1D0263C70");

	Anpc_base_bp_C_OnLoaded_E53812054BC43D8DF95D93B1D0263C70_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.OnLoaded_A493FBF244836078D34B3D829F5981DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::OnLoaded_A493FBF244836078D34B3D829F5981DD(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.OnLoaded_A493FBF244836078D34B3D829F5981DD");

	Anpc_base_bp_C_OnLoaded_A493FBF244836078D34B3D829F5981DD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.OnLoaded_430B77724A13338D3D1E74813BAC644A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::OnLoaded_430B77724A13338D3D1E74813BAC644A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.OnLoaded_430B77724A13338D3D1E74813BAC644A");

	Anpc_base_bp_C_OnLoaded_430B77724A13338D3D1E74813BAC644A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.OnLoaded_23C22D854B058F63A0887AA932DEC533
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::OnLoaded_23C22D854B058F63A0887AA932DEC533(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.OnLoaded_23C22D854B058F63A0887AA932DEC533");

	Anpc_base_bp_C_OnLoaded_23C22D854B058F63A0887AA932DEC533_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.OnLoaded_9A193F17466D4863D17E0F861E444784
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::OnLoaded_9A193F17466D4863D17E0F861E444784(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.OnLoaded_9A193F17466D4863D17E0F861E444784");

	Anpc_base_bp_C_OnLoaded_9A193F17466D4863D17E0F861E444784_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.OnLoaded_41310CB5484D2358D0B165B50107BEC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::OnLoaded_41310CB5484D2358D0B165B50107BEC6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.OnLoaded_41310CB5484D2358D0B165B50107BEC6");

	Anpc_base_bp_C_OnLoaded_41310CB5484D2358D0B165B50107BEC6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Anpc_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.ReceiveBeginPlay");

	Anpc_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.SetupNPCMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshParent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::SetupNPCMesh(class USkeletalMeshComponent* MeshParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.SetupNPCMesh");

	Anpc_base_bp_C_SetupNPCMesh_Params params;
	params.MeshParent = MeshParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.FinishSetupNPCMesh
// (BlueprintCallable, BlueprintEvent)

void Anpc_base_bp_C::FinishSetupNPCMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.FinishSetupNPCMesh");

	Anpc_base_bp_C_FinishSetupNPCMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.ExecuteUbergraph_npc_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_base_bp_C::ExecuteUbergraph_npc_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.ExecuteUbergraph_npc_base_bp");

	Anpc_base_bp_C_ExecuteUbergraph_npc_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_base_bp.npc_base_bp_C.MyCustomEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Anpc_base_bp_C::MyCustomEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_base_bp.npc_base_bp_C.MyCustomEvent__DelegateSignature");

	Anpc_base_bp_C_MyCustomEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
