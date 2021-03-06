/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer {
    HMDEventCountersManager * _eventCountersManager;
}

@property (nonatomic, readonly) HMDEventCountersManager *eventCountersManager;

- (void).cxx_destruct;
- (void)_handleCameraRecordingReachabilityLogEvent:(id)arg1;
- (void)_handleReachabiltiyAddRemoveEvent:(id)arg1;
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1;
- (id)eventCountersManager;
- (id)initWithSupportedEventClasses:(id)arg1 context:(id)arg2;
- (id)initWithSupportedEventClasses:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3;
- (void)processLogEvent:(id)arg1;

@end
