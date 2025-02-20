﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Bianshen

#include "Basic.hpp"

#include "GA_Role_Bianshen_classes.hpp"
#include "GA_Role_Bianshen_parameters.hpp"


namespace SDK
{

// Function GA_Role_Bianshen.GA_Role_Bianshen_C.ExecuteUbergraph_GA_Role_Bianshen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_Bianshen_C::ExecuteUbergraph_GA_Role_Bianshen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "ExecuteUbergraph_GA_Role_Bianshen");

	Params::GA_Role_Bianshen_C_ExecuteUbergraph_GA_Role_Bianshen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Role_Bianshen_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "K2_OnEndAbility");

	Params::GA_Role_Bianshen_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Role_Bianshen_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.获取幻象数据
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   幻象ID_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSVisionData                     幻象数据_0                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void UGA_Role_Bianshen_C::获取幻象数据(int32 幻象ID_0, struct FSVisionData* 幻象数据_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "获取幻象数据");

	Params::GA_Role_Bianshen_C_获取幻象数据 Parms{};

	Parms.幻象ID_0 = 幻象ID_0;

	UObject::ProcessEvent(Func, &Parms);

	if (幻象数据_0 != nullptr)
		*幻象数据_0 = std::move(Parms.幻象数据_0);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.计算施法技能ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   技能序号                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             计算结果                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_Bianshen_C::计算施法技能ID(int32 技能序号, class FName* 计算结果)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "计算施法技能ID");

	Params::GA_Role_Bianshen_C_计算施法技能ID Parms{};

	Parms.技能序号 = 技能序号;

	UObject::ProcessEvent(Func, &Parms);

	if (计算结果 != nullptr)
		*计算结果 = Parms.计算结果;
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.获取施法Skill_ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Skill_ID                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UGA_Role_Bianshen_C::获取施法Skill_ID(class FString* Skill_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "获取施法Skill_ID");

	Params::GA_Role_Bianshen_C_获取施法Skill_ID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Skill_ID != nullptr)
		*Skill_ID = std::move(Parms.Skill_ID);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.角色添加渐变消失材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaterialDataID_0                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_Bianshen_C::角色添加渐变消失材质(int32* MaterialDataID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "角色添加渐变消失材质");

	Params::GA_Role_Bianshen_C_角色添加渐变消失材质 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialDataID_0 != nullptr)
		*MaterialDataID_0 = Parms.MaterialDataID_0;
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.角色添加渐变显示材质
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaterialDataID_0                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_Bianshen_C::角色添加渐变显示材质(int32* MaterialDataID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "角色添加渐变显示材质");

	Params::GA_Role_Bianshen_C_角色添加渐变显示材质 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialDataID_0 != nullptr)
		*MaterialDataID_0 = Parms.MaterialDataID_0;
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.结束通用逻辑
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Role_Bianshen_C::结束通用逻辑()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "结束通用逻辑");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.计算幻象位置
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*                       目标幻象                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransformDouble                 NewParam                                               (Parm, OutParm, IsPlainOldData, NoDestructor)

void UGA_Role_Bianshen_C::计算幻象位置(class ACharacter* 目标幻象, struct FTransformDouble* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "计算幻象位置");

	Params::GA_Role_Bianshen_C_计算幻象位置 Parms{};

	Parms.目标幻象 = 目标幻象;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.角色关闭碰撞
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Role_Bianshen_C::角色关闭碰撞()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "角色关闭碰撞");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.角色开启碰撞
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Role_Bianshen_C::角色开启碰撞()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "角色开启碰撞");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_Bianshen.GA_Role_Bianshen_C.继承移动模式
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterMovementComponent*      Base                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent*      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_Bianshen_C::继承移动模式(class UCharacterMovementComponent* Base, class UCharacterMovementComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Bianshen_C", "继承移动模式");

	Params::GA_Role_Bianshen_C_继承移动模式 Parms{};

	Parms.Base = Base;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

