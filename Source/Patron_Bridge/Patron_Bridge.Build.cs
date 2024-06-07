// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Patron_Bridge : ModuleRules
{
	public Patron_Bridge(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
