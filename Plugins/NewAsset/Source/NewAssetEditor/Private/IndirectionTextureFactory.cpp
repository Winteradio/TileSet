#include "IndirectionTextureFactory.h"
#include "IndirectionTexture.h"

UIndirectionTextureFactory::UIndirectionTextureFactory()
{
	SupportedClass = UIndirectionTexture::StaticClass();
	bCreateNew = true;
}

UObject* UIndirectionTextureFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UIndirectionTexture>(InParent, InClass, InName, Flags);
}