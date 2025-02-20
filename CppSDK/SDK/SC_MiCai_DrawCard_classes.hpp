#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_MiCai_DrawCard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SC_MiCai_DrawCard.SequenceDirector_C
// 0x0008 (0x0040 - 0x0038)
class SC_MiCai_DrawCard::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void BP_Micai_Event_0(class ABP_Micai_C* BP_Micai);
	void EMicai_Md_100011_Event_0(class ASkeletalMeshActor* EMicai_Md_100011);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Micai_C* BP_Micai);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ASkeletalMeshActor* EMicai_Md_100011);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass SC_MiCai_DrawCard.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class SC_MiCai_DrawCard::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<SC_MiCai_DrawCard::USequenceDirector_C>();
	}
};
static_assert(alignof(SC_MiCai_DrawCard::USequenceDirector_C) == 0x000008, "Wrong alignment on SC_MiCai_DrawCard::USequenceDirector_C");
static_assert(sizeof(SC_MiCai_DrawCard::USequenceDirector_C) == 0x000040, "Wrong size on SC_MiCai_DrawCard::USequenceDirector_C");
static_assert(offsetof(SC_MiCai_DrawCard::USequenceDirector_C, UberGraphFrame) == 0x000038, "Member 'SC_MiCai_DrawCard::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}

