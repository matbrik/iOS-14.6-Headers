/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ODCurareEvaluationAndReporting.framework/ODCurareEvaluationAndReporting
 */

@interface ODCurareEvaluationAndReportingModuleInternal : NSObject {
    void allEvaluationResults;
    void allUserDataDictionaryAdapted;
    void allUserDataDictionaryDefault;
    void boundaryList;
    void clientBundleIdentifier;
    void dataProviderInstance;
    void evaluationInstance;
    void generatedLatestBoundary;
    void modelStore;
    void personalizationInstance;
    void personalizationResult;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  personalizedModelPath;
    void pruningPolicy;
    void resultMetadataDictionary;
    void shouldReportFailure;
    void skipAdaptation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  temporaryDirectory;
    void userDefaults;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)evaluateDefaultModelWithDefaultModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id*)arg3;
- (id)getEvaluationResults;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 dataProviderInstance:(id)arg2 evaluationInstance:(id)arg3 personalizationInstance:(id)arg4 pruningPolicy:(id)arg5 error:(id*)arg6;
- (id)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)arg1 modelConfiguration:(id)arg2 error:(id*)arg3;

@end
