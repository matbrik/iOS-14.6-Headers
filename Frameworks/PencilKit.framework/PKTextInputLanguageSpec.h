/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKTextInputLanguageSpec : NSObject {
    long long  __languageBehavior;
    NSArray * __locales;
}

@property (nonatomic, readonly) long long _languageBehavior;
@property (nonatomic, readonly) NSArray *_locales;
@property (nonatomic, readonly) NSArray *debugLocaleDescriptions;
@property (nonatomic, readonly) double singleCharacterCommitDelay;
@property (nonatomic, readonly) double standardCommitDelay;
@property (nonatomic, readonly) double strokeFadeOutDuration;
@property (nonatomic, readonly) long long uncommittedTokenColumnCount;

- (void).cxx_destruct;
- (long long)_languageBehavior;
- (id)_locales;
- (void)configureLocalesForRecognitionManager:(id)arg1;
- (id)debugLocaleDescriptions;
- (id)initWithLocales:(id)arg1;
- (double)singleCharacterCommitDelay;
- (double)standardCommitDelay;
- (double)strokeFadeOutDuration;
- (long long)uncommittedTokenColumnCount;

@end
