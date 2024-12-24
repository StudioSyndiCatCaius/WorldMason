// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMason_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WorldMason;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WorldMason()
	{
		if (!Z_Registration_Info_UPackage__Script_WorldMason.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WorldMason",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x26B55D39,
				0xCD613CF7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WorldMason.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WorldMason.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WorldMason(Z_Construct_UPackage__Script_WorldMason, TEXT("/Script/WorldMason"), Z_Registration_Info_UPackage__Script_WorldMason, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x26B55D39, 0xCD613CF7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
