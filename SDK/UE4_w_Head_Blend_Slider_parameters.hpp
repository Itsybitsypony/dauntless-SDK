#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Head_Blend_Slider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.UpdateOriginalValue
struct Uw_Head_Blend_Slider_C_UpdateOriginalValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Get Morph Value
struct Uw_Head_Blend_Slider_C_Get_Morph_Value_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnFocusReceived
struct Uw_Head_Blend_Slider_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Reset Morph Value
struct Uw_Head_Blend_Slider_C_Reset_Morph_Value_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Set Morph Value
struct Uw_Head_Blend_Slider_C_Set_Morph_Value_Params
{
	float                                              NewMorphValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Cancel Value
struct Uw_Head_Blend_Slider_C_Cancel_Value_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Save Value
struct Uw_Head_Blend_Slider_C_Save_Value_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Set Target Mesh Component
struct Uw_Head_Blend_Slider_C_Set_Target_Mesh_Component_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh_Component;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFaceMorphTranslation                       Morph_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USkeletalMeshComponent*                      Beard_Mesh_Component;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Paperdoll_Beard_Mesh_Component;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Construct
struct Uw_Head_Blend_Slider_C_Construct_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Destruct
struct Uw_Head_Blend_Slider_C_Destruct_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature
struct Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature
struct Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature
struct Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature
struct Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature
struct Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Tick
struct Uw_Head_Blend_Slider_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Slider Lost Focus
struct Uw_Head_Blend_Slider_C_Slider_Lost_Focus_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Slider Gained Focus
struct Uw_Head_Blend_Slider_C_Slider_Gained_Focus_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnMouseEnter
struct Uw_Head_Blend_Slider_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnFocusLost
struct Uw_Head_Blend_Slider_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.ExecuteUbergraph_w_Head_Blend_Slider
struct Uw_Head_Blend_Slider_C_ExecuteUbergraph_w_Head_Blend_Slider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Interaction__DelegateSignature
struct Uw_Head_Blend_Slider_C_Interaction__DelegateSignature_Params
{
};

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnMorphValueChanged__DelegateSignature
struct Uw_Head_Blend_Slider_C_OnMorphValueChanged__DelegateSignature_Params
{
	float                                              NewMorphValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
