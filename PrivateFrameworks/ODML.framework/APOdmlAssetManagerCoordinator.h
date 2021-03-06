/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ODML.framework/ODML
 */

@interface APOdmlAssetManagerCoordinator : NSObject {
    NSArray * _allNamespacesArray;
    NSDictionary * _assetManagers;
    NSObject * _refreshClientNotificationObserver;
    NSOperationQueue * _refreshClientQueue;
    APOdmlUnfairLock * _refreshTrialLock;
    bool  _respondToRefreshNotification;
    NSString * _runtimeNamespace;
    TRIClient * _trialClient;
}

@property (nonatomic, readonly) NSArray *allNamespacesArray;
@property (nonatomic, readonly) NSDictionary *assetManagers;
@property (nonatomic, retain) NSObject *refreshClientNotificationObserver;
@property (nonatomic, retain) NSOperationQueue *refreshClientQueue;
@property (nonatomic, retain) APOdmlUnfairLock *refreshTrialLock;
@property bool respondToRefreshNotification;
@property (nonatomic, readonly) NSString *runtimeNamespace;
@property (nonatomic, retain) TRIClient *trialClient;

+ (id)sharedAssetManagerCoordinator;

- (void).cxx_destruct;
- (id)allNamespacesArray;
- (id)assetManagerForNamespace:(id)arg1;
- (id)assetManagerForRuntime;
- (id)assetManagers;
- (id)init;
- (void)initializeAssetManagers;
- (id)refreshClientNotificationObserver;
- (id)refreshClientQueue;
- (void)refreshTrialClient;
- (id)refreshTrialLock;
- (bool)respondToRefreshNotification;
- (id)runtimeNamespace;
- (void)setRefreshClientNotificationObserver:(id)arg1;
- (void)setRefreshClientQueue:(id)arg1;
- (void)setRefreshTrialLock:(id)arg1;
- (void)setRespondToRefreshNotification:(bool)arg1;
- (void)setTrialClient:(id)arg1;
- (id)trialClient;

@end
