/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDProcessLaunchInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {
    NSString * _dataSyncState;
    double  _timeSinceLaunchToDataSyncStateGood;
    double  _timeSincePreviousProcessLaunch;
}

@property (nonatomic, readonly, copy) NSString *dataSyncState;
@property (readonly) double timeSinceLaunchToDataSyncStateGood;
@property (readonly) double timeSincePreviousProcessLaunch;

- (void).cxx_destruct;
- (id)dataSyncState;
- (id)eventName;
- (id)initWithDataSyncState:(id)arg1 timeSincePreviousProcessLaunch:(double)arg2 timeSinceLaunchToDataSyncStateGood:(double)arg3;
- (id)serializedEvent;
- (double)timeSinceLaunchToDataSyncStateGood;
- (double)timeSincePreviousProcessLaunch;

@end
