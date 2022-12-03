#include "NewAssetEditor.h"

#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "IndirectionTextureAssetActions.h"

#define LOCTEXT_NAMESPACE "FNewAssetEditor"

void FNewAssetEditor::StartupModule()
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	const auto AssetCategory = AssetTools.RegisterAdvancedAssetCategory(
		FName(TEXT("Test Plugin")), LOCTEXT("NewAssetCategory", "Test Plugin"));
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FIndirectionTextureAssetActions(AssetCategory)));
}

void FNewAssetEditor::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(IndirectionTextureAssetActions.ToSharedRef());
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FNewAssetEditor, NewAssetEditor)