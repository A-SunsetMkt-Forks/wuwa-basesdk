﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Manipulate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"
#include "BPE_ManipulateState_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_Manipulate.GA_Role_Manipulate_C
// 0x00A8 (0x0600 - 0x0558)
class UGA_Role_Manipulate_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_Manipulate_C;               // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraShakeBase*                       镜头震动;                                          // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 被控物Actor;                                       // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 物体actor;                                         // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             物体材质;                                          // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EBPE_ManipulateState                          控物状态;                                          // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589[0x7];                                      // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraShakeBase*                       当前镜头震动;                                      // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   当前玩家镜头管理器;                                // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EBPE_ManipulateState, struct FGameplayTag> 子镜头;                                            // 0x05A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         _读条时间;                                         // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          正常下一步流程;                                    // 0x05F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5[0x3];                                      // 0x05F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Entity_Id;                                         // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Role_Manipulate(int32 EntryPoint);
	void AfterRequest(bool bContent);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_5D118C384AE61F1C80292E8150E58CB4();
	void OnBlendOut_5D118C384AE61F1C80292E8150E58CB4();
	void OnInterrupted_5D118C384AE61F1C80292E8150E58CB4();
	void OnCancelled_5D118C384AE61F1C80292E8150E58CB4();
	void OnTick_5D118C384AE61F1C80292E8150E58CB4();
	void OnFinish_C3FDF179485000A0038F85B4A18EE0C1();
	void EventReceived_A99B2F604F8C8EFCA354FB99DC615855(const struct FGameplayEventData& Payload);
	void EventReceived_216442174E3088EB354911B5CC57F2B1(const struct FGameplayEventData& Payload);
	void Added_21071CB943CD992BF8EFD6A385FA7D9C(const struct FGameplayTag& Tag);
	void Added_21071CB943CD992BF8EFD6A302D055A4(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E815237D5DE();
	void OnBlendOut_5D118C384AE61F1C80292E815237D5DE();
	void OnInterrupted_5D118C384AE61F1C80292E815237D5DE();
	void OnCancelled_5D118C384AE61F1C80292E815237D5DE();
	void OnTick_5D118C384AE61F1C80292E815237D5DE();
	void OnCompleted_5D118C384AE61F1C80292E81D680877C();
	void OnBlendOut_5D118C384AE61F1C80292E81D680877C();
	void OnInterrupted_5D118C384AE61F1C80292E81D680877C();
	void OnCancelled_5D118C384AE61F1C80292E81D680877C();
	void OnTick_5D118C384AE61F1C80292E81D680877C();
	void OnCompleted_5D118C384AE61F1C80292E815CB87408();
	void OnBlendOut_5D118C384AE61F1C80292E815CB87408();
	void OnInterrupted_5D118C384AE61F1C80292E815CB87408();
	void OnCancelled_5D118C384AE61F1C80292E815CB87408();
	void OnTick_5D118C384AE61F1C80292E815CB87408();
	void 选择释放控物动作方向(int32* 方向);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_Manipulate_C">();
	}
	static class UGA_Role_Manipulate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_Manipulate_C>();
	}
};
static_assert(alignof(UGA_Role_Manipulate_C) == 0x000008, "Wrong alignment on UGA_Role_Manipulate_C");
static_assert(sizeof(UGA_Role_Manipulate_C) == 0x000600, "Wrong size on UGA_Role_Manipulate_C");
static_assert(offsetof(UGA_Role_Manipulate_C, UberGraphFrame_GA_Role_Manipulate_C) == 0x000558, "Member 'UGA_Role_Manipulate_C::UberGraphFrame_GA_Role_Manipulate_C' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 镜头震动) == 0x000560, "Member 'UGA_Role_Manipulate_C::镜头震动' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 被控物Actor) == 0x000568, "Member 'UGA_Role_Manipulate_C::被控物Actor' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 物体actor) == 0x000570, "Member 'UGA_Role_Manipulate_C::物体actor' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 物体材质) == 0x000578, "Member 'UGA_Role_Manipulate_C::物体材质' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 控物状态) == 0x000588, "Member 'UGA_Role_Manipulate_C::控物状态' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 当前镜头震动) == 0x000590, "Member 'UGA_Role_Manipulate_C::当前镜头震动' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 当前玩家镜头管理器) == 0x000598, "Member 'UGA_Role_Manipulate_C::当前玩家镜头管理器' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 子镜头) == 0x0005A0, "Member 'UGA_Role_Manipulate_C::子镜头' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, _读条时间) == 0x0005F0, "Member 'UGA_Role_Manipulate_C::_读条时间' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, 正常下一步流程) == 0x0005F4, "Member 'UGA_Role_Manipulate_C::正常下一步流程' has a wrong offset!");
static_assert(offsetof(UGA_Role_Manipulate_C, Entity_Id) == 0x0005F8, "Member 'UGA_Role_Manipulate_C::Entity_Id' has a wrong offset!");

}

