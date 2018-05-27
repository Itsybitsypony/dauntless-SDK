// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_NamePlates_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_NamePlates.BPW_NamePlates_C.Set Text Block Opacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_NamePlates_C::Set_Text_Block_Opacity(class UTextBlock* TextBlock, float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.Set Text Block Opacity");

	UBPW_NamePlates_C_Set_Text_Block_Opacity_Params params;
	params.TextBlock = TextBlock;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.SetPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_NamePlates_C::SetPlayer(class AArchonCharacter* Pawn, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.SetPlayer");

	UBPW_NamePlates_C_SetPlayer_Params params;
	params.Pawn = Pawn;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.SetGuild
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonGuild*            Guild                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_NamePlates_C::SetGuild(class AArchonGuild* Guild)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.SetGuild");

	UBPW_NamePlates_C_SetGuild_Params params;
	params.Guild = Guild;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.Line of Sight Check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_NamePlates_C::Line_of_Sight_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.Line of Sight Check");

	UBPW_NamePlates_C_Line_of_Sight_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_NamePlates_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.Construct");

	UBPW_NamePlates_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_NamePlates_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.Tick");

	UBPW_NamePlates_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.StartFill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_NamePlates_C::StartFill(class APawn* UsingPawn, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.StartFill");

	UBPW_NamePlates_C_StartFill_Params params;
	params.UsingPawn = UsingPawn;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.CancelFill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_NamePlates_C::CancelFill(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.CancelFill");

	UBPW_NamePlates_C_CancelFill_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_NamePlates.BPW_NamePlates_C.ExecuteUbergraph_BPW_NamePlates
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_NamePlates_C::ExecuteUbergraph_BPW_NamePlates(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_NamePlates.BPW_NamePlates_C.ExecuteUbergraph_BPW_NamePlates");

	UBPW_NamePlates_C_ExecuteUbergraph_BPW_NamePlates_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
