#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_loading_dispatcher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass global_loading_dispatcher.global_loading_dispatcher_C
// 0x0019 (0x00C1 - 0x00A8)
class Uglobal_loading_dispatcher_C : public UArchonLoadingDispatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnLoadingScreenClosed;                                    // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bIsLoadingScreenClosed;                                   // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass global_loading_dispatcher.global_loading_dispatcher_C");
		return ptr;
	}


	void LoadingScreenClosed();
	void IsLoadingScreenClosed(bool* Return_Value);
	void OnReset();
	void ExecuteUbergraph_global_loading_dispatcher(int EntryPoint);
	void OnLoadingScreenClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
