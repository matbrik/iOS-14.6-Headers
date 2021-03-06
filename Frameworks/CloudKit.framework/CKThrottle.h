/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKThrottle : NSObject {
    unsigned long long  _allowedRequestCount;
    NSString * _bundleID;
    NSString * _containerIdentifier;
    unsigned long long  _currentRequestWindowIndex;
    long long  _databaseScope;
    NSString * _defaultsKey;
    NSDate * _expirationDate;
    NSString * _functionName;
    unsigned long long  _intervalLengthSeconds;
    NSString * _label;
    NSString * _operationGroupNamePrefix;
    int  _operationType;
    unsigned long long  _repeatEverySeconds;
    unsigned long long  _sentRequestCount;
    NSString * _serviceName;
    NSDate * _throttleStartDate;
    NSString * _zoneName;
}

@property (nonatomic) unsigned long long allowedRequestCount;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic) unsigned long long currentRequestWindowIndex;
@property (nonatomic) long long databaseScope;
@property (nonatomic, copy) NSString *defaultsKey;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic) unsigned long long intervalLengthSeconds;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *operationGroupNamePrefix;
@property (nonatomic) int operationType;
@property (nonatomic) unsigned long long repeatEverySeconds;
@property (nonatomic) unsigned long long sentRequestCount;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, retain) NSDate *throttleStartDate;
@property (nonatomic, copy) NSString *zoneName;

+ (id)CKStatusReportArray;
+ (bool)addThrottle:(id)arg1;
+ (id)allThrottles;
+ (id)enforcedThrottleForCriteria:(id)arg1 willSendRequest:(bool)arg2 outThrottleError:(id*)arg3;
+ (void)locked_removeThrottles:(id)arg1;
+ (void)removeThrottle:(id)arg1;
+ (void)removeThrottles:(id)arg1;
+ (void)resetThrottles;
+ (void)setThrottleList:(id)arg1;
+ (void)setThrottleObserver:(id)arg1;
+ (void)throttleWillBeRemoved:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)allowedRequestCount;
- (bool)appliesToCriteria:(id)arg1;
- (id)bundleID;
- (bool)canTestInClientProcess;
- (id)containerIdentifier;
- (unsigned long long)currentRequestWindowIndex;
- (long long)databaseScope;
- (id)defaultsKey;
- (double)delayUntilNextOperationAllowed;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (id)functionName;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)intervalLengthSeconds;
- (bool)isExpired;
- (id)label;
- (id)operationGroupNamePrefix;
- (int)operationType;
- (unsigned long long)repeatEverySeconds;
- (unsigned long long)sentRequestCount;
- (id)serviceName;
- (void)setAllowedRequestCount:(unsigned long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setCurrentRequestWindowIndex:(unsigned long long)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (void)setDefaultsKey:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setIntervalLengthSeconds:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOperationGroupNamePrefix:(id)arg1;
- (void)setOperationType:(int)arg1;
- (void)setRepeatEverySeconds:(unsigned long long)arg1;
- (void)setSentRequestCount:(unsigned long long)arg1;
- (void)setServiceName:(id)arg1;
- (void)setThrottleStartDate:(id)arg1;
- (void)setThrottles:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)takeValuesFromThrottleDictionary:(id)arg1;
- (void)throttleDataWasChanged;
- (id)throttleDictionaryBlockingUntilNextRequestWindow;
- (id)throttleStartDate;
- (id)zoneName;

@end
