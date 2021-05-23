/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMemoryUtilizationTracker : NSObject <HMFLogging> {
    HMFUnfairLock * _lock;
    NSMutableArray * _memoryUseSnapshots;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)memoryTracker;

- (void).cxx_destruct;
- (id)__init;
- (id)description;
- (id)dumpState;
- (id)init;
- (void)log;
- (void)reset;
- (id)snapshots;
- (void)trackMemoryUsageWithReason:(id)arg1;

@end