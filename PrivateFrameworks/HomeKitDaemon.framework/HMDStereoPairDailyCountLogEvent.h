/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStereoPairDailyCountLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {
    unsigned long long  _smallHomePodPairCount;
}

@property (readonly) unsigned long long smallHomePodPairCount;

- (id)eventName;
- (id)initWithSmallHomePodCount:(unsigned long long)arg1;
- (id)serializedEvent;
- (unsigned long long)smallHomePodPairCount;

@end