/* Generated by RuntimeBrowser.
 */

@protocol SBPasscodeEntryTransientOverlayViewControllerDelegate <NSObject>

@optional

- (bool)passcodeEntryTransientOverlayViewController:(SBPasscodeEntryTransientOverlayViewController *)arg1 authenticatePasscode:(NSString *)arg2;
- (bool)passcodeEntryTransientOverlayViewControllerDidDetectFaceOcclusionsSinceScreenOn:(SBPasscodeEntryTransientOverlayViewController *)arg1;
- (void)passcodeEntryTransientOverlayViewControllerDidDisappear:(SBPasscodeEntryTransientOverlayViewController *)arg1;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(SBPasscodeEntryTransientOverlayViewController *)arg1;
- (void)passcodeEntryTransientOverlayViewControllerRequestsEmergencyCall:(SBPasscodeEntryTransientOverlayViewController *)arg1;

@end
