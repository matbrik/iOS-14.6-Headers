/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
 */

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate> {
    NSString * _backgroundId;
    bool  _checkOverlay;
    bool  _cleanStorage;
    bool  _downloadFailure;
    NSMutableDictionary * _downloads;
    NSMutableDictionary * _inProgress;
    DEManifest * _manifest;
    id /* block */  _postSyncBlock;
    NSString * _priorBackgroundId;
    bool  _success;
    DEUpdater * _updater;
    NSURLSession * _urlSession;
}

@property (nonatomic, retain) NSString *backgroundId;
@property (nonatomic) bool checkOverlay;
@property (nonatomic) bool cleanStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool downloadFailure;
@property (nonatomic, retain) NSMutableDictionary *downloads;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *inProgress;
@property (nonatomic, retain) DEManifest *manifest;
@property (nonatomic, copy) id /* block */ postSyncBlock;
@property (nonatomic, retain) NSString *priorBackgroundId;
@property (nonatomic) bool success;
@property (readonly) Class superclass;
@property (nonatomic, retain) DEUpdater *updater;
@property (nonatomic, retain) NSURLSession *urlSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)backgroundId;
- (void)backgroundSync;
- (bool)checkOverlay;
- (void)checkOverlay:(id)arg1 overlayChecks:(id)arg2 workArray:(id)arg3 postFileBlock:(id /* block */)arg4;
- (void)clean;
- (bool)cleanStorage;
- (void)cleanStorage:(id)arg1 removes:(id)arg2 workArray:(id)arg3 postFileBlock:(id /* block */)arg4;
- (void)cleanupURLSession;
- (void)directoryClean:(id /* block */)arg1;
- (void)directorySync:(id /* block */)arg1;
- (void)doIfLatest:(id /* block */)arg1 inBackground:(bool)arg2 elseDo:(id /* block */)arg3;
- (bool)downloadFailure;
- (id)downloads;
- (void)handlePostSyncBlock;
- (id)inProgress;
- (id)init;
- (id)initWithManifest:(id)arg1 updater:(id)arg2;
- (id)initWithManifest:(id)arg1 updater:(id)arg2 backgroundId:(id)arg3 priorBackgroundId:(id)arg4;
- (bool)isLatest;
- (id)manifest;
- (id /* block */)postSyncBlock;
- (id)priorBackgroundId;
- (void)setBackgroundId:(id)arg1;
- (void)setCheckOverlay:(bool)arg1;
- (void)setCleanStorage:(bool)arg1;
- (void)setDownloadFailure:(bool)arg1;
- (void)setDownloads:(id)arg1;
- (void)setInProgress:(id)arg1;
- (void)setManifest:(id)arg1;
- (void)setPostSyncBlock:(id /* block */)arg1;
- (void)setPriorBackgroundId:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setUpdater:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (bool)startDownload:(id)arg1;
- (bool)success;
- (void)sync;
- (void)sync:(id /* block */)arg1;
- (id)updater;
- (id)urlSession;

@end
