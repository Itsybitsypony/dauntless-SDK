#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_context_menu_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass context_menu_bpw.context_menu_bpw_C
// 0x0070 (0x0360 - 0x02F0)
class Ucontext_menu_bpw_C : public UArchonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fcontext_menu_action>                Actions;                                                  // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class Uw_context_menu_action_C*>            ActionWidgets;                                            // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ActionClass;                                              // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Input_Vector;                                             // 0x0320(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Angle;                                                    // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Handle_Gamepad;                                           // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              Mouse_Position_Threshold;                                 // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gamepad_Stick_Threshold;                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasActionSelected;                                        // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	int                                                SelectedActionIndex;                                      // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastActionIndex;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Circle_Radius;                                            // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interact_Start_Time;                                      // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Interact_Min_Threshold;                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFadeOutSelector;                                         // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              FadeOutTimer;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDelay;                                             // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass context_menu_bpw.context_menu_bpw_C");
		return ptr;
	}


	void Add_Action(const struct Fcontext_menu_action& Action, bool Enabled, class Uw_context_menu_action_C** Widget);
	class UWidget* GetDefaultFocusedWidget();
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	bool Should_Handle_Interact_Released();
	void Get_Action_Layout_Parameters(int Index, float* Angle, struct FVector2D* Position);
	void Add_Action_to_Panel(const struct Fcontext_menu_action& Action, class UCanvasPanel* Canvas, bool CanSelect, class Uw_context_menu_action_C** Widget);
	void Get_Action_Widget_Location(int Index, float* Angle);
	void Find_Selected_Action_Index(int* Index);
	void Construct();
	void Show_Selection();
	void Hide_Selection();
	void Update_Selection();
	void Update_Visual_Selection();
	void Confirm_Selection();
	void Cancel_Selection();
	void Update(float InDeltaTime);
	void OnAquireTopOfFocusStack();
	void Update_Selection_Strength(float Strength);
	void ExecuteUbergraph_context_menu_bpw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
