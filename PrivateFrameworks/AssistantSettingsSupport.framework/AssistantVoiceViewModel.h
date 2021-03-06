/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

@interface AssistantVoiceViewModel : NSObject {
    NSString * _colorToCheckmark;
    NSString * _colorToSpin;
    AFVoiceInfo * _currentVoice;
    NSString * _genderGroupFooterText;
    long long  _genderToCheckmark;
    long long  _genderToSpin;
    AFVoiceInfo * _inProgressVoice;
    NSString * _languageGroupFooterText;
    NSSet * _languageOptions;
    NSString * _selectedLanguage;
    bool  _shouldShowGenderGroup;
    bool  _spinningOnLanguage;
}

@property (nonatomic, copy) NSString *colorToCheckmark;
@property (nonatomic, copy) NSString *colorToSpin;
@property (nonatomic, retain) AFVoiceInfo *currentVoice;
@property (nonatomic, copy) NSString *genderGroupFooterText;
@property (nonatomic) long long genderToCheckmark;
@property (nonatomic) long long genderToSpin;
@property (nonatomic, retain) AFVoiceInfo *inProgressVoice;
@property (nonatomic, copy) NSString *languageGroupFooterText;
@property (nonatomic, copy) NSSet *languageOptions;
@property (nonatomic, copy) NSString *selectedLanguage;
@property (nonatomic) bool shouldShowGenderGroup;
@property (nonatomic) bool spinningOnLanguage;

- (void).cxx_destruct;
- (id)colorToCheckmark;
- (id)colorToSpin;
- (id)currentVoice;
- (id)genderGroupFooterText;
- (long long)genderToCheckmark;
- (long long)genderToSpin;
- (id)inProgressVoice;
- (id)languageGroupFooterText;
- (id)languageOptions;
- (id)selectedLanguage;
- (void)setColorToCheckmark:(id)arg1;
- (void)setColorToSpin:(id)arg1;
- (void)setCurrentVoice:(id)arg1;
- (void)setGenderGroupFooterText:(id)arg1;
- (void)setGenderToCheckmark:(long long)arg1;
- (void)setGenderToSpin:(long long)arg1;
- (void)setInProgressVoice:(id)arg1;
- (void)setLanguageGroupFooterText:(id)arg1;
- (void)setLanguageOptions:(id)arg1;
- (void)setSelectedLanguage:(id)arg1;
- (void)setShouldShowGenderGroup:(bool)arg1;
- (void)setSpinningOnLanguage:(bool)arg1;
- (bool)shouldShowGenderGroup;
- (bool)spinningOnLanguage;

@end
