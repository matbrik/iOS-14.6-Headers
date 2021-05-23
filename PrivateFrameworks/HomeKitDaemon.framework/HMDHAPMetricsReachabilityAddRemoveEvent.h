/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetricsReachabilityAddRemoveEvent : HMDHAPMetrics <HMDCoreAnalyticsLogging> {
    unsigned long long  _addRemoveEvent;
    NSNumber * _linkType;
}

@property (nonatomic, readonly) unsigned long long addRemoveEvent;
@property (nonatomic, readonly) NSNumber *linkType;

- (void).cxx_destruct;
- (unsigned long long)addRemoveEvent;
- (id)eventName;
- (id)initWithAccessory:(id)arg1 hmdAddRemoveEvent:(unsigned long long)arg2 forLinkType:(id)arg3;
- (id)linkType;
- (id)serializedEvent;

@end