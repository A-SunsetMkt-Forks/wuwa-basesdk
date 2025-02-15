#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_R2T1YangyangMd10011_PC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KuroAnim_structs.hpp"
#include "KawaiiPhysics_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_R2T1YangyangMd10011_PC.ABP_R2T1YangyangMd10011_PC_C
// 0x1B50 (0x2060 - 0x0510)
class UABP_R2T1YangyangMd10011_PC_C final : public UAnimInstance
{
public:
	uint8                                         Pad_389E[0x8];                                     // 0x0508(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0518(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0550(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0688(0x0020)()
	struct FAnimNode_MorphTargetModifier          AnimGraphNode_MorphTargetModifier;                 // 0x06A8(0x0060)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0708(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0728(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0760(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0898(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x08B8(0x0020)()
	uint8                                         Pad_389F[0x8];                                     // 0x08D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_MountBuffer                  AnimGraphNode_MountBuffer;                         // 0x08E0(0x01D0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_7;                // 0x0AB0(0x0280)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_6;                // 0x0D30(0x0280)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_5;                // 0x0FB0(0x0280)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_4;                // 0x1230(0x0280)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_3;                // 0x14B0(0x0280)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_2;                // 0x1730(0x0280)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_1;                // 0x19B0(0x0280)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup;                  // 0x1C30(0x0280)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1EB0(0x0038)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x1EE8(0x00A8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1F90(0x00C0)()
	bool                                          PhysicsClothSimulateEnable;                        // 0x2050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A0[0x3];                                     // 0x2051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PhysicsClothSimulateScale;                         // 0x2054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void MorphTargetModifier(const struct FPoseLink& InPose_0, struct FPoseLink* Param_MorphTargetModifier);
	void PhyCloth(const struct FPoseLink& InPose, struct FPoseLink* Param_PhyCloth);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void UpdatePhysicsClothSimulateEnable(float DeltaTIme);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_R2T1YangyangMd10011_PC(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_R2T1YangyangMd10011_PC_C">();
	}
	static class UABP_R2T1YangyangMd10011_PC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_R2T1YangyangMd10011_PC_C>();
	}
};
static_assert(alignof(UABP_R2T1YangyangMd10011_PC_C) == 0x000010, "Wrong alignment on UABP_R2T1YangyangMd10011_PC_C");
static_assert(sizeof(UABP_R2T1YangyangMd10011_PC_C) == 0x002060, "Wrong size on UABP_R2T1YangyangMd10011_PC_C");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, UberGraphFrame) == 0x000510, "Member 'UABP_R2T1YangyangMd10011_PC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_Root_2) == 0x000518, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_LinkedInputPose_1) == 0x000550, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000688, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_MorphTargetModifier) == 0x0006A8, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_MorphTargetModifier' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000708, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_Root_1) == 0x000728, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_LinkedInputPose) == 0x000760, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_LocalToComponentSpace) == 0x000898, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_ComponentToLocalSpace) == 0x0008B8, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_MountBuffer) == 0x0008E0, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_MountBuffer' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_7) == 0x000AB0, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_7' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_6) == 0x000D30, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_6' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_5) == 0x000FB0, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_5' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_4) == 0x001230, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_4' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_3) == 0x0014B0, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_3' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_2) == 0x001730, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_2' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_1) == 0x0019B0, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup) == 0x001C30, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_Root) == 0x001EB0, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_LinkedAnimGraph) == 0x001EE8, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, AnimGraphNode_LinkedAnimLayer) == 0x001F90, "Member 'UABP_R2T1YangyangMd10011_PC_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, PhysicsClothSimulateEnable) == 0x002050, "Member 'UABP_R2T1YangyangMd10011_PC_C::PhysicsClothSimulateEnable' has a wrong offset!");
static_assert(offsetof(UABP_R2T1YangyangMd10011_PC_C, PhysicsClothSimulateScale) == 0x002054, "Member 'UABP_R2T1YangyangMd10011_PC_C::PhysicsClothSimulateScale' has a wrong offset!");

}

