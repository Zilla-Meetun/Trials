// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/FenceSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFenceSpline() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_AFenceSpline_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_AFenceSpline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Trials();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
// End Cross Module References
	void AFenceSpline::StaticRegisterNativesAFenceSpline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFenceSpline);
	UClass* Z_Construct_UClass_AFenceSpline_NoRegister()
	{
		return AFenceSpline::StaticClass();
	}
	struct Z_Construct_UClass_AFenceSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FenceSplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FenceSplineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FenceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FenceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SplineAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFenceSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFenceSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FenceSpline.h" },
		{ "ModuleRelativePath", "Public/FenceSpline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceSplineComp_MetaData[] = {
		{ "Category", "FenceSpline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FenceSpline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceSplineComp = { "FenceSplineComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFenceSpline, FenceSplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceSplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceSplineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceMesh_MetaData[] = {
		{ "Category", "FenceSpline" },
		{ "ModuleRelativePath", "Public/FenceSpline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceMesh = { "FenceMesh", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFenceSpline, FenceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFenceSpline_Statics::NewProp_SplineAxis_MetaData[] = {
		{ "Category", "FenceSpline" },
		{ "ModuleRelativePath", "Public/FenceSpline.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFenceSpline_Statics::NewProp_SplineAxis = { "SplineAxis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFenceSpline, SplineAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UClass_AFenceSpline_Statics::NewProp_SplineAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFenceSpline_Statics::NewProp_SplineAxis_MetaData)) }; // 1317892391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFenceSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceSplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFenceSpline_Statics::NewProp_FenceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFenceSpline_Statics::NewProp_SplineAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFenceSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFenceSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFenceSpline_Statics::ClassParams = {
		&AFenceSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFenceSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFenceSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFenceSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFenceSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFenceSpline()
	{
		if (!Z_Registration_Info_UClass_AFenceSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFenceSpline.OuterSingleton, Z_Construct_UClass_AFenceSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFenceSpline.OuterSingleton;
	}
	template<> TRIALS_API UClass* StaticClass<AFenceSpline>()
	{
		return AFenceSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFenceSpline);
	struct Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_FenceSpline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_FenceSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFenceSpline, AFenceSpline::StaticClass, TEXT("AFenceSpline"), &Z_Registration_Info_UClass_AFenceSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFenceSpline), 857972587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_FenceSpline_h_1427148737(TEXT("/Script/Trials"),
		Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_FenceSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_FenceSpline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
