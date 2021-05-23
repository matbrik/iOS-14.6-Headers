/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAPrivateFederatedLearningRunner : NSObject {
    NSArray * _attachmentURLs;
    NSArray * _augmenters;
    NSNumber * _clippingNorm;
    NSString * _datasetPolicy;
    NSDictionary * _filtersByDatasetName;
    NSString * _fingerprintVersion;
    PGManager * _graphManager;
    NSString * _iCloudAggServiceKey;
    NSString * _labelPolicy;
    NSArray * _layersToTrain;
    NSNumber * _learningRate;
    NSString * _lossName;
    NSNumber * _minProcessedRate;
    NSString * _modelInputName;
    NSString * _modelOutputName;
    NSString * _negativesDatasetName;
    NSString * _negativesSubsetName;
    NSNumber * _normBinCount;
    unsigned long long  _numberOfEpochs;
    NSString * _optimizerName;
    NSNumber * _oversamplingRate;
    PHPhotoLibrary * _photoLibrary;
    NSString * _positivesDatasetName;
    NSString * _positivesSubsetName;
    bool  _shouldAddNoise;
    bool  _shouldEncrypt;
    bool  _shouldValidateModel;
    NSNumber * _totalNumberOfSamples;
    NSString * _trainingTask;
    PGFeatureTransformersForFeatureExtractors * _transformersForFeatureExtractors;
}

@property (nonatomic, retain) NSArray *attachmentURLs;
@property (nonatomic, readonly) NSArray *augmenters;
@property (nonatomic, retain) NSNumber *clippingNorm;
@property (nonatomic, retain) NSString *datasetPolicy;
@property (nonatomic, readonly) NSDictionary *filtersByDatasetName;
@property (nonatomic, retain) NSString *fingerprintVersion;
@property (nonatomic, retain) PGManager *graphManager;
@property (nonatomic, retain) NSString *iCloudAggServiceKey;
@property (nonatomic, retain) NSString *labelPolicy;
@property (nonatomic, retain) NSArray *layersToTrain;
@property (nonatomic, retain) NSNumber *learningRate;
@property (nonatomic, retain) NSString *lossName;
@property (nonatomic, readonly) NSNumber *minProcessedRate;
@property (nonatomic, retain) NSString *modelInputName;
@property (nonatomic, retain) NSString *modelOutputName;
@property (nonatomic, retain) NSString *negativesDatasetName;
@property (nonatomic, retain) NSString *negativesSubsetName;
@property (nonatomic, retain) NSNumber *normBinCount;
@property (nonatomic) unsigned long long numberOfEpochs;
@property (nonatomic, retain) NSString *optimizerName;
@property (nonatomic, retain) NSNumber *oversamplingRate;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSString *positivesDatasetName;
@property (nonatomic, retain) NSString *positivesSubsetName;
@property (nonatomic) bool shouldAddNoise;
@property (nonatomic) bool shouldEncrypt;
@property (nonatomic) bool shouldValidateModel;
@property (nonatomic, retain) NSNumber *totalNumberOfSamples;
@property (nonatomic, retain) NSString *trainingTask;
@property (nonatomic, readonly) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors;

+ (id)_firstAttachmentURLWithSuffixOfName:(id)arg1 attachments:(id)arg2 error:(id*)arg3;
+ (id)_generateEncryptionKeyFromICloudAggServiceKey:(id)arg1 error:(id*)arg2;
+ (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (bool)_isInternalDevice;
+ (id)_mediaAnalysisProgressForPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (id)_prepareDatasetForTrainingTask:(id)arg1 fingerprintVersion:(id)arg2 datasetPolicy:(id)arg3 labelPolicy:(id)arg4 positivesDatasetName:(id)arg5 positivesSubsetName:(id)arg6 negativesDatasetName:(id)arg7 negativesSubsetName:(id)arg8 totalNumberOfSamples:(id)arg9 oversamplingRate:(id)arg10 photoLibrary:(id)arg11 graphManager:(id)arg12 modelInputName:(id)arg13 labelName:(id)arg14 attachments:(id)arg15 transformersForFeatureExtractors:(id)arg16 augmenters:(id)arg17 filtersByDatasetName:(id)arg18 error:(id*)arg19;

- (void).cxx_destruct;
- (id)attachmentURLs;
- (id)augmenters;
- (id)clippingNorm;
- (id)datasetPolicy;
- (id)filtersByDatasetName;
- (id)fingerprintVersion;
- (id)graphManager;
- (id)iCloudAggServiceKey;
- (id)initWithAttachmentURLs:(id)arg1 layersToTrain:(id)arg2 numberOfEpochs:(unsigned long long)arg3 learningRate:(id)arg4 modelInputName:(id)arg5 modelOutputName:(id)arg6 lossName:(id)arg7 optimizerName:(id)arg8 iCloudAggServiceKey:(id)arg9 clippingNorm:(id)arg10 normBinCount:(id)arg11 trainingTask:(id)arg12 fingerprintVersion:(id)arg13 datasetPolicy:(id)arg14 labelPolicy:(id)arg15 positivesDatasetName:(id)arg16 positivesSubsetName:(id)arg17 negativesDatasetName:(id)arg18 negativesSubsetName:(id)arg19 totalNumberOfSamples:(id)arg20 oversamplingRate:(id)arg21 photoLibrary:(id)arg22 graphManager:(id)arg23 shouldAddNoise:(bool)arg24 shouldEncrypt:(bool)arg25 shouldValidateModel:(bool)arg26 minProcessedRate:(id)arg27 transformersForFeatureExtractors:(id)arg28 augmenters:(id)arg29 filtersByDatasetName:(id)arg30;
- (id)labelPolicy;
- (id)layersToTrain;
- (id)learningRate;
- (id)lossName;
- (id)minProcessedRate;
- (id)modelInputName;
- (id)modelOutputName;
- (id)negativesDatasetName;
- (id)negativesSubsetName;
- (id)normBinCount;
- (unsigned long long)numberOfEpochs;
- (id)optimizerName;
- (id)oversamplingRate;
- (id)photoLibrary;
- (id)positivesDatasetName;
- (id)positivesSubsetName;
- (id)runWithError:(id*)arg1;
- (void)setAttachmentURLs:(id)arg1;
- (void)setClippingNorm:(id)arg1;
- (void)setDatasetPolicy:(id)arg1;
- (void)setFingerprintVersion:(id)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setICloudAggServiceKey:(id)arg1;
- (void)setLabelPolicy:(id)arg1;
- (void)setLayersToTrain:(id)arg1;
- (void)setLearningRate:(id)arg1;
- (void)setLossName:(id)arg1;
- (void)setModelInputName:(id)arg1;
- (void)setModelOutputName:(id)arg1;
- (void)setNegativesDatasetName:(id)arg1;
- (void)setNegativesSubsetName:(id)arg1;
- (void)setNormBinCount:(id)arg1;
- (void)setNumberOfEpochs:(unsigned long long)arg1;
- (void)setOptimizerName:(id)arg1;
- (void)setOversamplingRate:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPositivesDatasetName:(id)arg1;
- (void)setPositivesSubsetName:(id)arg1;
- (void)setShouldAddNoise:(bool)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (void)setShouldValidateModel:(bool)arg1;
- (void)setTotalNumberOfSamples:(id)arg1;
- (void)setTrainingTask:(id)arg1;
- (bool)shouldAddNoise;
- (bool)shouldEncrypt;
- (bool)shouldValidateModel;
- (id)totalNumberOfSamples;
- (id)trainingTask;
- (id)transformersForFeatureExtractors;

@end