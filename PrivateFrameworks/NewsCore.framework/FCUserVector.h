/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCUserVector : NSObject <FCUserVectorProvider> {
    NSOrderedSet * _bundleChannelIDs;
    NSString * _bundleChannelIDsVersion;
    NSURL * _modelURL;
    FCPersonalizationTreatment * _personalizationTreatment;
    FCSubscriptionList * _subscriptionList;
    NSURL * _whitelistURL;
}

@property (nonatomic, retain) NSOrderedSet *bundleChannelIDs;
@property (nonatomic, retain) NSString *bundleChannelIDsVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic, retain) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, retain) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *whitelistURL;

- (void).cxx_destruct;
- (id)bundleChannelIDs;
- (id)bundleChannelIDsVersion;
- (id)bundleSubscribedVector;
- (id)computePersonalizationVectorWithBaselineAggregate:(id)arg1 allAggregates:(id)arg2 options:(long long)arg3;
- (id)findVector:(id)arg1 closestToBins:(id)arg2;
- (id)init;
- (id)initWithWhitelistURL:(id)arg1 modelURL:(id)arg2 personalizationTreatment:(id)arg3 bundleChannelIDs:(id)arg4 bundleChannelIDsVersion:(id)arg5 subscriptionList:(id)arg6;
- (id)modelURL;
- (id)personalizationTreatment;
- (void)setBundleChannelIDs:(id)arg1;
- (void)setBundleChannelIDsVersion:(id)arg1;
- (void)setModelURL:(id)arg1;
- (void)setPersonalizationTreatment:(id)arg1;
- (void)setSubscriptionList:(id)arg1;
- (void)setWhitelistURL:(id)arg1;
- (id)subscribedBundleChannelIDs;
- (id)subscriptionList;
- (id)whitelistURL;

@end
