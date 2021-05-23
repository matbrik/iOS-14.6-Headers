/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (nonatomic, copy) NSArray *autoFavoriteTagIDs;
@property (nonatomic, copy) FCBundleSubscription *bundleSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) <FCDerivedPersonalizationData><NSCoding> *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *mutedTagIDs;
@property (nonatomic, copy) NSNumber *onboardingVersion;
@property (nonatomic, copy) NSSet *purchasedTagIDs;
@property (nonatomic, copy) NSArray *rankedAllSubscribedTagIDs;
@property (nonatomic, copy) NSDictionary *recentlyReadHistoryItems;
@property (nonatomic, copy) NSArray *recentlySeenHistoryItems;
@property (readonly) Class superclass;

- (void)_deleteObjectsForOldKeys;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setBundleSubscription:(id)arg1;
- (void)setDerivedPersonalizationData:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (void)setOnboardingVersion:(id)arg1;
- (void)setPurchasedTagIDs:(id)arg1;
- (void)setRankedAllSubscribedTagIDs:(id)arg1;
- (void)setRecentlyReadHistoryItems:(id)arg1;
- (void)setRecentlySeenHistoryItems:(id)arg1;

@end