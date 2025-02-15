﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorBulletPreview

#include "Basic.hpp"

#include "SReBulletDataMain_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "EBulletShape_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActorBulletPreview.BP_ActorBulletPreview_C
// 0x07A0 (0x0A50 - 0x02B0)
class ABP_ActorBulletPreview_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSReBulletDataMain                     配置;                                              // 0x02B8(0x0760)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         总时长;                                            // 0x0A18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         存在时长;                                          // 0x0A1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 发射者;                                            // 0x0A20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         帧间隔;                                            // 0x0A28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                大小;                                              // 0x0A2C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    碰撞体;                                            // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   材质路径;                                          // 0x0A40(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void 开始(class USkeletalMeshComponent* meshComp);
	void 形状初始化(EBulletShape 形状);
	void 初始化(const struct FSReBulletDataMain& 配置_0, class AActor* 发射者_0);
	void OnTick();
	void 中心位置偏移();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActorBulletPreview_C">();
	}
	static class ABP_ActorBulletPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActorBulletPreview_C>();
	}
};
static_assert(alignof(ABP_ActorBulletPreview_C) == 0x000008, "Wrong alignment on ABP_ActorBulletPreview_C");
static_assert(sizeof(ABP_ActorBulletPreview_C) == 0x000A50, "Wrong size on ABP_ActorBulletPreview_C");
static_assert(offsetof(ABP_ActorBulletPreview_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_ActorBulletPreview_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 配置) == 0x0002B8, "Member 'ABP_ActorBulletPreview_C::配置' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 总时长) == 0x000A18, "Member 'ABP_ActorBulletPreview_C::总时长' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 存在时长) == 0x000A1C, "Member 'ABP_ActorBulletPreview_C::存在时长' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 发射者) == 0x000A20, "Member 'ABP_ActorBulletPreview_C::发射者' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 帧间隔) == 0x000A28, "Member 'ABP_ActorBulletPreview_C::帧间隔' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 大小) == 0x000A2C, "Member 'ABP_ActorBulletPreview_C::大小' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 碰撞体) == 0x000A38, "Member 'ABP_ActorBulletPreview_C::碰撞体' has a wrong offset!");
static_assert(offsetof(ABP_ActorBulletPreview_C, 材质路径) == 0x000A40, "Member 'ABP_ActorBulletPreview_C::材质路径' has a wrong offset!");

}

