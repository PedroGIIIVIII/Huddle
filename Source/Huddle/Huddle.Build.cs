// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Huddle : ModuleRules
{
	public Huddle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
