/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWUBProcessorController : BWStillImageProcessorController <BWNoiseReductionAndFusionProcessorController, BWUBProcessorInputDelegate, UBProcessorDelegate> {
    NSDictionary * _adaptiveBracketingCaptureParametersByPortType;
    BWUBProcessorControllerConfiguration * _configuration;
    BWUBProcessorRequest * _currentRequest;
    UBPrepareDescriptor * _deepFusionPrepareDescriptor;
    struct opaqueCMFormatDescription { } * _gainMapFormatDescription;
    struct opaqueCMFormatDescription { } * _inferenceInputFormatDescription;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    UBPrepareDescriptor * _prepareDescriptor;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
    NSSet * _supportedPortTypes;
    Class  _ubDeepFusionOutputClass;
    Class  _ubFusionOutputClass;
    UBProcessor * _ubProcessor;
    Class  _ubProgressiveBracketingParametersClass;
    Class  _ubProgressiveBracketingStatisticsClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)lazilyAllocatesDeepFusionOutputBuffers;

- (int)_loadSetupAndPrepareUBProcessor;
- (struct opaqueCMSampleBuffer { }*)_newOutputSampleBufferWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 formatDescriptionInOut:(const struct opaqueCMFormatDescription {}**)arg3 metadataToMerge:(id)arg4;
- (void)_processDeepFusion;
- (void)_processLowLightFusion;
- (void)_processSingleImage;
- (void)_processUBFusion;
- (void)_processUBOriginalImage;
- (void)_resetProcessor;
- (void)_serviceNextRequest;
- (void)_setupProcessor;
- (int)_setupProcessorForProcessingType:(unsigned int)arg1;
- (int)_singleImageProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 sampleBufferOut:(struct opaqueCMSampleBuffer {}**)arg2;
- (void)_updateStateIfNeeded;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(bool)arg3 detectedObjects:(id)arg4;
- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(bool)arg3 processOriginalImage:(bool)arg4 clientBracketSequenceNumber:(int)arg5;
- (bool)finishProcessingCurrentInputNow;
- (id)initWithConfiguration:(id)arg1;
- (void)input:(id)arg1 addFrame:(struct opaqueCMSampleBuffer { }*)arg2 isReferenceFrame:(bool)arg3;
- (void)inputReceivedAllFrames:(id)arg1;
- (void)processor:(id)arg1 didCompleteProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(id)arg1 didEnqueueProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(id)arg1 didSelectFusionMode:(int)arg2;
- (void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3 outputMetadata:(id)arg4 error:(int)arg5;
- (id)processorGetInferenceResults:(id)arg1;
- (unsigned long long)type;

@end