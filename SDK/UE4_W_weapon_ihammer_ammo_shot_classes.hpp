#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_weapon_ihammer_ammo_shot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C
// 0x0015 (0x02E5 - 0x02D0)
class UW_weapon_ihammer_ammo_shot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Casing_Empty;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              GlowFrequency;                                            // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Eui_ammo_states>                       AmmoType;                                                 // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C");
		return ptr;
	}


	struct FLinearColor Get_Casing_Boosted_Glow_ColorAndOpacity_1();
	void Set_State(TEnumAsByte<Eui_ammo_states> Index);
	void ExecuteUbergraph_W_weapon_ihammer_ammo_shot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
