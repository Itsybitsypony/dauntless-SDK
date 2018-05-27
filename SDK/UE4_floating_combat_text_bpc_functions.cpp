// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_floating_combat_text_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnRep_IsActivated
// (BlueprintCallable, BlueprintEvent)

void Ufloating_combat_text_bpc_C::OnRep_IsActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnRep_IsActivated");

	Ufloating_combat_text_bpc_C_OnRep_IsActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.GetThresholdIndexForDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::GetThresholdIndexForDamage(float Damage, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.GetThresholdIndexForDamage");

	Ufloating_combat_text_bpc_C_GetThresholdIndexForDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.GetFontSizeForDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FontSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::GetFontSizeForDamage(float DamageAmount, int* FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.GetFontSizeForDamage");

	Ufloating_combat_text_bpc_C_GetFontSizeForDamage_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FontSize != nullptr)
		*FontSize = params.FontSize;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_6E69D648459A4512843B78B64E1B3C58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::OnLoaded_6E69D648459A4512843B78B64E1B3C58(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_6E69D648459A4512843B78B64E1B3C58");

	Ufloating_combat_text_bpc_C_OnLoaded_6E69D648459A4512843B78B64E1B3C58_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_DFC6253B4EEAC3B789AB23A355833C02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::OnLoaded_DFC6253B4EEAC3B789AB23A355833C02(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_DFC6253B4EEAC3B789AB23A355833C02");

	Ufloating_combat_text_bpc_C_OnLoaded_DFC6253B4EEAC3B789AB23A355833C02_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_11C3411B430F438505E76D9F7032A1AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::OnLoaded_11C3411B430F438505E76D9F7032A1AD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_11C3411B430F438505E76D9F7032A1AD");

	Ufloating_combat_text_bpc_C_OnLoaded_11C3411B430F438505E76D9F7032A1AD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_C06F42B4478FD6F77CA5A8A54E83B74F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::OnLoaded_C06F42B4478FD6F77CA5A8A54E83B74F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_C06F42B4478FD6F77CA5A8A54E83B74F");

	Ufloating_combat_text_bpc_C_OnLoaded_C06F42B4478FD6F77CA5A8A54E83B74F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddDamageText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ufloating_combat_text_bpc_C::AddDamageText(float DamageAmount, class AActor* DamageInstigator, const struct FLinearColor& BaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddDamageText");

	Ufloating_combat_text_bpc_C_AddDamageText_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;
	params.BaseColor = BaseColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReceiveTick");

	Ufloating_combat_text_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ufloating_combat_text_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReceiveBeginPlay");

	Ufloating_combat_text_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnComponentDeactivated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::OnComponentDeactivated_Event_1(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnComponentDeactivated_Event_1");

	Ufloating_combat_text_bpc_C_OnComponentDeactivated_Event_1_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ufloating_combat_text_bpc_C::AddText(const struct FText& Text, class AActor* DamageInstigator, const struct FLinearColor& BaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddText");

	Ufloating_combat_text_bpc_C_AddText_Params params;
	params.Text = Text;
	params.DamageInstigator = DamageInstigator;
	params.BaseColor = BaseColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReportTotalDamage
// (BlueprintCallable, BlueprintEvent)

void Ufloating_combat_text_bpc_C::ReportTotalDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReportTotalDamage");

	Ufloating_combat_text_bpc_C_ReportTotalDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddMultitypeDamageText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CoreDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PartDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExposeDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasImpactLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ufloating_combat_text_bpc_C::AddMultitypeDamageText(class AActor* DamageInstigator, float CoreDamage, float PartDamage, float StaggerDamage, float ExposeDamage, bool HasImpactLocation, const struct FVector& ImpactLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddMultitypeDamageText");

	Ufloating_combat_text_bpc_C_AddMultitypeDamageText_Params params;
	params.DamageInstigator = DamageInstigator;
	params.CoreDamage = CoreDamage;
	params.PartDamage = PartDamage;
	params.StaggerDamage = StaggerDamage;
	params.ExposeDamage = ExposeDamage;
	params.HasImpactLocation = HasImpactLocation;
	params.ImpactLocation = ImpactLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ExecuteUbergraph_floating_combat_text_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufloating_combat_text_bpc_C::ExecuteUbergraph_floating_combat_text_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function floating_combat_text_bpc.floating_combat_text_bpc_C.ExecuteUbergraph_floating_combat_text_bpc");

	Ufloating_combat_text_bpc_C_ExecuteUbergraph_floating_combat_text_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
