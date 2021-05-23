/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMDLogEvent <HMDAWDLogEvent> {
    bool  _enabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithAutomaticUpdateEnabled:(bool)arg1;

- (unsigned int)AWDMessageType;
- (bool)isEnabled;
- (id)metricForAWD;
- (void)setEnabled:(bool)arg1;

@end