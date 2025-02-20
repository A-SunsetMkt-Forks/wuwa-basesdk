﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ME1DabuouMd00001_input

#include "Basic.hpp"

#include "BP_ME1DabuouMd00001_input_classes.hpp"
#include "BP_ME1DabuouMd00001_input_parameters.hpp"


namespace SDK
{

// Function BP_ME1DabuouMd00001_input.BP_ME1DabuouMd00001_input_C.攻击按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_ME1DabuouMd00001_input_C::攻击按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1DabuouMd00001_input_C", "攻击按下");

	Params::BP_ME1DabuouMd00001_input_C_攻击按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ME1DabuouMd00001_input.BP_ME1DabuouMd00001_input_C.技能1按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_ME1DabuouMd00001_input_C::技能1按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1DabuouMd00001_input_C", "技能1按下");

	Params::BP_ME1DabuouMd00001_input_C_技能1按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ME1DabuouMd00001_input.BP_ME1DabuouMd00001_input_C.幻象1按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_ME1DabuouMd00001_input_C::幻象1按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1DabuouMd00001_input_C", "幻象1按下");

	Params::BP_ME1DabuouMd00001_input_C_幻象1按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ME1DabuouMd00001_input.BP_ME1DabuouMd00001_input_C.跳跃按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_ME1DabuouMd00001_input_C::跳跃按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1DabuouMd00001_input_C", "跳跃按下");

	Params::BP_ME1DabuouMd00001_input_C_跳跃按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ME1DabuouMd00001_input.BP_ME1DabuouMd00001_input_C.闪避按下
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSInputCommand                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FSInputCommand UBP_ME1DabuouMd00001_input_C::闪避按下(float time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ME1DabuouMd00001_input_C", "闪避按下");

	Params::BP_ME1DabuouMd00001_input_C_闪避按下 Parms{};

	Parms.time = time;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

