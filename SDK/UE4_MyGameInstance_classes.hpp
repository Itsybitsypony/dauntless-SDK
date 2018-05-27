#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MyGameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MyGameInstance.MyGameInstance_C
// 0x0068 (0x0408 - 0x03A0)
class UMyGameInstance_C : public UArchonGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EGameFlowState>                        CurrentState;                                             // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	int                                                CurrentColorCount;                                        // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasViewedEarlyAccessMessage;                              // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ENetworkFailure>, struct FText>   NetworkFailureMessages;                                   // 0x03B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MyGameInstance.MyGameInstance_C");
		return ptr;
	}


	bool LookupCellCatalogRow(struct FName* RowName, struct FCellCatalogTableData* OutRow);
	void StartPlayingState();
	void OnFailure_87273E2B480CEE79C9C9859A60AD6AD7();
	void OnSuccess_87273E2B480CEE79C9C9859A60AD6AD7();
	void HandleNetworkError(TEnumAsByte<ENetworkFailure>* FailureType, bool* bIsServer);
	void HandleTravelError(TEnumAsByte<ETravelFailure>* FailureType);
	void GotoMainMenu();
	void DestroyActiveSession();
	void ShowLoadingScreen();
	void Show_MainMenu();
	void ExecuteUbergraph_MyGameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
