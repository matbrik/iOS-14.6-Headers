/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAggregateXPCMessageCountersLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {
    NSNumber * _count;
    NSString * _messageName;
    NSString * _peerInformation;
    NSString * _type;
}

@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) NSString *messageName;
@property (nonatomic, readonly) NSString *peerInformation;
@property (nonatomic, readonly) NSString *type;

+ (id)aggregateXPCCountersLogEventWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;

- (void).cxx_destruct;
- (id)__initWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;
- (id)count;
- (id)eventName;
- (id)init;
- (id)messageName;
- (id)peerInformation;
- (id)serializedEvent;
- (bool)shouldSubmitEvent;
- (id)type;

@end
