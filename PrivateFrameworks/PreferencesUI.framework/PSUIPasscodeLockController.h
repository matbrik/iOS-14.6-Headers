/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPasscodeLockController : PSListController <DevicePINControllerDelegate, HMHomeManagerDelegate, SFAutoUnlockManagerDelegate> {
    SFAutoUnlockManager * _autoUnlockManager;
    NSArray * _autoUnlockSpecifiers;
    bool  _canUnlockWatch;
    HMHomeManager * _homeManager;
    int  _policyDictatedMaxFailedAttempts;
    PSSpecifier * _voiceDialGroupSpecifier;
    PSSpecifier * _voiceDialSpecifier;
}

@property (nonatomic, retain) SFAutoUnlockManager *autoUnlockManager;
@property (nonatomic, retain) NSArray *autoUnlockSpecifiers;
@property (nonatomic) bool canUnlockWatch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (readonly) Class superclass;

+ (long long)passcodeGracePeriod;

- (void).cxx_destruct;
- (void)_didUpdatePasscode:(id)arg1;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)arg1;
- (id)_makeWipeDeviceGroupFooter;
- (void)_setWipeEnabled:(bool)arg1;
- (void)_showDeleteSavedFingerprintsAlert;
- (void)_updateGracePeriodForSpecifier:(id)arg1;
- (id)assistantUnderLockEnabled:(id)arg1;
- (id)autoUnlockEnabled:(id)arg1;
- (id)autoUnlockManager;
- (id)autoUnlockSpecifiers;
- (bool)canBeShownFromSuspendedState;
- (bool)canUnlockWatch;
- (void)dealloc;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)didAcceptRemovePIN;
- (void)disablePasscodeRequiredSpecifiers:(id)arg1;
- (void)enableAutoUnlockForDevice:(id)arg1 ofSpecifier:(id)arg2;
- (id)enabledInLockScreen:(id)arg1;
- (id)enabledInLockScreenForUSB:(id)arg1;
- (unsigned long long)errorActionWithAutoUnlockError:(id)arg1;
- (long long)fingerprintCount;
- (id)graceValue:(id)arg1;
- (id)homeControlAccessAllowedWhenLocked:(id)arg1;
- (id)homeManager;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(bool)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (bool)isAssistantRestricted;
- (bool)isEnrollenInFaceID;
- (bool)isPasscodeSet;
- (bool)isVoiceDialRestricted;
- (bool)isWalletRestricted;
- (void)manager:(id)arg1 didEnableDevice:(id)arg2;
- (void)manager:(id)arg1 enablingLockedDevice:(id)arg2;
- (void)manager:(id)arg1 failedToEnableDevice:(id)arg2 error:(id)arg3;
- (void)presentAppleIDAuthenticationController;
- (void)presentAutoUnlockEnableFailureAlertWithDevice:(id)arg1 withError:(id)arg2;
- (void)profileNotification:(id)arg1;
- (void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setAutoUnlockEnabled:(id)arg1 specifier:(id)arg2;
- (void)setAutoUnlockManager:(id)arg1;
- (void)setAutoUnlockSpecifiers:(id)arg1;
- (void)setCanUnlockWatch:(bool)arg1;
- (void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2;
- (void)setEnabledInLockScreenForUSB:(id)arg1 specifier:(id)arg2;
- (void)setGraceValue:(id)arg1 specifier:(id)arg2;
- (void)setHomeControlAccessAllowedWhenLocked:(id)arg1 specifier:(id)arg2;
- (void)setHomeManager:(id)arg1;
- (void)setVoiceDial:(id)arg1 specifier:(id)arg2;
- (void)setWallet:(id)arg1 specifier:(id)arg2;
- (void)setWipeEnabled:(id)arg1 specifier:(id)arg2;
- (bool)shouldShowVoiceDial;
- (void)showAlertForPhoneAutoUnlockEnablementOfDevice:(id)arg1 ofSpecifier:(id)arg2;
- (void)showKeychainAlert;
- (void)showPINSheet:(id)arg1;
- (bool)showReplyWithMessage;
- (void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)specifiers;
- (void)suspend;
- (void)togglePasscode:(id)arg1;
- (void)updateAutoUnlockDevicewithDevice:(id)arg1;
- (void)updateAutoUnlockSpecifiers;
- (void)updateGracePeriodSpecifier;
- (void)updatePhoneAutounlockSection:(bool)arg1;
- (void)updateVoiceDialGroup;
- (id)voiceDial:(id)arg1;
- (id)wallet:(id)arg1;
- (id)wipeEnabled:(id)arg1;

@end