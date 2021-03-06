/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    <SBBiometricUnlockBehaviorConfigurationDelegate> * _behaviorConfigurationDelegate;
    bool  _fingerOffSinceWake;
    bool  _fingerOn;
    bool  _hasVisibleContentToReveal;
    BSTimer * _minTouchIDTimer;
    BSTimer * _restToOpenTimer;
}

- (void).cxx_destruct;
- (void)_cancelMinTouchIDTimer;
- (void)_cancelRestToOpenTimer;
- (void)_evaluateRestToOpenTimer;
- (bool)_isRestToOpenAvailable;
- (void)_startRestToOpenTimer;
- (void)_startRestToOpenTimerWithDuration:(double)arg1;
- (bool)bioUnlock;
- (id)description;
- (void)fingerOff;
- (void)fingerOn;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1;
- (void)lockButtonDown;
- (void)screenOff;
- (void)screenOn;
- (id)succinctDescriptionBuilder;

@end
