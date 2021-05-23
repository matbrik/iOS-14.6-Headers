/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXInteractionEventProviderForContactMetrics : NSObject <ATXModeEntityEventProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)aggregationEventsFromEvent:(id)arg1;
- (id)biomePublisherWithBookmark:(id)arg1;
- (id)contactEntityFromEvent:(id)arg1;
- (id)contactEntityFromInstantMessagingInteraction:(id)arg1;
- (id)dateIntervalFromEvent:(id)arg1;
- (id)description;
- (id)eventsFromPublisher;
- (id)groupContactEntityFromEvent:(id)arg1;
- (id)groupDisplayNameAndIdentifier:(id)arg1;
- (bool)isEventFromProvider:(id)arg1;
- (bool)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)arg1 aggregationEvent:(id)arg2 isLocalToMode:(bool)arg3;

@end