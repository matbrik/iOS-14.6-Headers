/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNMutableSettings : MNSettings

@property (nonatomic) bool beepBeforeInstruction;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic) bool muteSpeechOverride;
@property (nonatomic) bool pauseSpokenAudio;
@property (nonatomic) bool shouldUseGuidanceEventManager;
@property (nonatomic) bool speechEnabled;
@property (nonatomic) unsigned long long voiceVolume;

+ (id)settingsWithSettings:(id)arg1;

- (void)setBeepBeforeInstruction:(bool)arg1;
- (void)setDistanceUnits:(unsigned long long)arg1;
- (void)setMaxAlternateRoutesCount:(unsigned long long)arg1;
- (void)setMuteSpeechOverride:(bool)arg1;
- (void)setPauseSpokenAudio:(bool)arg1;
- (void)setShouldUseGuidanceEventManager:(bool)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setVoiceVolume:(unsigned long long)arg1;

@end
