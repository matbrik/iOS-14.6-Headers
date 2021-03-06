/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSAsset : NSObject {
    unsigned long long  _assetProvider;
    NSString * _configVersion;
    NSDictionary * _decodedInfo;
    NSString * _path;
    NSString * _resourcePath;
}

@property (nonatomic, readonly) NSString *CVTConfigPathNDAPI;
@property (nonatomic, readonly) float CVTThreshold;
@property (nonatomic, readonly) float CVTTwoShotDecisionWaitTime;
@property (nonatomic, readonly) float CVTTwoShotThreshold;
@property (nonatomic, readonly) unsigned long long SSVDistanceChannelBitset;
@property (nonatomic, readonly) unsigned int SSVEnergyBufferSize;
@property (nonatomic, readonly) unsigned long long SSVLKFSChannelBitset;
@property (nonatomic, readonly) unsigned int SSVLKFSLowerPercentile;
@property (nonatomic, readonly) float SSVLKFSMicSensitivityOffset;
@property (nonatomic, readonly) float SSVLKFSTTSMappingInputRangeHigh;
@property (nonatomic, readonly) float SSVLKFSTTSMappingInputRangeLow;
@property (nonatomic, readonly) float SSVLKFSTTSMappingOutputRangeHigh;
@property (nonatomic, readonly) float SSVLKFSTTSMappingOutputRangeLow;
@property (nonatomic, readonly) float SSVLKFSTimeConstant;
@property (nonatomic, readonly) unsigned int SSVLKFSUpperPercentile;
@property (nonatomic, readonly) unsigned long long SSVNoiseLevelChannelBitset;
@property (nonatomic, readonly) unsigned int SSVNoiseLowerPercentile;
@property (nonatomic, readonly) float SSVNoiseMicSensitivityOffset;
@property (nonatomic, readonly) float SSVNoiseMicSensitivityOffsetDeviceSimple;
@property (nonatomic, readonly) float SSVNoiseTTSMappingInputRangeHigh;
@property (nonatomic, readonly) float SSVNoiseTTSMappingInputRangeLow;
@property (nonatomic, readonly) float SSVNoiseTTSMappingOutputRangeHigh;
@property (nonatomic, readonly) float SSVNoiseTTSMappingOutputRangeLow;
@property (nonatomic, readonly) float SSVNoiseTimeConstant;
@property (nonatomic, readonly) unsigned int SSVNoiseUpperPercentile;
@property (nonatomic, readonly) float SSVNoiseWeight;
@property (nonatomic, readonly) NSDictionary *SSVParameterDirectionary;
@property (nonatomic, readonly) float SSVTTSVolumeLowerLimitDB;
@property (nonatomic, readonly) float SSVTTSVolumeUpperLimitDB;
@property (nonatomic, readonly) float SSVUserOffsetInputRangeHigh;
@property (nonatomic, readonly) float SSVUserOffsetInputRangeLow;
@property (nonatomic, readonly) float SSVUserOffsetOutputRangeHigh;
@property (nonatomic, readonly) float SSVUserOffsetOutputRangeLow;
@property (nonatomic, readonly) NSString *VTFirstPassConfigPathNDAPI;
@property (nonatomic, readonly) float VTFirstPassDelaySecondsForChannelSelection;
@property (nonatomic, readonly) float VTFirstPassMasterChannelScoreBoost;
@property (nonatomic, readonly) unsigned long long VTFirstPassProcessingChannelsBitset;
@property (nonatomic, readonly) float VTFirstPassProcessingChunkSeconds;
@property (nonatomic, readonly) float VTFirstPassThreshold;
@property (nonatomic, readonly) unsigned long long assetProvider;
@property (nonatomic, readonly) NSArray *checkerThresholds;
@property (nonatomic, readonly) NSString *configVersion;
@property (nonatomic, readonly) bool containsSpeakerRecognitionCategory;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *hashFromResourcePath;
@property (nonatomic, readonly) NSString *keywordDetectorConfigPathRecognizer;
@property (nonatomic, readonly) NSString *keywordDetectorNDAPIConfigFilePath;
@property (nonatomic, readonly) NSString *keywordDetectorQuasarConfigFilePath;
@property (nonatomic, readonly) float keywordDetectorThreshold;
@property (nonatomic, readonly) float keywordDetectorWaitTimeSinceVT;
@property (nonatomic, readonly) NSString *languageDetectorConfigFile;
@property (nonatomic, readonly) NSArray *languageDetectorSupportedLocale;
@property (nonatomic, readonly) unsigned long long maxAllowedEnrollmentUtterances;
@property (nonatomic, readonly) long long multiUserConfidentScoreThreshold;
@property (nonatomic, readonly) long long multiUserDeltaScoreThreshold;
@property (nonatomic, readonly) long long multiUserHighScoreThreshold;
@property (nonatomic, readonly) long long multiUserLowScoreThreshold;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *progCheckerConfigFile;
@property (nonatomic, readonly) bool progCheckerShadowMode;
@property (nonatomic, readonly) float pruningExplicitUttThresholdPSR;
@property (nonatomic, readonly) float pruningExplicitUttThresholdSAT;
@property (nonatomic, readonly) unsigned long long pruningNumRetentionUtterance;
@property (nonatomic, readonly) float pruningThresholdPSR;
@property (nonatomic, readonly) float pruningThresholdSAT;
@property (nonatomic, readonly) float psrCombinationWeight;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) float satImplicitProfileDeltaThreshold;
@property (nonatomic, readonly) float satImplicitProfileThreshold;
@property (nonatomic, readonly) bool satImplicitTrainingEnabled;
@property (nonatomic, readonly) float satScoreThreshold;
@property (nonatomic, readonly) float satVTImplicitThreshold;
@property (nonatomic, readonly) NSString *spgConfigFile;
@property (nonatomic, readonly) NSString *startOfSpeechDetectorConfigFile;
@property (nonatomic, readonly) unsigned long long supportedInputOrigins;
@property (nonatomic, readonly) NSString *voiceProfilePruningCookie;

// Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation

+ (id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3;
+ (id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3 assetProvider:(unsigned long long)arg4;
+ (id)decodeJson:(id)arg1;
+ (id)defaultFallBackAssetForAdBlocker;
+ (id)defaultFallBackAssetForHearst;
+ (id)defaultFallBackAssetForSmartSiriVolume;
+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)fallBackAssetResourcePath;
+ (id)getConfigFileNameForAssetType:(unsigned long long)arg1;
+ (id)hybridEndpointerAssetFilename;
+ (bool)isLeftConfigVersion:(id)arg1 newerThanRightConfigVersion:(id)arg2;
+ (unsigned long long)parseCompatibilityFromConfigVersion:(id)arg1;

- (void).cxx_destruct;
- (id)assetHashInResourcePath:(id)arg1;
- (unsigned long long)assetProvider;
- (id)configVersion;
- (bool)containsCategory:(id)arg1;
- (bool)containsKey:(id)arg1 category:(id)arg2;
- (id)description;
- (id)dictionary;
- (bool)getBoolForKey:(id)arg1 category:(id)arg2 default:(bool)arg3;
- (id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)hashFromResourcePath;
- (id)initWithResourcePath:(id)arg1 configFile:(id)arg2 configVersion:(id)arg3 assetProvderType:(unsigned long long)arg4;
- (bool)isEqualAsset:(id)arg1;
- (id)path;
- (id)resourcePath;
- (id)stringForCurrentAssetProviderType;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

+ (unsigned int)SSVDefaultDistanceChannelCount;
+ (unsigned int)SSVDefaultLKFSChannelCount;
+ (unsigned int)SSVDefaultNoiseChannelCount;
+ (unsigned long long)getSSVDeviceType;

- (id)CVTConfigPathNDAPI;
- (float)CVTThreshold;
- (float)CVTTwoShotDecisionWaitTime;
- (float)CVTTwoShotThreshold;
- (id)RTModelWithFallbackLanguage:(id)arg1;
- (unsigned long long)SSVDistanceChannelBitset;
- (unsigned int)SSVEnergyBufferSize;
- (unsigned long long)SSVLKFSChannelBitset;
- (unsigned int)SSVLKFSLowerPercentile;
- (float)SSVLKFSMicSensitivityOffset;
- (float)SSVLKFSTTSMappingInputRangeHigh;
- (float)SSVLKFSTTSMappingInputRangeLow;
- (float)SSVLKFSTTSMappingOutputRangeHigh;
- (float)SSVLKFSTTSMappingOutputRangeLow;
- (float)SSVLKFSTimeConstant;
- (unsigned int)SSVLKFSUpperPercentile;
- (unsigned long long)SSVNoiseLevelChannelBitset;
- (unsigned int)SSVNoiseLowerPercentile;
- (float)SSVNoiseMicSensitivityOffset;
- (float)SSVNoiseMicSensitivityOffsetDeviceSimple;
- (float)SSVNoiseTTSMappingInputRangeHigh;
- (float)SSVNoiseTTSMappingInputRangeLow;
- (float)SSVNoiseTTSMappingOutputRangeHigh;
- (float)SSVNoiseTTSMappingOutputRangeLow;
- (float)SSVNoiseTimeConstant;
- (unsigned int)SSVNoiseUpperPercentile;
- (float)SSVNoiseWeight;
- (id)SSVParameterDirectionary;
- (float)SSVTTSVolumeLowerLimitDB;
- (float)SSVTTSVolumeUpperLimitDB;
- (float)SSVUserOffsetInputRangeHigh;
- (float)SSVUserOffsetInputRangeLow;
- (float)SSVUserOffsetOutputRangeHigh;
- (float)SSVUserOffsetOutputRangeLow;
- (id)VTFirstPassConfigPathNDAPI;
- (float)VTFirstPassDelaySecondsForChannelSelection;
- (float)VTFirstPassMasterChannelScoreBoost;
- (unsigned long long)VTFirstPassProcessingChannelsBitset;
- (float)VTFirstPassProcessingChunkSeconds;
- (float)VTFirstPassThreshold;
- (float)VTSecondPass2ndChanceThresholdFrom:(id)arg1;
- (float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1;
- (float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1;
- (id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1;
- (id)VTSecondPassConfigPathNDAPIFrom:(id)arg1;
- (bool)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1;
- (id)VTSecondPassConfigPathRecognizerFrom:(id)arg1;
- (float)VTSecondPassLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1;
- (float)VTSecondPassPHSRejectLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPassPHSThresholdFrom:(id)arg1;
- (float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1;
- (float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1;
- (float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1;
- (id)VTSecondPassRecognizerTokenFrom:(id)arg1;
- (float)VTSecondPassRejectLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1;
- (float)VTSecondPassRemoteVADThresholdFrom:(id)arg1;
- (float)VTSecondPassShadowMicScoreThresholdForVADGating:(id)arg1;
- (float)VTSecondPassThresholdFrom:(id)arg1;
- (float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1;
- (bool)VTSecondPassUseKeywordSpottingFrom:(id)arg1;
- (id)_getCategoryKey;
- (id)_getContinuousVoiceTriggerAssetCategory;
- (unsigned long long)_mapInputOriginFromAssetToCSAudioRecordType:(id)arg1;
- (id)_sha1:(id)arg1;
- (id)_sha256:(id)arg1;
- (bool)assetsRequireSecondPass;
- (id)checkerThresholds;
- (id)configFilepathForDictationOrigin:(unsigned long long)arg1;
- (bool)containsSpeakerRecognitionCategory;
- (id)createRTModelWithLocale:(id)arg1;
- (id)ctcKwdToPhraseIdMapForCategory:(id)arg1;
- (id)hearstRTModelLocaleMap;
- (id)hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3;
- (id)jarvisRTModelLocaleMap;
- (id)keywordDetectorConfigPathRecognizer;
- (id)keywordDetectorNDAPIConfigFilePath;
- (id)keywordDetectorQuasarConfigFilePath;
- (float)keywordDetectorThreshold;
- (float)keywordDetectorWaitTimeSinceVT;
- (id)languageDetectorConfigFile;
- (id)languageDetectorSupportedLocale;
- (id)latestHearstRTModelForLocale:(id)arg1;
- (id)localeMapWithName:(id)arg1;
- (unsigned long long)maxAllowedEnrollmentUtterances;
- (long long)multiUserConfidentScoreThreshold;
- (long long)multiUserDeltaScoreThreshold;
- (long long)multiUserHighScoreThreshold;
- (long long)multiUserLowScoreThreshold;
- (id)progCheckerConfigFile;
- (bool)progCheckerShadowMode;
- (float)pruningExplicitUttThresholdPSR;
- (float)pruningExplicitUttThresholdSAT;
- (unsigned long long)pruningNumRetentionUtterance;
- (float)pruningThresholdPSR;
- (float)pruningThresholdSAT;
- (float)psrCombinationWeight;
- (id)rtModelLocaleMapWithModelType:(long long)arg1;
- (id)rtModelWithAccessoryRTModelType:(long long)arg1 majorVersion:(unsigned long long)arg2 minorVersion:(unsigned long long)arg3 locale:(id)arg4;
- (float)satImplicitProfileDeltaThreshold;
- (float)satImplicitProfileThreshold;
- (bool)satImplicitTrainingEnabled;
- (float)satScoreThreshold;
- (float)satVTImplicitThreshold;
- (id)spgConfigFile;
- (id)startOfSpeechDetectorConfigFile;
- (unsigned long long)supportedInputOrigins;
- (id)supportedVTPhrasesInfoForCategory:(id)arg1;
- (id)voiceProfilePruningCookie;

// Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition

- (id)CVTConfigPathNDAPI;
- (float)CVTThreshold;
- (float)CVTTwoShotDecisionWaitTime;
- (float)CVTTwoShotThreshold;
- (float)VTSecondPass2ndChanceThresholdFrom:(id)arg1;
- (float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1;
- (float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1;
- (id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1;
- (id)VTSecondPassConfigPathNDAPIFrom:(id)arg1;
- (bool)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1;
- (id)VTSecondPassConfigPathRecognizerFrom:(id)arg1;
- (float)VTSecondPassLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1;
- (float)VTSecondPassPHSRejectLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPassPHSThresholdFrom:(id)arg1;
- (float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1;
- (float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1;
- (float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1;
- (id)VTSecondPassRecognizerTokenFrom:(id)arg1;
- (float)VTSecondPassRejectLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1;
- (float)VTSecondPassRemoteVADThresholdFrom:(id)arg1;
- (float)VTSecondPassShadowMicScoreThresholdForVADGating:(id)arg1;
- (float)VTSecondPassThresholdFrom:(id)arg1;
- (float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1;
- (bool)VTSecondPassUseKeywordSpottingFrom:(id)arg1;
- (id)_getContinuousVoiceTriggerAssetCategory;
- (bool)assetsRequireSecondPass;
- (bool)containsSpeakerRecognitionCategory;
- (id)ctcKwdToPhraseIdMapForCategory:(id)arg1;
- (id)keywordDetectorNDAPIConfigFilePath;
- (id)keywordDetectorQuasarConfigFilePath;
- (unsigned long long)maxAllowedEnrollmentUtterances;
- (long long)multiUserConfidentScoreThreshold;
- (long long)multiUserDeltaScoreThreshold;
- (long long)multiUserHighScoreThreshold;
- (long long)multiUserLowScoreThreshold;
- (float)pruningExplicitUttThresholdPSR;
- (float)pruningExplicitUttThresholdSAT;
- (unsigned long long)pruningNumRetentionUtterance;
- (float)pruningThresholdPSR;
- (float)pruningThresholdSAT;
- (float)psrCombinationWeight;
- (float)satImplicitProfileDeltaThreshold;
- (float)satImplicitProfileThreshold;
- (bool)satImplicitTrainingEnabled;
- (float)satScoreThreshold;
- (float)satVTImplicitThreshold;
- (id)supportedVTPhrasesInfoForCategory:(id)arg1;
- (id)voiceProfilePruningCookie;

@end
