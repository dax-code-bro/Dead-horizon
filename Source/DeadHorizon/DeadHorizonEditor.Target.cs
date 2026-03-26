using UnrealBuildTool;
using System.Collections.Generic;

public class DeadHorizonEditorTarget : TargetRules
{
	public DeadHorizonEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		ExtraModuleNames.Add("DeadHorizon");
	}
}
