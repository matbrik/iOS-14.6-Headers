/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
 */

@interface RMAudioListenerPoseManager : NSObject {
    RMConnectionClient * _connectionClient;
    bool  _isReceivingRelatveData;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _relativeDataCallback;
    NSDictionary * _tempestOptions;
}

@property (nonatomic, retain) NSDictionary *tempestOptions;

- (void).cxx_destruct;
- (void)_startReceivingAudioListenerPoseUpdatesInternal:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)setTempestOptions:(id)arg1;
- (void)startReceivingAudioListenerPoseUpdates:(id /* block */)arg1;
- (void)stopReceivingAudioListenerPoseUpdates;
- (id)tempestOptions;

@end