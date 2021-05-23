/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRecognizeDocumentElementsRequest : VNImageBasedRequest

@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements;
@property (readonly, copy) NSArray *results;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements;

+ (Class)configurationClass;

- (id)_applicableDetectorAndOptions:(id*)arg1 loadedInSession:(id)arg2 error:(id*)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)machineReadableCodeElements;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (id /* block */)resultsSortingComparator;
- (id)supportedIdentifiersAndReturnError:(id*)arg1;
- (id)textElements;
- (bool)warmUpSession:(id)arg1 error:(id*)arg2;

@end