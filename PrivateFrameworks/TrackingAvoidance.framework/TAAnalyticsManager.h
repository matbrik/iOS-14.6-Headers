/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAAnalyticsManager : NSObject <TAPersistenceManagerObserver, TATrackingAvoidanceServiceObserver> {
    TAAnalyticsManagerSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_convertDetection:(id)arg1 service:(id)arg2;
+ (id)_convertScanRequest:(id)arg1 service:(id)arg2;

- (void).cxx_destruct;
- (void)_submitEvent:(id)arg1 content:(id)arg2;
- (void)didReadFromURL:(id)arg1 bytes:(unsigned long long)arg2;
- (void)didWriteToURL:(id)arg1 bytes:(unsigned long long)arg2;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)trackingAvoidanceService:(id)arg1 didFindSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didStageSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didUpdateSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 requestingAdditionalInformation:(id)arg2;

@end