/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResourceInstaller : NSObject

+ (void)_applyColorSpaceAndCodecToNonDerivativeExternalResource:(id)arg1 fromCloudMaster:(id)arg2 originalColorSpace:(id)arg3;
+ (void)_applyColorSpaceAndCodecUsingFileToExternalResource:(id)arg1 managedObjectContext:(id)arg2;
+ (void)_applyImageIOMetadataToExternalResource:(id)arg1 fromFileURL:(id)arg2 assumedWidth:(long long)arg3 assumedHeight:(long long)arg4 recipe:(id)arg5 assetKind:(short)arg6 context:(id)arg7;
+ (void)_applyImageOrientationToExternalResource:(id)arg1 originalOrientation:(unsigned int)arg2 assetOrienation:(unsigned int)arg3;
+ (unsigned long long)_getURLDataLength:(id)arg1;
+ (bool)_installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(bool)arg2 referencedResourceURLs:(id)arg3 includeLegacyCloudResources:(bool)arg4 outResourcesStoreCount:(unsigned long long*)arg5 error:(id*)arg6;
+ (bool)_isPenultimateVersionFromCPLType:(unsigned long long)arg1;
+ (id)_predicateForUnrecoverableResources;
+ (void)_recipeAndDerivativeStateFromCPLResourceType:(unsigned long long)arg1 fromAdjustedSet:(bool)arg2 assetType:(short)arg3 recipeID:(unsigned int*)arg4;
+ (id)_speculativePathForPenultimateFullsizeRenderImageFileForAsset:(id)arg1;
+ (id)_validatedExternalResourceFromSupplementalFileURL:(id)arg1 withUTI:(id)arg2 ptpTrashedState:(long long)arg3 index:(id)arg4 asset:(id)arg5;
+ (id)_validatedExternalResourceIfPresentForAudioOrUnknownAsset:(id)arg1;
+ (id)_validatedExternalResourcesFromLocalImageOrVideoAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)_validatedExternalResourcesFromSharedStreamAsset:(id)arg1;
+ (bool)createInternalResourcesForExistingAssetsWithNoExistingResourcesInStore:(id)arg1 migrator:(id)arg2;
+ (unsigned long long)derivativeCPLTypeFromRecipeID:(unsigned int)arg1 version:(unsigned int)arg2;
+ (id)externalResourcesForExistingAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)generateAdjustedFullSizeRenderResourceForFilePath:(id)arg1 requireFileToBePresent:(bool)arg2 basedOnFullSizeWidth:(long long)arg3 andHeight:(long long)arg4 context:(id)arg5;
+ (id)generateExternalResourceFromCPLResource:(id)arg1 asset:(id)arg2 fromAdjustedSet:(bool)arg3;
+ (id)generateExternalResourceFromCPLResource:(id)arg1 cloudMaster:(id)arg2 masterResources:(id)arg3;
+ (id)generateValidatedExternalImageResourceOfType:(unsigned int)arg1 forFilePath:(id)arg2 requireFileToBePresent:(bool)arg3 version:(unsigned int)arg4 basedOnFullSizeWidth:(long long)arg5 andHeight:(long long)arg6 isNativeColorSpace:(bool)arg7 isLosslessEncoding:(bool)arg8 recipe:(id)arg9 assetKind:(short)arg10 context:(id)arg11;
+ (id)generateValidatedExternalOtherResourceOfType:(unsigned int)arg1 forFilePath:(id)arg2 uti:(id)arg3 requireFileToBePresent:(bool)arg4 version:(unsigned int)arg5;
+ (id)generateVideoResourcesFromVideoAsset:(id)arg1 referencedVideoPath:(id)arg2;
+ (bool)installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(bool)arg2 referencedResourceURLs:(id)arg3 error:(id*)arg4;
+ (bool)installInternalResourcesForExistingAssetsWithNoExistingResourcesInManagedObjectContext:(id)arg1 migrator:(id)arg2;
+ (bool)installSupplementalResourceForExistingFileAtURL:(id)arg1 ptpTrashedState:(long long)arg2 index:(id)arg3 forAsset:(id)arg4 imageOrientation:(id)arg5 resultingResource:(id*)arg6 error:(id*)arg7;
+ (bool)isValidCPLResourceTypeForPersistence:(unsigned long long)arg1;
+ (unsigned long long)nonDerivativeCPLTypeFromResourceType:(unsigned int)arg1 version:(unsigned int)arg2 uniformTypeIdentifier:(id)arg3;
+ (id)onDemand_installAdjustedDeferredFullSizeVideoComplementResourceForAsset:(id)arg1;
+ (void)onDemand_installAdjustedFullSizeRenderResourceAtFilePath:(id)arg1 forAsset:(id)arg2;
+ (id)onDemand_installAdjustedFullSizeVideoComplementResourceIfPresentForAsset:(id)arg1;
+ (id)onDemand_installLocalVideoKeyFrameForAsset:(id)arg1;
+ (id)onDemand_installOriginalAdjustmentResourceIfPresentForAsset:(id)arg1;
+ (id)onDemand_installOriginalSOCImagePresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)onDemand_installOriginalSOCVideoComplementPresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)onDemand_installOriginalSOCVideoPresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2;
+ (id)onDemand_installOriginalVideoComplementResourceIfPresentForAsset:(id)arg1;
+ (id)onDemand_installPrimaryImageResourceWithRecipe:(id)arg1 version:(unsigned int)arg2 forAsset:(id)arg3;
+ (unsigned int)recipeIDFromCPLResourceType:(unsigned long long)arg1 assetType:(short)arg2 fromAdjustedSet:(bool)arg3;
+ (bool)reconsiderSavedAssetTypeInStore:(id)arg1 migrator:(id)arg2;
+ (bool)recoverSupplementalResourcesForAsset:(id)arg1 usingSidecarFinder:(id)arg2 outResourcesStoreCount:(unsigned long long*)arg3 error:(id*)arg4;
+ (bool)removeLegacyCloudResourcesInStore:(id)arg1 migrator:(id)arg2;
+ (bool)resetImageRequestHintsInStore:(id)arg1 migrator:(id)arg2;
+ (bool)resetInternalResourcesInStore:(id)arg1 resetUTIs:(bool)arg2 resetCodecs:(bool)arg3 resetMasters:(bool)arg4 migrator:(id)arg5;
+ (unsigned int)resourceTypeFromCPLType:(unsigned long long)arg1 assetType:(short)arg2;
+ (unsigned int)resourceVersionFromCPLType:(unsigned long long)arg1 fromAdjustedSet:(bool)arg2;
+ (id)validatedExternalResourceForLocalVideoIfPresentAtPath:(id)arg1 context:(id)arg2;
+ (id)validatedExternalResourceFromExternalResourceCloudAttributes:(id)arg1 cplType:(unsigned long long)arg2 assetType:(short)arg3 uti:(id)arg4 originalOrientation:(unsigned int)arg5 orientation:(unsigned int)arg6 originalColorSpace:(id)arg7 resourceWidth:(unsigned long long)arg8 resourceHeight:(unsigned long long)arg9 assetWidth:(unsigned long long)arg10 assetHeight:(unsigned long long)arg11 resourceFingerprint:(id)arg12 resourceSize:(unsigned long long)arg13 isAvailable:(bool)arg14 fromAdjustedSet:(bool)arg15 resourceURL:(id)arg16 cloudMaster:(id)arg17 isForMigration:(bool)arg18 context:(id)arg19;

@end