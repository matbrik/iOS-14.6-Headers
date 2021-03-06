/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFAppInFocusTrigger : WFTrigger {
    bool  _onBackground;
    bool  _onFocus;
    NSArray * _selectedBundleIdentifiers;
}

@property (nonatomic) bool onBackground;
@property (nonatomic) bool onFocus;
@property (nonatomic, copy) NSArray *selectedBundleIdentifiers;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)isAllowedToRunAutomatically;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (bool)onBackground;
- (bool)onFocus;
- (id)selectedBundleIdentifiers;
- (void)setOnBackground:(bool)arg1;
- (void)setOnFocus:(bool)arg1;
- (void)setSelectedBundleIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (id)onBackgroundIgnoredLaunchReasons;
- (id)onFocusIgnoredLaunchReasons;
- (bool)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

+ (id)offIcon;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onLabel;
+ (id)triggerTypeIcon;

@end
