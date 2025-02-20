﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Qte_Chun_New

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SCameraModifier_Settings_structs.hpp"


namespace SDK::Params
{

// Function GA_Qte_Chun_New.GA_Qte_Chun_New_C.ExecuteUbergraph_GA_Qte_Chun_New
// 0x0588 (0x0588 - 0x0000)
struct GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B8)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     ___struct_Variable;                                // 0x00E8(0x00B8)()
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x01A0(0x0020)()
	float                                         CallFunc__________SpeedRatio;                      // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01C8(0x0028)(ZeroConstructor)
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x3];                                      // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc___________3;                              // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0268(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_____GA______________;                     // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x02B0(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________4;                              // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1; // 0x02E8(0x0020)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0308(0x0028)(ZeroConstructor)
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetSkillTarget_ReturnValue;               // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0348(0x0028)(ZeroConstructor)
	class AActor*                                 CallFunc_GetSkillTarget_ReturnValue_1;             // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0378(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X;                      // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y;                      // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z;                      // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x03B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x03C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVectorDouble_X_1;                    // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y_1;                    // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z_1;                    // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Subtract_FloatFloat_ReturnValue;        // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_DoubleToFloat_ReturnValue;           // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsCameraTargetInScreen_ReturnValue;    // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41A[0x6];                                      // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0420(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSCameraModifier_Settings              K2Node_MakeStruct_SCameraModifier_Settings;        // 0x0430(0x0118)(HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________8;                              // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________9;                              // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________10;                             // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1; // 0x0570(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1; // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New) == 0x000008, "Wrong alignment on GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New");
static_assert(sizeof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New) == 0x000588, "Wrong size on GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, EntryPoint) == 0x000000, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, ___struct_Variable) == 0x0000E8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x0001A0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc__________SpeedRatio) == 0x0001C0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001C8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc__________) == 0x0001F0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc______________) == 0x0001F8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________1) == 0x000200, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________2) == 0x000208, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_______________1) == 0x000210, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000218, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_DynamicCast_AsTs_Base_Character) == 0x000220, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_DynamicCast_bSuccess) == 0x000228, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00022C, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________3) == 0x000230, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000238, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_GetDisplayName_ReturnValue) == 0x000240, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_IsValid_ReturnValue) == 0x000250, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_GetObjectClass_ReturnValue) == 0x000258, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000260, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_CreateDelegate_OutputDelegate_2) == 0x000268, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_____GA______________) == 0x000290, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_Conv_NameToString_ReturnValue) == 0x0002A0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002B0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________4) == 0x0002D8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_IsValid_ReturnValue_1) == 0x0002E0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1) == 0x0002E8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_CreateDelegate_OutputDelegate_4) == 0x000308, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________5) == 0x000330, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_GetSkillTarget_ReturnValue) == 0x000338, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_GetSkillTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_IsValid_ReturnValue_2) == 0x000340, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_CreateDelegate_OutputDelegate_5) == 0x000348, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_GetSkillTarget_ReturnValue_1) == 0x000370, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_GetSkillTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000378, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________6) == 0x000390, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_BreakVectorDouble_X) == 0x000398, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_BreakVectorDouble_X' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_BreakVectorDouble_Y) == 0x0003A0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_BreakVectorDouble_Y' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_BreakVectorDouble_Z) == 0x0003A8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_BreakVectorDouble_Z' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x0003B0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0003C8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0003D8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_BreakVectorDouble_X_1) == 0x0003E0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_BreakVectorDouble_X_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_BreakVectorDouble_Y_1) == 0x0003E8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_BreakVectorDouble_Y_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_BreakVectorDouble_Z_1) == 0x0003F0, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_BreakVectorDouble_Z_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_D_Subtract_FloatFloat_ReturnValue) == 0x0003F8, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_D_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_Conv_DoubleToFloat_ReturnValue) == 0x000400, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_Conv_DoubleToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_Abs_ReturnValue) == 0x000404, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_GetIsCameraTargetInScreen_ReturnValue) == 0x000408, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_GetIsCameraTargetInScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________7) == 0x000410, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_Less_FloatFloat_ReturnValue) == 0x000418, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_BooleanOR_ReturnValue) == 0x000419, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_Conv_IntToString_ReturnValue) == 0x000420, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, K2Node_MakeStruct_SCameraModifier_Settings) == 0x000430, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::K2Node_MakeStruct_SCameraModifier_Settings' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________8) == 0x000548, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________8' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________9) == 0x000550, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________9' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000558, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_IsValid_ReturnValue_3) == 0x000560, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc___________10) == 0x000568, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc___________10' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1) == 0x000570, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x000580, "Member 'GA_Qte_Chun_New_C_ExecuteUbergraph_GA_Qte_Chun_New::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");

// Function GA_Qte_Chun_New.GA_Qte_Chun_New_C.EventReceived_18B59F5945020DB23C42FD88A0362154
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Qte_Chun_New_C_EventReceived_18B59F5945020DB23C42FD88A0362154 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Qte_Chun_New_C_EventReceived_18B59F5945020DB23C42FD88A0362154) == 0x000008, "Wrong alignment on GA_Qte_Chun_New_C_EventReceived_18B59F5945020DB23C42FD88A0362154");
static_assert(sizeof(GA_Qte_Chun_New_C_EventReceived_18B59F5945020DB23C42FD88A0362154) == 0x0000B8, "Wrong size on GA_Qte_Chun_New_C_EventReceived_18B59F5945020DB23C42FD88A0362154");
static_assert(offsetof(GA_Qte_Chun_New_C_EventReceived_18B59F5945020DB23C42FD88A0362154, Payload) == 0x000000, "Member 'GA_Qte_Chun_New_C_EventReceived_18B59F5945020DB23C42FD88A0362154::Payload' has a wrong offset!");

}

