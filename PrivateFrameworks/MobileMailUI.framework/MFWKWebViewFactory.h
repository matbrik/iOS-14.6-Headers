/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@interface MFWKWebViewFactory : NSObject <EFLoggable> {
    EFQueue * _preallocatedWebViews;
    WKProcessPool * _processPool;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EFQueue *preallocatedWebViews;
@property (nonatomic, retain) WKProcessPool *processPool;
@property (readonly) Class superclass;

+ (id)log;
+ (id)sharedWebViewFactory;

- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)_instantiateWebView;
- (id)init;
- (void)preallocateWebViewIfNeeded;
- (void)preallocateWebViews;
- (id)preallocatedWebViews;
- (id)processPool;
- (void)setPreallocatedWebViews:(id)arg1;
- (void)setProcessPool:(id)arg1;
- (id)webView;

@end
