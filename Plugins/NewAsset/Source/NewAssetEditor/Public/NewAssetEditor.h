#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IndirectionTextureAssetActions.h"


class FNewAssetEditor : public IModuleInterface
{
	public:

	/* Called when the module is loaded */
	virtual void StartupModule() override;

	/* Called when the module is unloaded */
	virtual void ShutdownModule() override;

private :
	TSharedPtr<FIndirectionTextureAssetActions> IndirectionTextureAssetActions;
};