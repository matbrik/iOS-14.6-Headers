/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKApplicationStateMonitor : NSObject <LSApplicationWorkspaceObserverProtocol> {
    BKSApplicationStateMonitor * _applicationStateMonitor;
    <LSApplicationWorkspaceObserverProtocol> * _delegate;
}

@property (nonatomic, retain) BKSApplicationStateMonitor *applicationStateMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LSApplicationWorkspaceObserverProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationStateMonitor;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id /* block */)handler;
- (id)init;
- (bool)observingStateChangesForBundleID:(id)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)startObservingApplicationWorkspaceChanges;
- (void)startObservingStateChangesForBundleID:(id)arg1;

@end
