#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass npc_base_bp.npc_base_bp_C
// 0x0163 (0x0B73 - 0x0A10)
class Anpc_base_bp_C : public AArchonCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)
	bool                                               SingleAnimation_;                                         // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	TAssetPtr<class UAnimSequence>                     Anim;                                                     // 0x0A20(0x0020) (Edit, BlueprintVisible)
	float                                              SingleAnimationStartPosition;                             // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A44(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            AnimBp;                                                   // 0x0A48(0x0020) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class USkeletalMesh>>             MeshesToSkin;                                             // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Fskeletal_mesh_attachment_structs           MeshesToAttach;                                           // 0x0A78(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<Enpc_facemorph_enum>                   FaceMorph;                                                // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0AA9(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasCollision;                                             // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0AC1(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicSkinMaterials;                                     // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Fmorphtargetname_value_struct>       HeadMorphArray;                                           // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USkeletalMeshComponent*                      HeadComponentToMorph;                                     // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              L_SkeletalMeshComponents;                                 // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ChangeSkinColor;                                          // 0x0B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B01(0x0003) MISSED OFFSET
	struct FLinearColor                                SkinColor;                                                // 0x0B04(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EyeColorInner;                                            // 0x0B14(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EyeColorOuter;                                            // 0x0B24(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HairColor;                                                // 0x0B34(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BrowColor;                                                // 0x0B44(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B54(0x0004) MISSED OFFSET
	struct FName                                       MeshComponentTag;                                         // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    MyCustomEvent;                                            // 0x0B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ChangeDyes;                                               // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Earmour_dyes_enum>                     PrimaryDye;                                               // 0x0B71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Earmour_dyes_enum>                     SecondaryDye;                                             // 0x0B72(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npc_base_bp.npc_base_bp_C");
		return ptr;
	}


	void HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success);
	void AddStaticMesh(class UStaticMesh* SkeletalMesh, class UStaticMeshComponent** StaticMeshComponent);
	void AddSkeletalMesh(class USkeletalMesh* SkeletalMesh, class USkeletalMeshComponent** SkeletalMeshComponent);
	void UserConstructionScript();
	void OnLoaded_E53812054BC43D8DF95D93B1D0263C70(class UObject* Loaded);
	void OnLoaded_A493FBF244836078D34B3D829F5981DD(class UClass* Loaded);
	void OnLoaded_430B77724A13338D3D1E74813BAC644A(class UObject* Loaded);
	void OnLoaded_23C22D854B058F63A0887AA932DEC533(class UObject* Loaded);
	void OnLoaded_9A193F17466D4863D17E0F861E444784(class UObject* Loaded);
	void OnLoaded_41310CB5484D2358D0B165B50107BEC6(class UObject* Loaded);
	void ReceiveBeginPlay();
	void SetupNPCMesh(class USkeletalMeshComponent* MeshParent);
	void FinishSetupNPCMesh();
	void ExecuteUbergraph_npc_base_bp(int EntryPoint);
	void MyCustomEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
