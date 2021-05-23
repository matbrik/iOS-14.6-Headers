/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSCurationModel_v1 : NSObject <CLSCurationModel> {
    CLSAestheticsModel * _aestheticsModel;
    <CLSAssetProcessedSignals> * _defaultProcessedSignals;
    CLSFaceModel * _faceModel;
    double  _faceSizeLowerLimit;
    double  _faceSizeUpperLimit;
    CLSJunkClassificationModel * _junkClassificationModel;
    CLSMediaAnalysisModel * _mediaAnalysisModel;
    CLSMediaPreAnalysisModel * _mediaPreAnalysisModel;
}

@property (readonly) CLSAestheticsModel *aestheticsModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSFaceModel *faceModel;
@property (readonly) double faceSizeLowerLimit;
@property (readonly) double faceSizeUpperLimit;
@property (readonly) unsigned long long hash;
@property (readonly) CLSJunkClassificationModel *junkClassificationModel;
@property (readonly) CLSMediaAnalysisModel *mediaAnalysisModel;
@property (readonly) CLSMediaPreAnalysisModel *mediaPreAnalysisModel;
@property (readonly) double minimumDurationForHighFramerateVideoToNotBeJunk;
@property (readonly) double minimumDurationForTimelapseVideoToNotBeJunk;
@property (readonly) double minimumDurationForVideoToNotBeJunk;
@property (readonly) Class superclass;

+ (bool)maximumAllowedAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+ (unsigned long long)maximumAllowedFaceAnalysisVersion;
+ (unsigned long long)maximumAllowedMediaAnalysisVersion;
+ (unsigned long long)maximumAllowedSceneAnalysisVersion;
+ (bool)minimumRequiredAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+ (unsigned long long)minimumRequiredFaceAnalysisVersion;
+ (unsigned long long)minimumRequiredMediaAnalysisVersion;
+ (unsigned long long)minimumRequiredSceneAnalysisVersion;
+ (short)uninterestingAudioClassifications;

- (void).cxx_destruct;
- (id)aestheticsModel;
- (bool)asset:(id)arg1 isAestheticallyAwesomeWithContext:(id)arg2;
- (bool)assetIsJunkWithSceneClassifications:(id)arg1 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg4;
- (bool)avoidIfPossibleForKeyAssetWithAsset:(id)arg1;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)arg1;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)arg1;
- (id)faceInformationSummaryWithFaces:(id)arg1 personUUIDs:(id)arg2 hiddenPersonLocalIdentifiers:(id)arg3;
- (id)faceModel;
- (double)faceSizeLowerLimit;
- (double)faceSizeUpperLimit;
- (bool)filterForFoodieWithClassification:(id)arg1;
- (bool)hasInterestingAudioClassificationWithAsset:(id)arg1;
- (bool)hasInterestingScenesWithAsset:(id)arg1;
- (bool)hasPoorResolutionWithAsset:(id)arg1;
- (bool)imageAssetIsJunkForMemoriesFromSceneAndJunkClassifications:(id)arg1 forKeyAsset:(bool)arg2;
- (bool)imageAssetIsJunkFromSceneAndJunkClassifications:(id)arg1;
- (id)initWithCurationModelSpecification:(id)arg1;
- (float)interactionScoreWithAsset:(id)arg1;
- (short)interestingAudioClassificationsWithAsset:(id)arg1;
- (bool)isAestheticallyPrettyGoodWithAsset:(id)arg1;
- (bool)isBadQualityForImageKeyAssetWithAsset:(id)arg1;
- (bool)isBlurryWithAsset:(id)arg1;
- (bool)isGoldWithAsset:(id)arg1;
- (bool)isInhabitedWithAsset:(id)arg1;
- (bool)isInterestingHDRWithAsset:(id)arg1;
- (bool)isInterestingLivePhotoWithAsset:(id)arg1;
- (bool)isInterestingPanoramaWithAsset:(id)arg1;
- (bool)isInterestingReframeWithAsset:(id)arg1;
- (bool)isInterestingSDOFWithAsset:(id)arg1;
- (bool)isInterestingVideoWithAsset:(id)arg1;
- (bool)isJunkWithJunkClassification:(id)arg1;
- (bool)isJunkWithSignal:(id)arg1 isReliable:(bool*)arg2;
- (bool)isNonMemorableWithAsset:(id)arg1;
- (bool)isRegularGemWithAsset:(id)arg1;
- (bool)isShinyGemWithAsset:(id)arg1;
- (bool)isShowcasingFoodWithSceneClassification:(id)arg1;
- (bool)isTragicFailureWithImageAsset:(id)arg1;
- (bool)isUtilityForImageAsset:(id)arg1;
- (bool)isUtilityForMemoriesForImageAsset:(id)arg1;
- (bool)isUtilityForMemoriesWithAsset:(id)arg1;
- (bool)isUtilityForVideoAsset:(id)arg1;
- (bool)isUtilityWithAsset:(id)arg1;
- (id)junkClassificationModel;
- (id)mediaAnalysisModel;
- (id)mediaPreAnalysisModel;
- (double)minimumDurationForHighFramerateVideoToNotBeJunk;
- (double)minimumDurationForTimelapseVideoToNotBeJunk;
- (double)minimumDurationForVideoToNotBeJunk;
- (id)newProcessedSignals;
- (id)processedSignalsFromSignals:(id)arg1;
- (double)scoreWithAsset:(id)arg1 inContext:(id)arg2;

@end