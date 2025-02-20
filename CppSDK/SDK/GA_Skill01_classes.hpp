﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Skill01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Skill01.GA_Skill01_C
// 0x0010 (0x0568 - 0x0558)
class UGA_Skill01_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Skill01_C;                       // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Zhezhi_C*                           As_BP_Zhezhi;                                      // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Skill01(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81AD58C6A6();
	void OnBlendOut_5D118C384AE61F1C80292E81AD58C6A6();
	void OnInterrupted_5D118C384AE61F1C80292E81AD58C6A6();
	void OnCancelled_5D118C384AE61F1C80292E81AD58C6A6();
	void OnTick_5D118C384AE61F1C80292E81AD58C6A6();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Skill01_C">();
	}
	static class UGA_Skill01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Skill01_C>();
	}
};
static_assert(alignof(UGA_Skill01_C) == 0x000008, "Wrong alignment on UGA_Skill01_C");
static_assert(sizeof(UGA_Skill01_C) == 0x000568, "Wrong size on UGA_Skill01_C");
static_assert(offsetof(UGA_Skill01_C, UberGraphFrame_GA_Skill01_C) == 0x000558, "Member 'UGA_Skill01_C::UberGraphFrame_GA_Skill01_C' has a wrong offset!");
static_assert(offsetof(UGA_Skill01_C, As_BP_Zhezhi) == 0x000560, "Member 'UGA_Skill01_C::As_BP_Zhezhi' has a wrong offset!");

}

