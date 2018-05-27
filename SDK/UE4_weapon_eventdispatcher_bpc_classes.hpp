#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_eventdispatcher_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass weapon_eventdispatcher_bpc.weapon_eventdispatcher_bpc_C
// 0x0020 (0x01F0 - 0x01D0)
class Uweapon_eventdispatcher_bpc_C : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnComboNextMove;                                          // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnComboEnd;                                               // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weapon_eventdispatcher_bpc.weapon_eventdispatcher_bpc_C");
		return ptr;
	}


	void OnComboEnd__DelegateSignature();
	void OnComboNextMove__DelegateSignature(const struct FComboInputBuffer& ComboInputBuffer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
