/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRAtrialFibrillationOnboardingManager : NSObject <HROnboardingManagerDataSource, HROnboardingManagerDelegate> {
    <HRAtrialFibrillationOnboardingManagerDelegate> * _delegate;
    NPSManager * _nanoPreferenceSyncManager;
    HROnboardingManager * _onboardingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HRAtrialFibrillationOnboardingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPSManager *nanoPreferenceSyncManager;
@property (nonatomic, readonly) HROnboardingManager *onboardingManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_wrapUpOnboardingWithNotificationsEnabled:(bool)arg1;
- (id)availableOnboardingStepsForOnboardingManager:(id)arg1;
- (id)delegate;
- (void)didBeginOnboardingForOnboardingManager:(id)arg1;
- (void)didCancelOnboardingForOnboardingManager:(id)arg1;
- (void)didCompleteOnboardingForOnboardingManager:(id)arg1;
- (void)dismissOnboarding;
- (id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(bool)arg2 healthStore:(id)arg3 dateCache:(id)arg4 provenance:(long long)arg5 delegate:(id)arg6;
- (id)nanoPreferenceSyncManager;
- (id)onboardingManager;
- (id)onboardingManager:(id)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3;
- (void)onboardingManager:(id)arg1 willMoveToPage:(id)arg2;
- (id)onboardingNavigationController;
- (void)setDelegate:(id)arg1;
- (void)setNanoPreferenceSyncManager:(id)arg1;

@end