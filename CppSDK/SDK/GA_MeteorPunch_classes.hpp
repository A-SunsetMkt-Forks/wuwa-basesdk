﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MeteorPunch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MeteorPunch.GA_MeteorPunch_C
// 0x0030 (0x0588 - 0x0558)
class UGA_MeteorPunch_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MeteorPunch_C;                   // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         普通点按成功int_temp;                              // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Bonus成功int_temp;                                 // 0x0564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         点按失败int_temp;                                  // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          玩法开始bool;                                      // 0x056C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          玩法结束bool;                                      // 0x056D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56E[0x2];                                      // 0x056E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         速度档位;                                          // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         完美点按成功int_temp;                              // 0x0574(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Bonus持续生成子弹;                                 // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C[0x4];                                      // 0x057C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         异步事件;                                          // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_MeteorPunch(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_18B59F5945020DB23C42FD88356415B5(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E81D6313B7F();
	void OnBlendOut_5D118C384AE61F1C80292E81D6313B7F();
	void OnInterrupted_5D118C384AE61F1C80292E81D6313B7F();
	void OnCancelled_5D118C384AE61F1C80292E81D6313B7F();
	void OnTick_5D118C384AE61F1C80292E81D6313B7F();
	void OnCompleted_5D118C384AE61F1C80292E81C78D388C();
	void OnBlendOut_5D118C384AE61F1C80292E81C78D388C();
	void OnInterrupted_5D118C384AE61F1C80292E81C78D388C();
	void OnCancelled_5D118C384AE61F1C80292E81C78D388C();
	void OnTick_5D118C384AE61F1C80292E81C78D388C();
	void OnCompleted_5D118C384AE61F1C80292E81D41D7B6B();
	void OnBlendOut_5D118C384AE61F1C80292E81D41D7B6B();
	void OnInterrupted_5D118C384AE61F1C80292E81D41D7B6B();
	void OnCancelled_5D118C384AE61F1C80292E81D41D7B6B();
	void OnTick_5D118C384AE61F1C80292E81D41D7B6B();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MeteorPunch_C">();
	}
	static class UGA_MeteorPunch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MeteorPunch_C>();
	}
};
static_assert(alignof(UGA_MeteorPunch_C) == 0x000008, "Wrong alignment on UGA_MeteorPunch_C");
static_assert(sizeof(UGA_MeteorPunch_C) == 0x000588, "Wrong size on UGA_MeteorPunch_C");
static_assert(offsetof(UGA_MeteorPunch_C, UberGraphFrame_GA_MeteorPunch_C) == 0x000558, "Member 'UGA_MeteorPunch_C::UberGraphFrame_GA_MeteorPunch_C' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, 普通点按成功int_temp) == 0x000560, "Member 'UGA_MeteorPunch_C::普通点按成功int_temp' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, Bonus成功int_temp) == 0x000564, "Member 'UGA_MeteorPunch_C::Bonus成功int_temp' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, 点按失败int_temp) == 0x000568, "Member 'UGA_MeteorPunch_C::点按失败int_temp' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, 玩法开始bool) == 0x00056C, "Member 'UGA_MeteorPunch_C::玩法开始bool' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, 玩法结束bool) == 0x00056D, "Member 'UGA_MeteorPunch_C::玩法结束bool' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, 速度档位) == 0x000570, "Member 'UGA_MeteorPunch_C::速度档位' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, 完美点按成功int_temp) == 0x000574, "Member 'UGA_MeteorPunch_C::完美点按成功int_temp' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, Bonus持续生成子弹) == 0x000578, "Member 'UGA_MeteorPunch_C::Bonus持续生成子弹' has a wrong offset!");
static_assert(offsetof(UGA_MeteorPunch_C, 异步事件) == 0x000580, "Member 'UGA_MeteorPunch_C::异步事件' has a wrong offset!");

}

