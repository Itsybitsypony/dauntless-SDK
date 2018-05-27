// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_message_slate_image_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_message_slate_image.w_message_slate_image_C.OnLoaded_AF4C559147F4052D6325CCB2F73A1630
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_image_C::OnLoaded_AF4C559147F4052D6325CCB2F73A1630(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_image.w_message_slate_image_C.OnLoaded_AF4C559147F4052D6325CCB2F73A1630");

	Uw_message_slate_image_C_OnLoaded_AF4C559147F4052D6325CCB2F73A1630_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_image.w_message_slate_image_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_image_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_image.w_message_slate_image_C.PreConstruct");

	Uw_message_slate_image_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_image.w_message_slate_image_C.Load Figure Texture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Asset                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_message_slate_image_C::Load_Figure_Texture(TAssetPtr<class UTexture2D> Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_image.w_message_slate_image_C.Load Figure Texture");

	Uw_message_slate_image_C_Load_Figure_Texture_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_message_slate_image.w_message_slate_image_C.ExecuteUbergraph_w_message_slate_image
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_message_slate_image_C::ExecuteUbergraph_w_message_slate_image(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_message_slate_image.w_message_slate_image_C.ExecuteUbergraph_w_message_slate_image");

	Uw_message_slate_image_C_ExecuteUbergraph_w_message_slate_image_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
