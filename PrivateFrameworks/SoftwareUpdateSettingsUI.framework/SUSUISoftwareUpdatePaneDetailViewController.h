/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSUISoftwareUpdatePaneDetailViewController : SUSUISoftwareUpdatePane <DevicePINControllerDelegate, UITableViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alternateUpdateButtonSpecifierForState:(int)arg1;
- (id)_alternateUpdateGroupSpecifierForState:(int)arg1;
- (id)_automaticUpdateButtonSpecifierForState:(int)arg1;
- (id)_automaticUpdateGroupSpecifierForState:(int)arg1;
- (id)alternateUpdateDescriptor;
- (id)analyticsDownloadAndInstallNowTappedString;
- (id)analyticsDownloadAndInstallTonightTappedString;
- (id)analyticsDownloadOnlyTappedString;
- (id)analyticsOpenStorageTappedString;
- (id)currentSpecifiers;
- (void)detailedReleaseNotesDonePressed:(id)arg1;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (id)init;
- (id)installLaterTappedString;
- (id)installNowTappedString;
- (id)learnMoreTappedString;
- (void)presentConfimationSpecifier:(id)arg1;
- (void)readyToDownload:(unsigned long long)arg1;
- (void)reloadSpecifiers:(id)arg1;
- (void)showPINSheetForSpecifier:(id)arg1;
- (id)suError;
- (void)titleCell:(id)arg1 learnMoreButtonTapped:(id)arg2;
- (id)updateDescriptor;
- (bool)updateReadyToDownload;
- (void)upgradeToUserInitiated:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end