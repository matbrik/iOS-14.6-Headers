/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInternalResource : PLManagedObject <PLCloudDeletable, PLResource, PLResourceAvailabilityMarking, PLValidatesResourceModel> {
    PLInternalResourceSidecarRepresentation * _sidecarRepresentation;
}

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, readonly, copy) <PLAssetID> *assetID;
@property (nonatomic, retain) NSString *cloudDeleteAssetUUIDWithResourceType;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (nonatomic, retain) NSDate *cloudLastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *cloudLastPrefetchDate;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSDate *cloudMasterDateCreated;
@property (nonatomic) short cloudPrefetchCount;
@property (nonatomic, retain) NSDate *cloudPrunedAt;
@property (nonatomic) int cloudSourceType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic, retain) PLCodec *codec;
@property (nonatomic, readonly) <PLCodecIdentity> *codecID;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic) long long dataLength;
@property (nonatomic, readonly) <PLResourceDataStore> *dataStore;
@property (nonatomic) short dataStoreClassID;
@property (nonatomic, readonly) <PLResourceDataStoreKey> *dataStoreKey;
@property (nonatomic, copy) NSData *dataStoreKeyData;
@property (nonatomic) long long dataStoreSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedDataLength;
@property (nonatomic) long long fileID;
@property (nonatomic, retain) PLFileSystemBookmark *fileSystemBookmark;
@property (nonatomic, retain) PLFileSystemVolume *fileSystemVolume;
@property (nonatomic, retain) NSString *fingerprint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDerivative;
@property (nonatomic) short localAvailability;
@property (nonatomic) short localAvailabilityTarget;
@property (nonatomic) unsigned int orientation;
@property (nonatomic, readonly) long long orientedHeight;
@property (nonatomic, readonly) long long orientedWidth;
@property (nonatomic) long long ptpTrashedState;
@property (nonatomic) int qualitySortValue;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) short remoteAvailabilityTarget;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic, readonly) float scale;
@property (nonatomic, retain) NSNumber *sidecarIndex;
@property (nonatomic, readonly) PLInternalResourceSidecarRepresentation *sidecarRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLCloudMaster *transientCloudMaster;
@property (nonatomic, retain) NSDate *trashedDate;
@property (nonatomic) short trashedState;
@property (nonatomic, retain) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic, readonly) <PLUniformTypeIdentifierIdentity> *uniformTypeIdentifierID;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) unsigned int version;

+ (bool)_countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(bool)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6;
+ (id)_obsoleteResourceRecipesWithCPLOff;
+ (bool)batchResetFileIDInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (unsigned long long)bytesForAllResourcesInLibrary:(id)arg1;
+ (unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (bool)countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5;
+ (bool)countOfMediumOriginalLocallyAvailableCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4;
+ (unsigned long long)cplExpungedStateForTrashedState:(short)arg1;
+ (bool)deleteObsoleteResourcesInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)entityName;
+ (id)insertResourceForAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)insertResourceForMasterObjectID:(id)arg1 withExternalCPLResource:(id)arg2 inManagedObjectContext:(id)arg3;
+ (bool)isCPLJPEGThumbnailResource:(id)arg1;
+ (id)listOfSyncedProperties;
+ (id)nonOriginalCPLResourceTypes;
+ (id)originalCPLResourceTypes;
+ (id)originalCPLResourceTypesForAsset;
+ (id)originalCPLResourceTypesForMaster;
+ (short)plTrashedStateForCPLExpungedState:(unsigned long long)arg1;
+ (id)predicateForAllFullSizeResourcesLocallyAvailable;
+ (id)predicateForAllOriginalResourcesLocallyAvailable;
+ (id)predicateForAllOriginalResourcesLocallyAvailableForPTP;
+ (id)predicateForAvailableResources;
+ (id)predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)predicateForMaxFilesize:(long long)arg1;
+ (id)predicateForOriginalsToDownload;
+ (id)predicateForPurgeableOriginalResources;
+ (id)predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)predicateForResourceIsNotLocallyAvailableWithCPLResourceType:(unsigned long long)arg1 version:(unsigned int)arg2;
+ (id)prefetchResourcePredicateForCPLResourceType:(unsigned long long)arg1 isAssetResource:(bool)arg2 maxRetry:(unsigned long long)arg3 additionalResourcePredicates:(id)arg4;
+ (id)prunePredicateForAllCPLResourceTypes;
+ (id)prunePredicateForCPLResourceTypes:(id)arg1;
+ (id)purgeablePushedPredicateForCPLResourceTypes:(id)arg1 urgency:(long long)arg2;
+ (void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(bool)arg2;
+ (void)resetPrefetchStateForResourcesWithVersion:(unsigned int)arg1 cplType:(unsigned long long)arg2 assetUuids:(id)arg3 inLibrary:(id)arg4;
+ (id)resourceForManagedAsset:(id)arg1 sharedStreamsType:(unsigned int)arg2 managedObjectContext:(id)arg3 error:(id*)arg4;
+ (bool)supportsTrashedStateForResourceIdentity:(id)arg1;

- (void).cxx_destruct;
- (bool)_colorSpaceIsNativeForDisplay;
- (id)_libraryID;
- (void)applyTrashedState:(short)arg1;
- (void)applyTrashedState:(short)arg1 trashedDate:(id)arg2;
- (id)assetID;
- (bool)canRepresentAsSidecar;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)codecID;
- (id)cplFileURL;
- (id)cplResourceIncludeFile:(bool)arg1;
- (unsigned long long)cplType;
- (id)dataStore;
- (id)dataStoreKey;
- (id)debugDescription;
- (void)deleteResource;
- (long long)estimatedDataLength;
- (id)expungeableResourceStateRepresentation;
- (id)fileURL;
- (bool)isAdjustedFullSizeRenderResource;
- (bool)isAdjustedResource;
- (bool)isCPLAssetResource;
- (bool)isCPLJPEGThumbnail;
- (bool)isCPLMasterResource;
- (bool)isCPLOriginalResource;
- (bool)isCPLResource;
- (bool)isDefaultOrientation;
- (bool)isDerivative;
- (bool)isInCloud;
- (bool)isLocallyAvailable;
- (bool)isPlayableVideo;
- (bool)isRemotelyAvailable;
- (bool)isSyncableChange;
- (bool)isTrashedOrExpunged;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
- (void)markAsNotLocallyAvailable;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (void)persistTrashedStateToFilesystem;
- (id)photosCTLDescription;
- (id)photosCTLJSONDict;
- (void)prepareForDeletion;
- (id)redactedDescription;
- (id)referenceMediaFileURL;
- (bool)repairResourceValidationErrors:(id)arg1 managedObjectContext:(id)arg2;
- (void)resetPrefetchState;
- (float)scale;
- (float)scaleGivenAssetHasAdjustments:(bool)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
- (id)scopedIdentifier;
- (void)setCloudAttributesWithExternalResource:(id)arg1;
- (void)setCloudLocalState:(short)arg1;
- (void)setDataLength:(long long)arg1;
- (void)setFingerprint:(id)arg1;
- (void)setLocalAvailability:(short)arg1;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2;
- (void)setResourceIdentity:(id)arg1 managedObjectContext:(id)arg2;
- (bool)shouldPersistTrashedState;
- (id)sidecarRepresentation;
- (id)singleLineDescription;
- (bool)supportsCloudUpload;
- (bool)supportsTrashedState;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg1;
- (id)uniformTypeIdentifierID;
- (void)updateResourceForMasterExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)validatedExternalResourceRepresentationUsingFileURL:(id)arg1;
- (void)willSave;

@end
