/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings {
    bool  _callConnected;
    unsigned long long  _preferredHardwareButtonEventTypes;
    int  _preferredStatusBarStyleOverridesToSuppress;
    bool  _shouldBecomeVisibleWhenWakingDisplay;
    bool  _supportsDeviceLockActions;
    bool  _transientOverlayHomeIndicatorAutoHidden;
}

@property (getter=isCallConnected, nonatomic) bool callConnected;
@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) int preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic) bool shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic) bool supportsDeviceLockActions;
@property (nonatomic) bool transientOverlayHomeIndicatorAutoHidden;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isCallConnected;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned long long)preferredHardwareButtonEventTypes;
- (int)preferredStatusBarStyleOverridesToSuppress;
- (void)setCallConnected:(bool)arg1;
- (void)setHomeIndicatorAutoHidden:(bool)arg1;
- (void)setPreferredHardwareButtonEventTypes:(unsigned long long)arg1;
- (void)setPreferredStatusBarStyleOverridesToSuppress:(int)arg1;
- (void)setShouldBecomeVisibleWhenWakingDisplay:(bool)arg1;
- (void)setSupportsDeviceLockActions:(bool)arg1;
- (void)setTransientOverlayHomeIndicatorAutoHidden:(bool)arg1;
- (bool)shouldBecomeVisibleWhenWakingDisplay;
- (bool)supportsDeviceLockActions;
- (bool)transientOverlayHomeIndicatorAutoHidden;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end