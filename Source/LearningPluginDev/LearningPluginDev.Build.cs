// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LearningPluginDev : ModuleRules
{
	public LearningPluginDev(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
