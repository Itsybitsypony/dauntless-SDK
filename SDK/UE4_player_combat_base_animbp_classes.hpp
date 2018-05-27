#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_combat_base_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass player_combat_base_animbp.player_combat_base_animbp_C
// 0x8D94 (0x9234 - 0x04A0)
class Uplayer_combat_base_animbp_C : public UArchonAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72FD267C400ADE41C9119395F8A1F9D5;// 0x04A8(0x00D0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_120F96E04F2784A4B7DDB4960FD47BA7;// 0x0578(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_67B3E5424B0EDCED4F38B3AC99321BB6;      // 0x05D8(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AC1E81B944069C23761A8AB4AED0FBAF;// 0x0640(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9CB4C2D242C3DC289F6639891E60231C;// 0x06E8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B96886374C079B3081A6C7B5CBB6F4A0;// 0x07A0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0DF794A84F1DB5C118A58D82218B163A;// 0x0858(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F9F6592B4BD0E7E23406EC9594F7D97A;// 0x0910(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8EFA30AD494DCC560BA9EEB718357722;      // 0x09E0(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_92FFE8C742DA3AC15D78D3AD4773EB76;      // 0x0A48(0x0068)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_F9D7AD2449B5A0CF509A309CBD26DC6B;// 0x0AB0(0x0078)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_37E1A2EB41CDCACF43CDB98D625599DE;// 0x0B28(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BDC197E646A18C5445AEEC8F0F2ABD80;// 0x0B70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E4C07474CEAE158FC97CF9F8D56A299;// 0x0BF0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1063A3B1405D615BEC6C90969CCDDD3A;// 0x0C70(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_78E72BD940973008348B34BD503E8299;// 0x0D40(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7027D8B4068EEAA75C02DA34E66D6FB;// 0x0DB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0211577E472C62F72723839D67894421;// 0x0E20(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2EEEA8C54035C999BA79648641424E79;// 0x0E68(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_63BB264A4338405CCF2C2996D6A639C2;// 0x0EA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C9BD60424C92D69F2D9FCDA63F2A6BB9;// 0x0EE8(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7371D15B4029CD8DB075B8A2F5BCD694;// 0x0FC0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_79C0FEAD47CFA96D5F4CD0A1D941E3D3;// 0x1090(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B5F3AA6642E3F36C42B5EF96E99452AD;// 0x1138(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C86BAF814A89A1771881ADA4B964F38D;// 0x1180(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_24AC6B6448D28C65248D1884F808FBDE;// 0x1228(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_669940F94F1EAEFFF66B19A429B7644A;// 0x1308(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F70C897D42888D5BC97E8FBA2FD738E9;// 0x13D8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BB91FCDE46DCC0CFB69ECB85C1700CE4;// 0x1480(0x0050)
	struct FAnimNode_Replay                            AnimGraphNode_Replay_63A89FAB4BD456EC01AF948CDC5A00E1;    // 0x14D0(0x00F0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_35DA1245457EC1A28B0A60B431223609;// 0x15C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_188ED107458FE4B59C7063ABDEFCFD60;// 0x16A0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE6171094CB5AEF8E72C7699F7C957C8;// 0x16F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B428DAFE406DBF424B4E4499F5834257;// 0x1760(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03433A8B47315CBB015E408376DD07E4;// 0x17D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C32E6E96418A4D9A23D6C0B81C69B035;// 0x1840(0x0070)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2D0553954A1915190CB328A3EDF05C01; // 0x18B0(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DACE53B747059D93DC7421ABCC1849D2;// 0x1990(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_D79315494F361FBFF05FB2A80FB0F4B3; // 0x19D8(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38DF907744657E762387EAA38F303522;// 0x1AB8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E00AAF6F49C082C130AFD1BF2BCD1606;// 0x1B70(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9DF4C4A740BAE235B2B59682932A77D5;// 0x1C28(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6BDD788F419FE5B9267BD69D9594C4A0;// 0x1CE0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F4F4DA6453507606C65AD884B4292D0;// 0x1D88(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4889AD6243B93588034B0282D51B6C3C;// 0x1DD8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3CCB2DB843A1264373864CAC5270D5E4;// 0x1E90(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4BA30DE2420C5F21F93BD89F6A83B432;// 0x1F48(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AEE9D0E646BD1E30C807798D80F438C0;// 0x2000(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CBF7DDAE442C7E44888E5F815C8E2636;// 0x20B8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_471F2D4C41924473177DBDBB173D9E49;// 0x2170(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_07FBB6134C47C3961AE54D9A60BC4E18;// 0x2228(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E910A3534D4CE47E8B4EA6BEEED18BD7;// 0x22E0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F7662C78460BF196DF9F17BA34B6EBC1;// 0x2328(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7186A291402D894AB4A46A89DE25908A;// 0x2370(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1F35A145416490DE7BA65EAF0505326D;      // 0x2418(0x0068)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_86962D6E49960E1CBC4239AAFBA3DC72;// 0x2480(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_095DAF254EA0F87C87BEE983036EFD63;// 0x24F8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4375AC8F457AADDE1CA1F0856F8D39F2;// 0x2548(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B851C9664AA34D914735D68565E7EA3B;// 0x2618(0x00A8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2D5EC4F542DEEC97DF53F5BA2C754C3E;// 0x26C0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3C8E3789418905581E26FF99325A5274;// 0x2708(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_95E3A7024EC28201C1506CBCE5F2DE08;// 0x27C0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E41CD050448C5FC9E91DBA80DA0C12F2;// 0x2878(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DB97812249C44A82930902A5BD1126F5;// 0x28C0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24DFAEB040F7E58A591E659EBB3F6914;// 0x2978(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2836060F4A74026D6F34BAADD42A41BA;// 0x2A30(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_09DA824B4ACDE080EF1EE18C3FE6A9F7;// 0x2AE8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_114512154636E958FD612EAB4210EB95;// 0x2BA0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_08BD7AB04970B8E044834A868CAD0BBB;// 0x2C58(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1ED7BF014145406C95B3CD832B70D077;// 0x2D10(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2EDE8E394E490F8CC3E89DB5006D7CD6;// 0x2DC8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_57BE843A46A41EFE1E1B7FB8104FE701;// 0x2E80(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_84C4882C41250BBB09CDA782C3782CD2;// 0x2F38(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6929418847716EB4D22BB49C0B9DE017;// 0x2FF0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6D2C6F594D5B779EC326E59BC1968211;// 0x3098(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E2398C0A489461EBDABA4392B27456EC;// 0x30E8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_172E6707407E8769DB361C818DF7752E;// 0x3138(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F54AF1B4482D0C86EDEA0D89D4339154;// 0x3188(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_90CE562D4CCB5F0F580973A4131F6021;// 0x3258(0x00A8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_234CE179416EBDBC1DEE5AA887912371;// 0x3300(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_937F170F4608C3B1BE66B68BC7C264BC;// 0x3458(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1EAB62484C53D0AC6252DFBB774ECA18;// 0x34A8(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D5FAB2CC42300F60D14771AF39403561;// 0x3518(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_543B44F64FE46CE4A44063AB87848D5A;// 0x3568(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A1C993354DCCAB4DAEE17D97D18C4012;// 0x3620(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_036CF94C4E5FD2E1FD656A8011B8F1D2;// 0x36D8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EB881E7144CABE17A55053B1535F3D0B;// 0x3720(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3768(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4936566481C91491BF694B3052DF261;// 0x3770(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47BD2DBC4CDC223687440EADE8E622B6;// 0x37F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA1ADC83457FCC85497E10838BD4969C;// 0x3870(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD2;// 0x38F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_283C8FC947246F0FF8F898A759DE2A6C;// 0x3970(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B2;// 0x39F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_222CC07F4B09E12D1CE3BBB3FD27FD71;// 0x3A70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9399F7B84DCE9C029354FBB705C537C4;// 0x3AF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D417793439E0D949AD4CEB1CD015F29;// 0x3B70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16AD03434D519DA2646DEEB9EDD43D76;// 0x3BF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A62D50F43FD0527F62F0A91BE3AB8DC;// 0x3C70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B21969BD44E43D7700CD8FAD85A2E5952;// 0x3CE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9DBB2E2240AD0F0FC7042E9A1CB90917;// 0x3D28(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2251DFA84528AF153FECB9B8946902FC2;// 0x3D98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D1D0348342D62C4253AF3090E7D87EF1;// 0x3DE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_929F7E9B4EA4B0BC8BA12E939578E5D82;// 0x3E50(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BB715C3741DE1B07083A9E82B25071C2;// 0x3E98(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D0AB5B864E3C9A0A82618B9E90B6386C;// 0x3FC0(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x4008(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4D2D28046A09AC7B774C3AA99D170FA;// 0x4010(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66FAEE6A40E4B57469842A9392EB458A;// 0x4090(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF00ACB840B644974E787CB0BD8F046B;// 0x4110(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52CDB28B41512CA38DC405ABCDB757B9;// 0x4190(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F5FD56AE4A8316B95BE6AF9084E1DFA2;// 0x4210(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C3A80774F29E01CFEF9ECBCAD2AA866;// 0x4290(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_580F3708481D2A9F816CAC93B65E8A71;// 0x4310(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF58CBB94962D3EF30AC14A619616122;// 0x4390(0x0080)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_157C92C741E0DC0352087DB0B2EBD440;// 0x4410(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9621575A48D0830655585BACE9C74F8F;// 0x4448(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C7E52DC54B15D5444EA028B4EB68C05D;// 0x4490(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19A7B8A64C75B75515090C9AB785B28B;// 0x4500(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_77673E7D46524B6A240709ABE2A60403;// 0x4548(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D121981E441C3C878F139CA398839C48;// 0x45B8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_80C34F344A992E85C78C05B4474D27D4;// 0x4600(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EA5739B3467F344A31F350B6D8DAE15A;// 0x4758(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_642C1D934705A8AAB72958A2201EF5F3;// 0x4880(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74D51EFE419EBC990DA4DB8521321A7E;// 0x48C8(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A6B675184D11E6FE475E859ADB675F99;// 0x4938(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FFC7856C40417465D94C29AF1EC25108;// 0x49B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B1310A704F6D621DD5D71DAA0F03D81B;// 0x4A20(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BC11291F4F5E3DAA1B6C9E8B112AC836;// 0x4A68(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75A7B8804E8C1495159607B3A959E232;// 0x4B40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_329B0A204EE67F757602649A43B76C02;// 0x4B88(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8399FCD543A6C240C53E9889A1A129B7;// 0x4C60(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x4CA8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1AD12DBF40D682550FE89C8F81E4F9F8;// 0x4CB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD;// 0x4D30(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A08248ED4B2DFB986D07A5AF3825AED5;// 0x4DB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B;// 0x4E30(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_123AE2864505A02EC8C0D695B85EAE8C;// 0x4EB0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7ADD9AA4835399EC759319DA7FEE62B;// 0x4F30(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5593C2DB4F3F1862D5DCF3B56F630FB6;// 0x4FB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B21969BD44E43D7700CD8FAD85A2E595;// 0x5020(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A6EBD58413D0D7E159BB9B5B71619B8;// 0x5068(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2251DFA84528AF153FECB9B8946902FC;// 0x50D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21104CDC463B633D6A385FA24592E125;// 0x5120(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_929F7E9B4EA4B0BC8BA12E939578E5D8;// 0x5190(0x0048)
	unsigned char                                      UnknownData03[0x8];                                       // 0x51D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBE9A72740D5360FCE6A72AEA3B3EC8C;// 0x51E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39C80B7148F5AB78B45B859D440E42D1;// 0x5260(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_664C38D44092E74D328789814E6CA4D1;// 0x52E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F8CF771543F2642B978FC1A452B6E8B2;// 0x5360(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C37116044FA30B204698A99780BC2E9;// 0x53E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_112722904DCEC88E3FCC048E64B9E81D;// 0x5460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B63054E24C8A4E4AB5A09F9D8CA34334;// 0x54E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC7A7BBB48F17BB4CFF6188405870A60;// 0x5560(0x0080)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_415BA6324E56D90F9272D49174FC8392;// 0x55E0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_85BC5D22447A389AED62799CA354EFAC;// 0x5618(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_35B8CE8249301BD7C8516C813C7B5349;// 0x5660(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_20D088C443CF35265B416898FF868E25;// 0x56D0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_75E6C6DE47559F8C6641478A4B46A29A;// 0x5718(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_29AA112843CAF22E6F0C778BB9A3DEAA;// 0x5788(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_E537F804433E3633878E5DAC96EE5048;// 0x57D0(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D1E6E229416B4F20C868DEA00D62A4DF;// 0x5928(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF61D4C24B98161FA2EF6BBF90B97256;// 0x5A50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33FE3CE749D801BC7FFB27A1A54DBB58;// 0x5A98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A4FC398A44396A45D19BF194A6C8F5D5;// 0x5B08(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_044DFEE642AB0612F8B02E98B22F1BFE;// 0x5B50(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2613130B4848BD1369136F9B56BC09FD;// 0x5C28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B0A06B574B375B9F0404F5BC637CCD7E;// 0x5C70(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FC7AF32C411D984DD63ECB998793E796;// 0x5D48(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3EF0387D479F2AB867CD10A59D59E051;// 0x5D90(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_Root_71641BC849214E0DD771D1A30292B702;      // 0x5E68(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_259DDCC441AA12D9B0E92B9F9FF9E574;// 0x5EB0(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_F6CE5E6549B3861E8D521386CDE8084A;// 0x5F90(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DF293A0846C3D72E2E4EA0BD966FD8FE;// 0x5FC8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1345945F40D06AAE35ED73A5A1C00A43;// 0x6018(0x0050)
	unsigned char                                      UnknownData04[0x8];                                       // 0x6068(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D54480F46755DAB9ECE559F6DA73FDF;// 0x6070(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C867C2F44077259AC27F9FB0FD9A1692;// 0x60F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21ACA13249C1E864A357D48C43E8DA3C;// 0x6170(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57A3DEEE42F996FEF967678786852B71;// 0x61F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0CC1434E47F7E97A7003CD9DAA1A3AB9;// 0x6270(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B9F957145D13D1C8E9ACBBDFE9EAC81;// 0x62F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BADE1AD84D5C69AFB867EB94A6BB5CFA;// 0x6370(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CE754824958A91D47B079B8EB102C43;// 0x63F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9B494114E5C4DDA3C155A9B5844C1D8;// 0x6470(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C964819E47310AC3A6FC5EB0E5C44863;// 0x64F0(0x0080)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_637EBAAD4175DE96D25FDFAAD23F414D;// 0x6570(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52556EF94A07EBB8D499C688499546096;// 0x65A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5ACB63354C6B949B6FBCF182FE7BC060;// 0x65F0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52556EF94A07EBB8D499C688499546095;// 0x6628(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9334AA3546830B39815DC4A00A4C2614;// 0x6670(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52556EF94A07EBB8D499C688499546094;// 0x66A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_078B79B946FAA1E63D445DA03E18B3CD;// 0x66F0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52556EF94A07EBB8D499C688499546093;// 0x6728(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_341A240F438F31D50AA4789546B243EF;// 0x6770(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52556EF94A07EBB8D499C688499546092;// 0x67A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B4E371D34BAED574AA5AAFB651002F1B;// 0x67F0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52556EF94A07EBB8D499C68849954609;// 0x6828(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DDBDA2574B271FC6712C41AC59BAF3F1;// 0x6870(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_227EBB9A4E34FCD69DEACD965DAC5F7C;// 0x6948(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ADFC58AE4C9098FC11C244B25DBE8998;      // 0x6A18(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_153D4E014FB84A98B1BEBB87B5F72137;// 0x6A80(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5D723AA9427E2E6379AADC94BD4BDE8B;// 0x6B28(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3638ED2B465A230CBD897EBEA54EBE28;// 0x6C08(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_07A78E1946D07DC06181D69D9302FCB0;// 0x6C58(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9A27920146981DE14FE2C8A98DDC0187;// 0x6CA8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_165759CF4D86BA940D3FBE85A7CD6A88;// 0x6CF8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D11A1F0246340A5246C6BD86CBB1EF14;// 0x6D48(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D69A30D04967DF99243D70AB1CBD5228;// 0x6D98(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DFA7EC494EEB16887960C4AF93A54276;// 0x6DE8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4844486440F11867CA0DEE8B0E4FC300;      // 0x6E38(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E324263649C340E754351180C0FFCD3B;// 0x6EA0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73CF50EA48606EBC8D36F38CD99473B0;// 0x6F80(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_611D2F544B52F410594B419169DE43BF;// 0x6FD0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BE73F09142A9C40BA768A69FBACA392E;// 0x7020(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FD39BA1B4500DB48EC3C65822C64754A;// 0x7070(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8747D98A433B4CAC99B4239315B86B44;// 0x7118(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FF52DBD943F4CA90B398128060AAA052;// 0x7168(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EE45E95D49C18E94DEE1C5B430D767C4;// 0x71B8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93923CE44EA96E7ECD6B12806BA64847;// 0x7260(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E0F180B941E1EE0AD9B7659839B60ADA;// 0x72B0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A32A5717451ADC82CCBFEE8E621C74FC;// 0x7300(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45D2CDF846799E046135369BA604099B;// 0x73A8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9EFA7CF1477B876F4F0941ACC67B58DA;// 0x73F8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DFB2FA10451B4E5A64DBBB9A7ABA2372;// 0x7448(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9C9E10CE40059CE2E7637EAB826A4A94;// 0x74F0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DBE6290D4D74F42C8CD90CB285883E90;// 0x7540(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_116B2DB64053B67C898D65B1F847E3E5;// 0x7590(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E766DE74433AE62E0CF5FEA2EF85CC52;// 0x7648(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5BA844114A2063CCE809DF927D99A434;// 0x7690(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D55AA8034107D6D49AD659B8C6EB330D;// 0x76D8(0x0158)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_07D2BE3A4F2795241054299D14FD0485;// 0x7830(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F466135D4CB21827549A7698B7FCAFA6;// 0x78E8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1511E98649E0E514525CCDA167D0F22F;// 0x7990(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8EE5753B415AFDCE4DF86CAF366ACBBD;// 0x79E0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FF3E293C4360F5BD0A1E1E988E1D773B;// 0x7A88(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9937640B4CA0DEB15BB2B78A76787591;// 0x7AD8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BBCD4B7F495DF2DBA86A698D58757914;// 0x7BB8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A308759F48A4BE844256C895A71EB926;// 0x7C88(0x0050)
	unsigned char                                      UnknownData05[0x8];                                       // 0x7CD8(0x0008) MISSED OFFSET
	struct FAnimNode_IKinemaFootPlacement              AnimGraphNode_IKinemaFootPlacement_2FDE204B40C07F41C8382A951BB571DF;// 0x7CE0(0x0340)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4463EB30461048620C4512BE60A7E45D;    // 0x8020(0x01A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_502526EC484AB88672E044905606F26B;// 0x81C0(0x0048)
	unsigned char                                      UnknownData06[0x8];                                       // 0x8208(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4DDA8FA34248E297DF48F59BAD7996B0;    // 0x8210(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_6C7B3E8B4D5CFECC0CB0089536DDD371;    // 0x83B0(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A5AF24BF456D73C6309116B1C13FD517;    // 0x8550(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_71BD406E4A5B7739D786BC97A4376500;    // 0x86F0(0x01A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85871F1A4969DD8B4A0BB8BF3FCD6ED2;// 0x8890(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C565BDEF4D0E4C38D17E7FABC9E16994;// 0x8960(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3B5924FB4563504186D0F7A9A8E4A20E;// 0x89B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65EAB7564C48E2B330A25993892C1709;// 0x8A00(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_361BCCDF4D63F8620ABFFDA8B317784B;// 0x8A50(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_CBB1DCC0486F4C622429A08CD2E069AD;// 0x8AA0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_562B5C9A48F35A19D7827EADB723C6C6;// 0x8B80(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8C11052746DCEB69BF2F0CA6E32E00D1;// 0x8BD0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_857883FD4C702CAC8FDD2887E4B48135;      // 0x8C20(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5B7D83DA4CB9DCCA6008FBA8AEDFFFB7;// 0x8C88(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6CB5ABF540362A41BD4A51A24474E127;// 0x8D40(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7BC1AA124CBA0ADDCE6E74A3FFAD5A95;// 0x8D88(0x0048)
	float                                              Character_Speed;                                          // 0x8DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_In_Air_;                                               // 0x8DD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x8DD5(0x0003) MISSED OFFSET
	class ABP_PlayerCharacter_C*                       Update_Player_Character;                                  // 0x8DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EWeaponType                                        Current_Weapon_Type;                                      // 0x8DE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_slow_charging_;                                        // 0x8DE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugEnableIKinema;                                       // 0x8DE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x8DE3(0x0001) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x8DE4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x8DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x8DF4(0x0004) MISSED OFFSET
	TArray<struct FName>                               AttachPoints;                                             // 0x8DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       WeaponAttachmentCurve;                                    // 0x8E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableIKinema;                                            // 0x8E10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x8E11(0x0003) MISSED OFFSET
	float                                              Character_Speed_Last_Frame;                               // 0x8E14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x8E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Speed;                                               // 0x8E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Run_Speed;                                                // 0x8E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Montage_Playing_;                                      // 0x8E24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_Montage_Playing_;                                     // 0x8E25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x8E26(0x0002) MISSED OFFSET
	class UArchonCharacterMovementComponent*           Movement_Component;                                       // 0x8E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFalling;                                                // 0x8E30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x8E31(0x0003) MISSED OFFSET
	float                                              Charge_Timer;                                             // 0x8E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Charge_Alpha;                                             // 0x8E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Charge_Weight;                                            // 0x8E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Axe_Charge_Level;                                         // 0x8E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x8E44(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ChargeLevelBlendCurve;                                    // 0x8E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeWeightTimer;                                        // 0x8E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x8E54(0x0004) MISSED OFFSET
	struct FDebugFloatHistory                          ChargeWeightDebug;                                        // 0x8E58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               debug_IK_Test;                                            // 0x8E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x8E79(0x0003) MISSED OFFSET
	float                                              Turn_Rate;                                                // 0x8E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               UA_Run_To_Idle_Animation;                                 // 0x8E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Idle_To_Run_Animation_Position;                           // 0x8E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      Desired_Locomotion_State;                                 // 0x8E8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      Current_Locomotion_State;                                 // 0x8E8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x8E8E(0x0002) MISSED OFFSET
	struct FName                                       Last_Weapon_Attach_Point;                                 // 0x8E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Show_Attachment_Data;                                     // 0x8E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttacking;                                              // 0x8E99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x8E9A(0x0002) MISSED OFFSET
	float                                              Stride_Scaling;                                           // 0x8E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadScale;                                                // 0x8EA0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x8EAC(0x0004) MISSED OFFSET
	class UAnimSequence*                               Combat_Run_To_Idle_Animation;                             // 0x8EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fselect_sequence_from_angle_str>     UA_Idle_to_Run_Animations;                                // 0x8EB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Idle_To_Loco_Rotation;                                    // 0x8EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x8ECC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x8ECD(0x0003) MISSED OFFSET
	struct FVector                                     StartActorForward;                                        // 0x8ED0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Wants_to_try_pivot;                                       // 0x8EDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x8EDD(0x0003) MISSED OFFSET
	struct FVector                                     StartDesiredDirection;                                    // 0x8EE0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurveRotationValue;                                       // 0x8EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleAdjustment;                                        // 0x8EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCurveRotation;                                         // 0x8EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngleMatchingScale;                                       // 0x8EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateRateMatchingScale;                                  // 0x8EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Weapon_Scale;                                             // 0x8F00(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x8F0C(0x0004) MISSED OFFSET
	class UAbilitySystemComponent*                     Ability_System_Component;                                 // 0x8F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWeaponSheathed;                                         // 0x8F18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpLand;                                                 // 0x8F19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightStagger;                                             // 0x8F1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFemaleIkOn;                                             // 0x8F1B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x8F1C(0x0004) MISSED OFFSET
	TArray<struct Fselect_sequence_from_angle_str>     Combat_Idle_to_Run_Animations;                            // 0x8F20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UsesAttachment;                                           // 0x8F30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x8F31(0x0007) MISSED OFFSET
	class UPoseAsset*                                  Pose;                                                     // 0x8F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LHandLocation;                                            // 0x8F40(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RHandLocation;                                            // 0x8F4C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpineLocation;                                            // 0x8F58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0xC];                                       // 0x8F64(0x000C) MISSED OFFSET
	struct FTransform                                  LHandTransform;                                           // 0x8F70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RHandTransform;                                           // 0x8FA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLocal;                                                  // 0x8FD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFemaleWeaponOffset;                                     // 0x8FD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x8FD2(0x0006) MISSED OFFSET
	struct FName                                       LHandIKCurve;                                             // 0x8FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RHandIKCurve;                                             // 0x8FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LHandIKAlpha;                                             // 0x8FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RHandIKAlpha;                                             // 0x8FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IH_offsetAlpha;                                           // 0x8FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EB_offsetAlpha;                                           // 0x8FF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GA_offsetAlpha;                                           // 0x8FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CB_offsetAlpha;                                           // 0x8FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IsInCombatAlpha;                                          // 0x9000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FemaleAdditive;                                           // 0x9004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceWeaponOnBack;                                        // 0x9008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x9009(0x0003) MISSED OFFSET
	struct FVector                                     WpnRootLocRight;                                          // 0x900C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WpnRootLocLeft;                                           // 0x9018(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              HammerClipOffsetAlpha;                                    // 0x9024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x8];                                       // 0x9028(0x0008) MISSED OFFSET
	struct FTransform                                  hammerClipOffset;                                         // 0x9030(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              _1h_retarget_ratio;                                       // 0x9060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _2h_retarget_ratio;                                       // 0x9064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      OutputTest;                                               // 0x9068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequence*                               IdleToRunAnim;                                            // 0x9078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugLoco;                                               // 0x9080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartTransitionToLoco;                                   // 0x9081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x9082(0x0002) MISSED OFFSET
	float                                              fCurrentDistance;                                         // 0x9084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fStoredInputDirection;                                    // 0x9088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     vPlayerForwardVector;                                     // 0x908C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     vLastFramePlayerForwardVector;                            // 0x9098(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     vStoredPlayerForwardVector;                               // 0x90A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnimGraphEndTransitionToLoco;                            // 0x90B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x90B1(0x0003) MISSED OFFSET
	float                                              fInputDirection;                                          // 0x90B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fLastFrameInputDirection;                                 // 0x90B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKinemaBlendInTime;                                       // 0x90BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IKinemaBlendOutTime;                                      // 0x90C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IkinemaGlobalAlpha;                                       // 0x90C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     vStoredDesiredDirection;                                  // 0x90C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndIdleToLocoAnim;                                       // 0x90D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x90D5(0x0003) MISSED OFFSET
	float                                              fDesiredMeshRotation;                                     // 0x90D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fPreviousDesiredMeshRotation;                             // 0x90DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         CBladePullAttachTarget;                                   // 0x90E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CBladePullTargetLocation;                                 // 0x90E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x90F4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             CBladePullChainLocationsLeft;                             // 0x90F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             CBladePullChainLocationsRight;                            // 0x9108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnablePullAim;                                           // 0x9118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x9119(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         CBladePullAimTarget;                                      // 0x9120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CBladePullAimLocations;                                   // 0x9128(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CinematicActive;                                          // 0x9134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x9135(0x0003) MISSED OFFSET
	float                                              CBladePullAimPitch;                                       // 0x9138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CBladePullAimYaw;                                         // 0x913C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartTransitionToIdle;                                   // 0x9140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x9141(0x0007) MISSED OFFSET
	class UAnimSequence*                               RunToIdleAnim;                                            // 0x9148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fLocoToIdleAnimPosition;                                  // 0x9150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableAimOffset;                                         // 0x9154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x9155(0x0003) MISSED OFFSET
	float                                              AimOffsetPitch;                                           // 0x9158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYaw;                                             // 0x915C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AimOffsetWeaponRootBoneRotation;                          // 0x9160(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlantingBanner;                                           // 0x916C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x916D(0x0003) MISSED OFFSET
	float                                              SheatheWeaponOffsetAlpha;                                 // 0x9170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0xC];                                       // 0x9174(0x000C) MISSED OFFSET
	struct FTransform                                  SheathWeaponOffset;                                       // 0x9180(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugIkinemaLookAt;                                       // 0x91B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x91B1(0x0003) MISSED OFFSET
	float                                              LocoLeanDirection;                                        // 0x91B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocoLeanAlpha;                                            // 0x91B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredMeshRotation;                                       // 0x91BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredStartingAnimPosition;                               // 0x91C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterSpeedAlongDesiredVector;                         // 0x91C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableSubAnimInstance;                                    // 0x91C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x91C9(0x0003) MISSED OFFSET
	float                                              GroundPitchAngle;                                         // 0x91CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundRollAngle;                                          // 0x91D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundAdjustBlendInTime;                                  // 0x91D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundAdjustBlendOutTime;                                 // 0x91D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundAdjustAlpha;                                        // 0x91DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetBlendInTime;                                     // 0x91E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetBlendOutTime;                                    // 0x91E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetAlpha;                                           // 0x91E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDodging_;                                               // 0x91EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableLean;                                              // 0x91ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocoTransitionsEnabled;                                  // 0x91EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData40[0x1];                                       // 0x91EF(0x0001) MISSED OFFSET
	float                                              MS_offsetAlpha;                                           // 0x91F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastPosition;                                             // 0x91F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LDeltaTime;                                               // 0x9200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleSpeed;                                             // 0x9204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LAdditiveShuffleBlendWeight;                              // 0x9208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableUpperbodyMask;                                     // 0x920C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayingEmote;                                          // 0x920D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x2];                                       // 0x920E(0x0002) MISSED OFFSET
	float                                              handIK_alpha;                                             // 0x9210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              female_pelvis_scale_compensation;                         // 0x9214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleToLocoBlendTime;                                      // 0x9218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    pelvis_rot_comp;                                          // 0x921C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WpnRootLocRight_inverse;                                  // 0x9228(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass player_combat_base_animbp.player_combat_base_animbp_C");
		return ptr;
	}


	void CheckTutorialParameters(bool* TutorialGameplay, bool* TutorialCinematic);
	void CalculateCharacterSpeedAlongDesiredVector(float* Speed);
	bool IdleToLocoEnterExitConditions();
	void UpdateLookatPosition();
	void _TestForArmourOffset();
	void Calculate_Loco_to_Idle_Animation_Position(class UAnimSequenceBase* Animation, float Animation_Position_In, float* Animation_Position_Out);
	void SetCBladePullChainPositions(const struct FName& Bone, const struct FVector& PullTargetLocation, TArray<struct FVector>* Locations);
	float GetInputDirection(bool* Success);
	void SetRootRotationOffset(class UAnimSequence* Sequence, float ExplicitTime);
	void Calculate_Idle_to_Loco_Distance(float PreviousDistance, float* Current_Distance);
	void GetDirectionalAnim(float Angle, class UAnimSequence** AnimSequence);
	void DrawDebugLoco(bool Debug);
	void GetControllerCapsuleDelta(float* ControllerCapsuleDelta);
	void UpdateIKToggle(class ABP_PlayerCharacter_C* Player_Character);
	float Interp_to_Zero(float Input, float Speed);
	void Can_Play_Additive_Animation(bool* Result);
	void Debug_Visualize_Float(float Value);
	void Debris(const struct FName& Socket);
	void UpdateWeaponAttachment(class ABP_PlayerCharacter_C* PlayerCharacter);
	void Evaluate_Weapon_Type(class ABP_PlayerCharacter_C* Player_Character);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_1AD12DBF40D682550FE89C8F81E4F9F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_4375AC8F457AADDE1CA1F0856F8D39F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_3C8E3789418905581E26FF99325A5274();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_A08248ED4B2DFB986D07A5AF3825AED5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoWayBlend_86962D6E49960E1CBC4239AAFBA3DC72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_123AE2864505A02EC8C0D695B85EAE8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C7ADD9AA4835399EC759319DA7FEE62B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_07FBB6134C47C3961AE54D9A60BC4E18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_471F2D4C41924473177DBDBB173D9E49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_DBE9A72740D5360FCE6A72AEA3B3EC8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_CBF7DDAE442C7E44888E5F815C8E2636();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_95E3A7024EC28201C1506CBCE5F2DE08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_39C80B7148F5AB78B45B859D440E42D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_664C38D44092E74D328789814E6CA4D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_AEE9D0E646BD1E30C807798D80F438C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_F8CF771543F2642B978FC1A452B6E8B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_5C37116044FA30B204698A99780BC2E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_4BA30DE2420C5F21F93BD89F6A83B432();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ApplyAdditive_A6B675184D11E6FE475E859ADB675F99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_112722904DCEC88E3FCC048E64B9E81D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_09DA824B4ACDE080EF1EE18C3FE6A9F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_C7E52DC54B15D5444EA028B4EB68C05D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_B63054E24C8A4E4AB5A09F9D8CA34334();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_3CCB2DB843A1264373864CAC5270D5E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_FC7A7BBB48F17BB4CFF6188405870A60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_4889AD6243B93588034B0282D51B6C3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_35B8CE8249301BD7C8516C813C7B5349();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_9DF4C4A740BAE235B2B59682932A77D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_E00AAF6F49C082C130AFD1BF2BCD1606();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_75E6C6DE47559F8C6641478A4B46A29A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_38DF907744657E762387EAA38F303522();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_114512154636E958FD612EAB4210EB95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BF58CBB94962D3EF30AC14A619616122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_E537F804433E3633878E5DAC96EE5048();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_D1E6E229416B4F20C868DEA00D62A4DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoBoneIK_D79315494F361FBFF05FB2A80FB0F4B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoBoneIK_2D0553954A1915190CB328A3EDF05C01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_Replay_63A89FAB4BD456EC01AF948CDC5A00E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_669940F94F1EAEFFF66B19A429B7644A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LayeredBoneBlend_259DDCC441AA12D9B0E92B9F9FF9E574();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_4D54480F46755DAB9ECE559F6DA73FDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C867C2F44077259AC27F9FB0FD9A1692();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_7371D15B4029CD8DB075B8A2F5BCD694();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_21ACA13249C1E864A357D48C43E8DA3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_57A3DEEE42F996FEF967678786852B71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_0CC1434E47F7E97A7003CD9DAA1A3AB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_1B9F957145D13D1C8E9ACBBDFE9EAC81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BADE1AD84D5C69AFB867EB94A6BB5CFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_3CE754824958A91D47B079B8EB102C43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_1063A3B1405D615BEC6C90969CCDDD3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_A9B494114E5C4DDA3C155A9B5844C1D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C964819E47310AC3A6FC5EB0E5C44863();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2E4C07474CEAE158FC97CF9F8D56A299();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_227EBB9A4E34FCD69DEACD965DAC5F7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_116B2DB64053B67C898D65B1F847E3E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_D55AA8034107D6D49AD659B8C6EB330D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_07D2BE3A4F2795241054299D14FD0485();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_BBCD4B7F495DF2DBA86A698D58757914();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_IKinemaFootPlacement_2FDE204B40C07F41C8382A951BB571DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_4463EB30461048620C4512BE60A7E45D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_4DDA8FA34248E297DF48F59BAD7996B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_6C7B3E8B4D5CFECC0CB0089536DDD371();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_A5AF24BF456D73C6309116B1C13FD517();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_71BD406E4A5B7739D786BC97A4376500();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_85871F1A4969DD8B4A0BB8BF3FCD6ED2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByEnum_CBB1DCC0486F4C622429A08CD2E069AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_5B7D83DA4CB9DCCA6008FBA8AEDFFFB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BDC197E646A18C5445AEEC8F0F2ABD80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_F9F6592B4BD0E7E23406EC9594F7D97A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_0DF794A84F1DB5C118A58D82218B163A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_B96886374C079B3081A6C7B5CBB6F4A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_9CB4C2D242C3DC289F6639891E60231C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotateRootBone_120F96E04F2784A4B7DDB4960FD47BA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_72FD267C400ADE41C9119395F8A1F9D5();
	void SetIsClient(bool IsClient);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_580F3708481D2A9F816CAC93B65E8A71();
	void SetSecondaryMotion(float SkirtHeavyAlpha, float SkirtLightAlpha, float TabardAdjustAlpha);
	void SetCBladePullAimTarget(class UPrimitiveComponent* AimTarget);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_08BD7AB04970B8E044834A868CAD0BBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_7C3A80774F29E01CFEF9ECBCAD2AA866();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_DB97812249C44A82930902A5BD1126F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_F5FD56AE4A8316B95BE6AF9084E1DFA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_1ED7BF014145406C95B3CD832B70D077();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_52CDB28B41512CA38DC405ABCDB757B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_24DFAEB040F7E58A591E659EBB3F6914();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_EA5739B3467F344A31F350B6D8DAE15A();
	void UpdateCBladePullAttach();
	void SetCBladePullAttachTarget(class UPrimitiveComponent* AttachTarget, const struct FVector& ImpactPoint);
	void SetCBladeEnablePullAim(bool Enable);
	void SetCBladePullAimRotation(const struct FRotator& Rotation);
	void UpdateIdleToLoco();
	void AnimEnd();
	void StartAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_CF00ACB840B644974E787CB0BD8F046B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_2EDE8E394E490F8CC3E89DB5006D7CD6();
	void UpdateLocoToIdle();
	void StartLocoToIdleAnim();
	void EndLocoToIdleAnim();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_66FAEE6A40E4B57469842A9392EB458A();
	void SetWeaponOnBack(bool OnBack);
	void EnableAimOffset(bool Enable);
	void UpdateAimOffsetTarget(const struct FVector& Target);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_80C34F344A992E85C78C05B4474D27D4();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C4D2D28046A09AC7B774C3AA99D170FA();
	void AnimNotify_DecisionStop();
	void AnimNotify_ProcessAttackBuffer();
	void Pause_Montage(float Length_of_Pause);
	void AnimNotify_Debris_Small_IH();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_57BE843A46A41EFE1E1B7FB8104FE701();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_BB715C3741DE1B07083A9E82B25071C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_84C4882C41250BBB09CDA782C3782CD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_F54AF1B4482D0C86EDEA0D89D4339154();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_2836060F4A74026D6F34BAADD42A41BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_16AD03434D519DA2646DEEB9EDD43D76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_234CE179416EBDBC1DEE5AA887912371();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_3D417793439E0D949AD4CEB1CD015F29();
	void AnimNotify_start_jump_j();
	void AnimNotify_jump_land_end();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_9399F7B84DCE9C029354FBB705C537C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_543B44F64FE46CE4A44063AB87848D5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_222CC07F4B09E12D1CE3BBB3FD27FD71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_77673E7D46524B6A240709ABE2A60403();
	void OnResetStateGraph();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_A1C993354DCCAB4DAEE17D97D18C4012();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_283C8FC947246F0FF8F898A759DE2A6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_B4936566481C91491BF694B3052DF261();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_DA1ADC83457FCC85497E10838BD4969C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_47BD2DBC4CDC223687440EADE8E622B6();
	void ExecuteUbergraph_player_combat_base_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
