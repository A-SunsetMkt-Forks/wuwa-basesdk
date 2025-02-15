﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EZhezhiMaobixiaoMd10011

#include "Basic.hpp"

#include "KuroAnim_structs.hpp"
#include "KuroAnim_classes.hpp"
#include "Engine_structs.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_EZhezhiMaobixiaoMd10011.ABP_EZhezhiMaobixiaoMd10011_C
// 0x0FE0 (0x16E0 - 0x0700)
class UABP_EZhezhiMaobixiaoMd10011_C final : public UKuroAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0700(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0708(0x0038)()
	struct FAnimNode_ExtraFollowAnims             AnimGraphNode_ExtraFollowAnims;                    // 0x0740(0x0A50)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1190(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x11B0(0x0020)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x11D0(0x0280)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x1450(0x0280)()
	class ATsBaseCharacter_C*                     当前角色;                                          // 0x16D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_EZhezhiMaobixiaoMd10011(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void OnComponentStart();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_EZhezhiMaobixiaoMd10011_C">();
	}
	static class UABP_EZhezhiMaobixiaoMd10011_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_EZhezhiMaobixiaoMd10011_C>();
	}
};
static_assert(alignof(UABP_EZhezhiMaobixiaoMd10011_C) == 0x000010, "Wrong alignment on UABP_EZhezhiMaobixiaoMd10011_C");
static_assert(sizeof(UABP_EZhezhiMaobixiaoMd10011_C) == 0x0016E0, "Wrong size on UABP_EZhezhiMaobixiaoMd10011_C");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, UberGraphFrame) == 0x000700, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, AnimGraphNode_Root) == 0x000708, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, AnimGraphNode_ExtraFollowAnims) == 0x000740, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::AnimGraphNode_ExtraFollowAnims' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, AnimGraphNode_LocalToComponentSpace) == 0x001190, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, AnimGraphNode_ComponentToLocalSpace) == 0x0011B0, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, AnimGraphNode_KawaiiPhysics_1) == 0x0011D0, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, AnimGraphNode_KawaiiPhysics) == 0x001450, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobixiaoMd10011_C, 当前角色) == 0x0016D0, "Member 'UABP_EZhezhiMaobixiaoMd10011_C::当前角色' has a wrong offset!");

}

