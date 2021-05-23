/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {
    NSPointerArray * _internalAnalyzers;
    HMFUnfairLock * _lock;
    HMFTimer * _tick;
    long long  _usageLevel;
    HMISystemResourceUsageMonitor * _usageMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_compactInternalAnalyzers;
- (id)_getAnalyzers;
- (void)_logState;
- (void)_updateAnalyzer:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)init;
- (void)registerAnalyzer:(id)arg1;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (void)timerDidFire:(id)arg1;

@end