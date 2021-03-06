/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSAnalyticsUsageInfo : NSObject {
    unsigned long long  _desiredOutcomeCount;
    NSDate * _firstShownDate;
    NSString * _identifier;
    bool  _overrideHoldout;
    NSPredicate * _usagePredicate;
    NSString * _usageStream;
}

@property (nonatomic) unsigned long long desiredOutcomeCount;
@property (nonatomic, retain) NSDate *firstShownDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool overrideHoldout;
@property (nonatomic, retain) NSPredicate *usagePredicate;
@property (nonatomic, copy) NSString *usageStream;

- (void).cxx_destruct;
- (unsigned long long)desiredOutcomeCount;
- (id)firstShownDate;
- (id)identifier;
- (bool)overrideHoldout;
- (void)setDesiredOutcomeCount:(unsigned long long)arg1;
- (void)setFirstShownDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOverrideHoldout:(bool)arg1;
- (void)setUsagePredicate:(id)arg1;
- (void)setUsageStream:(id)arg1;
- (id)usagePredicate;
- (id)usageStream;

@end
