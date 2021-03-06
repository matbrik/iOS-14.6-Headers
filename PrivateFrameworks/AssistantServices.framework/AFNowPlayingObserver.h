/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFNowPlayingObserver : NSObject <MRNowPlayingControllerDelegate> {
    AFInstanceContext * _instanceContext;
    bool  _isObserving;
    NSHashTable * _listeners;
    MRNowPlayingController * _nowPlayingController;
    long long  _playbackState;
    NSObject<OS_dispatch_group> * _playbackStateGroup;
    long long  _playbackStateGroupDepth;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackState;
@property (readonly) Class superclass;

+ (id)defaultObserver;

- (void).cxx_destruct;
- (void)_beginGroup;
- (void)_checkAccessoryReady;
- (void)_endGroup;
- (void)_fetchNowPlayingAppPlaybackStateForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1;
- (void)_startListeningForAccessoryAvailability;
- (void)_startObservingNowPlayingAppPlaybackState;
- (void)_stopObservingNowPlayingAppPlaybackState;
- (void)_stoplisteningForAccessoryAvailability;
- (void)addListener:(id)arg1;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;
- (void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)controllerWillReloadForInvalidation:(id)arg1;
- (void)dealloc;
- (void)getNowPlayingInfoWithCompletion:(id /* block */)arg1;
- (void)getPlaybackStateWithCompletion:(id /* block */)arg1;
- (void)handleOutputContextDidChangeNotification;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2;
- (void)nowPlayingApplicationPlaybackStateChanged:(id)arg1;
- (void)nowPlayingInfoDidChange:(id)arg1;
- (long long)playbackState;
- (void)removeListener:(id)arg1;

@end
