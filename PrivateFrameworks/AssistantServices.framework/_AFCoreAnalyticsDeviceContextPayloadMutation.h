/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFCoreAnalyticsDeviceContextPayloadMutation : NSObject <AFCoreAnalyticsDeviceContextPayloadMutating> {
    NSNumber * _alarmFiring;
    AFCoreAnalyticsDeviceContextPayload * _baseModel;
    NSString * _contextIdentifier;
    NSNumber * _homeAnnouncementRecency;
    NSString * _homeAnnouncementState;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasNearbyProductType : 1; 
        unsigned int hasProximity : 1; 
        unsigned int hasAlarmFiring : 1; 
        unsigned int hasTimerFiring : 1; 
        unsigned int hasPlaybackState : 1; 
        unsigned int hasPlaybackRecency : 1; 
        unsigned int hasHomeAnnouncementState : 1; 
        unsigned int hasHomeAnnouncementRecency : 1; 
        unsigned int hasNearbyDevicesRequestIdentifier : 1; 
        unsigned int hasTargetedResult : 1; 
        unsigned int hasContextIdentifier : 1; 
    }  _mutationFlags;
    NSString * _nearbyDevicesRequestIdentifier;
    NSString * _nearbyProductType;
    NSNumber * _playbackRecency;
    NSString * _playbackState;
    NSString * _proximity;
    NSString * _targetedResult;
    NSNumber * _timerFiring;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAlarmFiring:(id)arg1;
- (void)setContextIdentifier:(id)arg1;
- (void)setHomeAnnouncementRecency:(id)arg1;
- (void)setHomeAnnouncementState:(id)arg1;
- (void)setNearbyDevicesRequestIdentifier:(id)arg1;
- (void)setNearbyProductType:(id)arg1;
- (void)setPlaybackRecency:(id)arg1;
- (void)setPlaybackState:(id)arg1;
- (void)setProximity:(id)arg1;
- (void)setTargetedResult:(id)arg1;
- (void)setTimerFiring:(id)arg1;

@end
