/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKLowPowerModeMonitor : _DKMonitor {
    NSNumber * _lowPowerModeStatus;
}

@property (nonatomic, retain) NSNumber *lowPowerModeStatus;

+ (id)_eventWithLowPowerModeState:(bool)arg1;
+ (id)eventStream;
+ (void)setLowPowerMode:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (void)lowPowerModeStateChanged:(id)arg1;
- (id)lowPowerModeStatus;
- (void)setLowPowerModeStatus:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateLowPowerMode;

@end