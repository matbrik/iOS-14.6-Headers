/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ODML.framework/ODML
 */

@interface APOdmlAppUsageVectorManager : NSObject {
    NSMutableDictionary * _adamIDtoBundleID;
    NSArray * _appUsageEvents;
    APOdmlVector * _appUsageVector;
    double  _exponentialDecayConstant;
    double  _lookbackPeriod;
    long long  _maxQueryElements;
    APOdmlUnfairLock * _setVectorAndWeightLock;
    APOdmlXpcLifecycleHandler * _task;
    double  _vectorWeightTotal;
    NSString * _version;
    bool  _weightByDuration;
}

@property (nonatomic, retain) NSMutableDictionary *adamIDtoBundleID;
@property (nonatomic, retain) NSArray *appUsageEvents;
@property (nonatomic, retain) APOdmlVector *appUsageVector;
@property (nonatomic) double exponentialDecayConstant;
@property (nonatomic) double lookbackPeriod;
@property (nonatomic) long long maxQueryElements;
@property (nonatomic, retain) APOdmlUnfairLock *setVectorAndWeightLock;
@property (nonatomic, retain) APOdmlXpcLifecycleHandler *task;
@property (nonatomic) double vectorWeightTotal;
@property (nonatomic, retain) NSString *version;
@property (nonatomic) bool weightByDuration;

- (void).cxx_destruct;
- (id)adamIDForBundleID:(id)arg1;
- (id)adamIDtoBundleID;
- (id)appUsageEvents;
- (id)appUsageEventsBetween:(id)arg1 and:(id)arg2 withLimit:(unsigned long long)arg3;
- (id)appUsageEventsForLookbackPeriod:(double)arg1;
- (id)appUsageVector;
- (void)buildBundleIDtoAdamIDCache:(id)arg1;
- (id)bundleIdForAdamId:(id)arg1;
- (double)exponentialDecayConstant;
- (id)initWithVersion:(id)arg1 lookbackPeriod:(id)arg2 maxQueryElements:(id)arg3 task:(id)arg4 exponentialDecayConstant:(id)arg5 weightByDuration:(id)arg6;
- (double)lookbackPeriod;
- (long long)maxQueryElements;
- (id)normalizedAppUsageVector;
- (id)pullUsageEvents;
- (void)setAdamIDtoBundleID:(id)arg1;
- (void)setAppUsageEvents:(id)arg1;
- (void)setAppUsageVector:(id)arg1;
- (void)setExponentialDecayConstant:(double)arg1;
- (void)setLookbackPeriod:(double)arg1;
- (void)setMaxQueryElements:(long long)arg1;
- (void)setSetVectorAndWeightLock:(id)arg1;
- (void)setTask:(id)arg1;
- (id)setVectorAndWeightLock;
- (void)setVectorWeightTotal:(double)arg1;
- (void)setVersion:(id)arg1;
- (void)setWeightByDuration:(bool)arg1;
- (id)task;
- (void)updateUsageVectorsWithAppVector:(id)arg1;
- (id)updateVector:(id)arg1 withVector:(id)arg2 usingWeight:(double)arg3;
- (double)vectorWeightTotal;
- (id)version;
- (bool)weightByDuration;
- (double)weightForEvents:(id)arg1;

@end
