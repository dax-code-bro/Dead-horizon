using UnrealBuildTool;
using System.Collections.Generic;

public class DeadHorizonTarget : TargetRules
{
	public DeadHorizonTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		ExtraModuleNames.Add("DeadHorizon");
	}
}
