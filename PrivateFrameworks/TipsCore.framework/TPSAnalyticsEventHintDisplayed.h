/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSAnalyticsEventHintDisplayed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    NSString * _context;
    unsigned long long  _displayCount;
    unsigned long long  _displayType;
    TPSExperiment * _experiment;
    bool  _overrideHoldout;
    unsigned long long  _usageFlags;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) TPSExperiment *experiment;
@property (nonatomic) bool overrideHoldout;
@property (nonatomic, readonly) unsigned long long usageFlags;

+ (id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 usageFlags:(unsigned long long)arg5 experiment:(id)arg6 overrideHoldout:(bool)arg7 date:(id)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 usageFlags:(unsigned long long)arg5 experiment:(id)arg6 overrideHoldout:(bool)arg7 date:(id)arg8;
- (id)bundleID;
- (id)contentID;
- (id)context;
- (unsigned long long)displayCount;
- (unsigned long long)displayType;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experiment;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (bool)overrideHoldout;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayCount:(unsigned long long)arg1;
- (void)setOverrideHoldout:(bool)arg1;
- (unsigned long long)usageFlags;

@end
