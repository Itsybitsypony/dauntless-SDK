#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPickerPalette_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C
// 0x00A1 (0x0371 - 0x02D0)
class Uw_CC_ColourPickerPalette_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      PaletteImage;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      PickerHoverIndicator;                                     // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               Is_In_Focus;                                              // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              Slider_PrimaryX;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slider_PrimaryY;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slider_Secondary_X;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slider_SecondaryY;                                        // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLeftStick_X;                                       // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLeftStick_Y;                                       // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Changing_Primary;                                      // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    Primary_Slider_Color_Changed;                             // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Secondary_Slider_Color_Changed;                           // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Slider_Changed_This_Tick;                                 // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class UTexture2D*                                  PaletteTexture;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Force_Update;                                             // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class Uw_PaletteEyeDropper_C*                      PrimaryEyeDropper;                                        // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uw_PaletteEyeDropper_C*                      SecondaryEyeDropper;                                      // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Primary_Colour;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Secondary_Colour;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               SingleEyeDropper;                                         // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C");
		return ptr;
	}


	class Uw_PaletteEyeDropper_C* Get_Active_Eye_Dropper();
	void Set_Active_Slider(bool Primary_Active);
	void Get_Secondary_Dropper_Viewport_Location(struct FGeometry* Geometry, struct FVector2D* ViewportPosition);
	void Get_Primary_Dropper_Viewport_Location(struct FGeometry* Geometry, struct FVector2D* ViewportPosition);
	void Handle_Analog_Slider_Y(bool* Did_Move_Slider);
	void Handle_Analog_Slider_X(bool* Did_Move_Slider);
	void Refresh_Secondary_Colour();
	void Refresh_Primary_Colour();
	void Get_Dropper_Viewport_Position(struct FGeometry* Geometry, struct FVector2D* ViewportPosition);
	bool IsLeftStickNavigation(const struct FKey& Key);
	void Update_Colour_Picker_Material(class UMaterialInstanceDynamic* Material, float Slider_X, float Slider_Y, struct FLinearColor* LinearColor);
	bool Should_Handle_Analog_Stick(float Slider_Value, float Analog_Value);
	void Analog_Step_Slider(float Slider, float Analog_Value, float* Slider_Value);
	struct FEventReply OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void Update_Sliders_From_Mouse(const struct FGeometry& Geometry, const struct FPointerEvent& Mouse_Input);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void OnLoaded_A997719A43C51C81C2378EBE5815F692(class UObject* Loaded);
	void Construct();
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void On_Sliders_Changed(const struct FGeometry& Geometry);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnSynchronizeProperties();
	void New_Palette(TAssetPtr<class UObject> Palette);
	void Destruct();
	void On_Sliders_Initialized(const struct FGeometry& Geometry);
	void ExecuteUbergraph_w_CC_ColourPickerPalette(int EntryPoint);
	void Secondary_Slider_Color_Changed__DelegateSignature(const struct FLinearColor& Color);
	void Primary_Slider_Color_Changed__DelegateSignature(const struct FLinearColor& Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
