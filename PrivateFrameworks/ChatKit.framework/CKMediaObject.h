/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMediaObject : NSObject <QLPreviewItem> {
    bool  _allowAutoplay;
    NSURL * _cachedHighQualityFileURL;
    bool  _cachedValidPreviewExists;
    bool  _forceInlinePreviewGeneration;
    NSObject<OS_dispatch_group> * _highQualityFetchInProgressGroup;
    bool  _isFromMe;
    unsigned long long  _oopPreviewRequestCount;
    bool  _suppressPreviewForUnknownSender;
    NSDate * _time;
    UITraitCollection * _transcriptTraitCollection;
    <CKFileTransfer> * _transfer;
}

@property (nonatomic, readonly, copy) NSString *UTIType;
@property (nonatomic) bool allowAutoplay;
@property (nonatomic, retain) NSURL *cachedHighQualityFileURL;
@property (nonatomic) bool cachedValidPreviewExists;
@property (nonatomic, readonly) bool canShareItem;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic) bool forceInlinePreviewGeneration;
@property (nonatomic, readonly) bool generatePreviewOutOfProcess;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *highQualityFetchInProgressGroup;
@property (nonatomic) bool isFromMe;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) NSString *metricsCollectorMediaType;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly) bool needsAnimation;
@property (nonatomic) unsigned long long oopPreviewRequestCount;
@property (nonatomic, readonly, copy) NSString *previewFilenameExtension;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly, copy) id previewMetadata;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressPreviewForUnknownSender;
@property (nonatomic, retain) NSDate *time;
@property (nonatomic, readonly, copy) NSDictionary *transcoderUserInfo;
@property (nonatomic, retain) UITraitCollection *transcriptTraitCollection;
@property (nonatomic, retain) <CKFileTransfer> *transfer;
@property (nonatomic, readonly, copy) NSString *transferGUID;
@property (nonatomic, readonly) bool validatePreviewFormat;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (bool)canGeneratePreviewInMVSHostProcess;
+ (id)fallbackFilenamePrefix;
+ (id)iconCache;
+ (bool)isPreviewable;
+ (id)mediaClasses;
+ (bool)shouldScaleUpPreview;
+ (bool)shouldShadePreview;
+ (bool)shouldUseTranscoderGeneratedPreviewSize;

- (void).cxx_destruct;
- (id)ASTCDataFromImage:(id)arg1;
- (id)JPEGDataFromImage:(id)arg1;
- (id)UTIType;
- (id)_balloonViewForClassWithWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)_composeImageForBalloonView:(id)arg1 colorType:(BOOL)arg2;
- (struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })_previewConstraintsForWidth:(double)arg1;
- (id)_qlThumbnailGeneratorSharedGenerator;
- (void)_sampleImageEdges:(id)arg1 usingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4;
- (bool)_shouldDenyUTITypeFromRichIcon;
- (id)_transcodeControllerSharedInstance;
- (bool)allowAutoplay;
- (id)attachmentSummary:(unsigned long long)arg1;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })bbSize;
- (void)cacheAndPersistPreview:(id)arg1 orientation:(BOOL)arg2;
- (id)cachedHighQualityFileURL;
- (bool)cachedValidPreviewExists;
- (bool)canExport;
- (bool)canShareItem;
- (Class)coloredBalloonViewClass;
- (id)composeImagesForEntryContentViewWidth:(double)arg1;
- (id)data;
- (void)dealloc;
- (double)defaultPreviewWidth;
- (id)description;
- (id)downloadProgressImage;
- (id)downloadProgressString;
- (void)export:(id)arg1;
- (void)fetchHighQualityFile:(id /* block */)arg1;
- (id)fileManager;
- (id)fileSizeString;
- (id)fileURL;
- (id)filename;
- (bool)forceInlinePreviewGeneration;
- (id)generateIconWithURL:(id)arg1;
- (void)generateOOPPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)highQualityFetchInProgressGroup;
- (id)icon;
- (id)image:(id)arg1 withBackgroundColor:(id)arg2;
- (id)initWithTransfer:(id)arg1 isFromMe:(bool)arg2 suppressPreview:(bool)arg3 forceInlinePreview:(bool)arg4;
- (id)initWithTransfer:(id)arg1 isFromMe:(bool)arg2 suppressPreview:(bool)arg3 forceInlinePreview:(bool)arg4 allowAutoplay:(bool)arg5;
- (Class)inlineStickerBalloonViewClass;
- (id)invisibleInkEffectImageWithPreview:(id)arg1;
- (bool)isDirectory;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isPreviewable;
- (bool)isPromisedItem;
- (id)location;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (id)mimeType;
- (bool)needsAnimation;
- (unsigned long long)oopPreviewRequestCount;
- (id)pasteboardItemProvider;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2 generateIntermediaries:(bool)arg3;
- (id)previewDispatchCache;
- (id)previewFilenameExtension;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemURL;
- (id)previewMetadata;
- (void)prewarmPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)richIcon;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)setAllowAutoplay:(bool)arg1;
- (void)setCachedHighQualityFileURL:(id)arg1;
- (void)setCachedValidPreviewExists:(bool)arg1;
- (void)setForceInlinePreviewGeneration:(bool)arg1;
- (void)setHighQualityFetchInProgressGroup:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setOopPreviewRequestCount:(unsigned long long)arg1;
- (void)setSuppressPreviewForUnknownSender:(bool)arg1;
- (void)setTime:(id)arg1;
- (void)setTranscriptTraitCollection:(id)arg1;
- (void)setTransfer:(id)arg1;
- (bool)shouldBeQuickLooked;
- (bool)shouldShowDisclosure;
- (bool)shouldShowViewer;
- (id)subtitle;
- (bool)suppressPreviewForUnknownSender;
- (id)time;
- (id)title;
- (struct CGSize { double x1; double x2; })transcoderGeneratedSizeForConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg1;
- (bool)transcoderPreviewGenerationFailed;
- (id)transcoderUserInfo;
- (struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })transcodingPreviewConstraints;
- (struct CGSize { double x1; double x2; })transcodingPreviewPxSize;
- (id)transcriptTraitCollection;
- (id)transfer;
- (id)transferGUID;
- (bool)validPreviewExistsAtURL:(id)arg1;
- (bool)validatePreviewFormat;

@end