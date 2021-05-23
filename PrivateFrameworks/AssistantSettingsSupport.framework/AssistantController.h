/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

@interface AssistantController : PSListController <AssistantHistoryDelegate, AssistantVoiceSettingsConnectionProvider, CNContactPickerDelegate, DevicePINControllerDelegate, VTUIEnrollTrainingViewControllerDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate> {
    AFSettingsConnection * _AFSettingsConnection;
    NSArray * _allAppsSpecifiers;
    PSSpecifier * _announceMessagesSpecifier;
    NSArray * _assistantSettings;
    CNContactStore * _contactStore;
    PSSpecifier * _currentSiriActivationSpecifier;
    NSMutableSet * _disabledSpotlightBundles;
    NSMutableSet * _disabledSpotlightDomains;
    AFEnablementConfiguration * _enablementConfiguration;
    AFEnablementFlowConfigurationProvider * _enablementConfigurationProvider;
    PSRootController * _enablementFlowNavigationController;
    VTUIEnrollTrainingViewController * _enrollmentController;
    PSSpecifier * _hardwareButtonActivationSpecifier;
    NSSet * _installedBundleIDs;
    ASTLockScreenSuggestionsGlobalController * _lockScreenGlobalController;
    PSSpecifier * _lockScreenSpecifier;
    bool  _needsReloadSpecifiersOnViewWillAppear;
    NSString * _pendingLanguage;
    CNContactPickerViewController * _peoplePicker;
    SUICAssistantVoiceSettingsConnection * _settingsConnection;
    UIViewController * _siriDataSharingOptInViewController;
    VTUISiriDataSharingOptInPresenter * _siriDataSharingPresenter;
    PSSpecifier * _voiceActivationSpecifier;
    id /* block */  _voiceSelectionCompletion;
    id /* block */  _voiceSelectionFlowDismissalHandler;
    PSSpecifier * _voiceSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SUICAssistantVoiceSettingsConnection *settingsConnection;
@property (readonly) Class superclass;

+ (bool)_heySiriSupportedForLanguage:(id)arg1;
+ (id)bundle;
+ (void)presentAssistantEnableAlertForState:(bool)arg1 presentingViewController:(id)arg2 actionHandler:(id /* block */)arg3;
+ (id)shortTitlesForLanguageIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)_confirmationPromptDisableHeySiri:(bool)arg1 disableMultiUser:(bool)arg2 disableSpokenFeedback:(bool)arg3;
- (id)_createEnablementFlowControllerForConfiguration:(id)arg1 recognitionLanguageCode:(id)arg2;
- (id /* block */)_createVoiceSelectionCompletionForSpecifier:(id)arg1 recognitionLanguageCode:(id)arg2;
- (id /* block */)_createVoiceSelectionDismissalHandlerWithSpecifier:(id)arg1 actionHandler:(id /* block */)arg2;
- (void)_handleEnablementConfirmationForSpecifier:(id)arg1 actionHandler:(id /* block */)arg2;
- (void)_handleThemisEnablementConfirmationForSpecifier:(id)arg1 presentingViewController:(id)arg2 actionHandler:(id /* block */)arg3;
- (bool)_isAssistantLockScreenAccessRestricted;
- (bool)_isHeySiriAlwaysOn;
- (bool)_isIncompatibleWithWatchLanguage:(id)arg1;
- (bool)_isVoiceTriggerEnabled;
- (bool)_languageWillDisableHeySiri:(id)arg1;
- (id)_localizeTriggerString:(id)arg1;
- (bool)_pairedWithSiriSpeaksEnabledNanoHardware;
- (void)_presentSiriDataSharingOptInViewController;
- (void)_runEnablementFlowDismissalHandlersIfApplicable;
- (void)_setAccessibleFromLockScreen:(bool)arg1;
- (void)_setAssistantEnabled:(id)arg1 forSpecifier:(id)arg2 presentingViewController:(id)arg3 actionHandler:(id /* block */)arg4;
- (void)_setAssistantLanguageCancelled:(id)arg1;
- (void)_setAssistantLanguageConfirmed:(id)arg1;
- (void)_setAssistantLanguageHeySiriDisableConfirmed:(id)arg1;
- (void)_setAssistantLanguageWatchMismatchConfirmed:(id)arg1;
- (void)_showIncompatibleWatchLanguageAlert;
- (void)_showMeCardPopover;
- (void)_showWillDisableAlertWillDisableHeySiri:(bool)arg1 disableMultiUser:(bool)arg2 disableSpokenFeedbackOnWatch:(bool)arg3;
- (void)_updateSpecifiersForLanguage:(id)arg1;
- (void)_voiceSelectionCancelled;
- (id)accessibleFromLockScreen:(id)arg1;
- (void)assistantAboutDonePressed:(id)arg1;
- (void)assistantDisabledCancelled:(id)arg1;
- (void)assistantDisabledConfirmed:(id)arg1;
- (id)assistantEnabled:(id)arg1;
- (void)assistantEnabledCancelled:(id)arg1;
- (void)assistantEnabledConfirmed:(id)arg1;
- (id)assistantLanguage:(id)arg1;
- (id)assistantVoice:(id)arg1;
- (id)assistantVoiceLanguage:(id)arg1;
- (id)bundle;
- (void)cancelSetup:(id)arg1;
- (void)configureApplicationListSpecifiersFor:(id)arg1;
- (void)configureAskSiriSpecifiersFor:(id)arg1;
- (void)configurePersonalizationSpecifiersFor:(id)arg1;
- (void)confirmDisableForMultiUserVoiceIdentificationWithSpecifier:(id)arg1 pairedWatch:(bool)arg2 presentingViewController:(id)arg3 actionHandler:(id /* block */)arg4;
- (void)confirmDisableWithSpecifier:(id)arg1 pairedWatch:(bool)arg2 presentingViewController:(id)arg3 actionHandler:(id /* block */)arg4;
- (id)confirmationSpecifierWillDisableHeySiri:(bool)arg1 disableMultiUser:(bool)arg2 disableSpokenFeedbackOnWatch:(bool)arg3;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactsDidChange;
- (void)continueSetup;
- (void)dealloc;
- (void)deleteHistorySuccessfulFromViewController:(id)arg1;
- (void)didAcceptEnteredPIN;
- (void)didBecomeActive;
- (void)didCancelEnteringPIN;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)hardwareButtonTrigger:(id)arg1;
- (id)init;
- (id)isAssistantSuggestionsEnabled;
- (id)isHomeScreenSuggestionsEnabled:(id)arg1;
- (id)isSharingSuggestionsEnabled:(id)arg1;
- (void)languageCodeDidChange;
- (void)loadAppStorePageForBundleId:(id)arg1;
- (void)lowPowerModeChangedNotification:(id)arg1;
- (id)meCard:(id)arg1;
- (void)outputVoiceDidChange;
- (void)preferencesDidChange;
- (void)prepareForSnapshot;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)reloadSpecifiers;
- (void)saveSpotlightSettings;
- (void)setAccessibleFromLockScreen:(id)arg1 forSpecifier:(id)arg2;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setAssistantLanguage:(id)arg1;
- (void)setAssistantLanguage:(id)arg1 forSpecifier:(id)arg2;
- (void)setAssistantSuggestionsEnabled:(id)arg1;
- (void)setDisabledFromLockScreen:(bool)arg1;
- (void)setHardwareButtonTrigger:(id)arg1 forSpecifier:(id)arg2;
- (void)setHomeScreenSuggestionsEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setSharingSuggestionsEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setVoiceControlLanguage:(id)arg1 specifier:(id)arg2;
- (void)setVoiceTrigger:(id)arg1 forSpecifier:(id)arg2;
- (void)setVoiceTrigger:(id)arg1 forSpecifier:(id)arg2 transitionWithNavControllerIfNecessary:(id)arg3;
- (id)settingsConnection;
- (void)showAboutAssistantSheet:(id)arg1;
- (void)showAboutSearchSuggestionsSheet:(id)arg1;
- (void)showAssistantConfirmationViewForSpecifier:(id)arg1 presentingViewController:(id)arg2 actionHandler:(id /* block */)arg3;
- (void)showAssistantHistoryViewController:(id)arg1;
- (void)showLearnMore;
- (void)showMeCardPicker:(id)arg1;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1;
- (void)skipSetup;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)voiceControlLanguage:(id)arg1;
- (void)voiceSelectionController:(id)arg1 didSelectVoice:(id)arg2;
- (id)voiceTrigger:(id)arg1;
- (bool)watchSupportsSiriLanguageCode:(id)arg1;

@end