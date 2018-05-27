#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_context_menu_action.w_context_menu_action_C
// 0x006C (0x033C - 0x02D0)
class Uw_context_menu_action_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	bool                                               IsSelected;                                               // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_Select;                                                // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct Fcontext_menu_action                        Action;                                                   // 0x02F0(0x0040) (Edit, BlueprintVisible)
	float                                              Angle;                                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanSelect;                                                // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	float                                              CooldownProgress;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_context_menu_action.w_context_menu_action_C");
		return ptr;
	}


	void Handle_Action();
	void Selected();
	void Unselected();
	void Update_Progress(float Progress);
	void ExecuteUbergraph_w_context_menu_action(int EntryPoint);
	void On_Select__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
