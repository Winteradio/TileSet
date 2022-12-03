using UnrealBuildTool;
 
public class NewAssetEditor : ModuleRules
{
	public NewAssetEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UnrealEd", "NewAsset", "NewAssetEditor" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "Slate", "SlateCore", "NewAsset", "UnrealEd", "NewAssetEditor", "NewAsset" });

		PublicIncludePaths.AddRange(new string[] {"NewAssetEditor/Public"});
		PrivateIncludePaths.AddRange(new string[] {"NewAssetEditor/Private"});
	}
}