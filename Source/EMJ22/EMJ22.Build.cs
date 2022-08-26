// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EMJ22 : ModuleRules
{
	public EMJ22(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
