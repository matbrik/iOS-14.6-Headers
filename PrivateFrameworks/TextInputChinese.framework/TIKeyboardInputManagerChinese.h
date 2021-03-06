/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja {
    CIMCandidateData * _candidateData;
    NSString * _currentKeyHint;
    bool  _duringDeleteFromInputWithContext;
    bool  _isAlphabeticPlane;
    bool  _isInCompletionMode;
    NSString * _language;
    TIMathSymbolPunctuationController * _mathSymbolPunctuationController;
    NSString * _modeName;
    NSOperationQueue * _operationQueue;
    NSString * _pairedPunctuationOpenQuote;
    NSString * _pairedPunctuationSelectedText;
    bool  _shouldLearnAcceptedCandidate;
    TIWordSearch * _wordSearch;
}

@property (readonly) CIMCandidateData *candidateData;
@property (nonatomic, copy) NSString *currentKeyHint;
@property bool duringDeleteFromInputWithContext;
@property (nonatomic) bool isAlphabeticPlane;
@property (nonatomic) bool isInCompletionMode;
@property (nonatomic, copy) NSString *language;
@property (readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController;
@property (nonatomic, copy) NSString *modeName;
@property (readonly) NSOperationQueue *operationQueue;
@property (nonatomic, copy) NSString *pairedPunctuationOpenQuote;
@property (nonatomic, copy) NSString *pairedPunctuationSelectedText;
@property (nonatomic, readonly) unsigned long long predictionOptions;
@property (nonatomic) bool shouldLearnAcceptedCandidate;

+ (id)GB18030CandidateFromString:(id)arg1;
+ (id)pairedPunctuationDictionary;
+ (id)punctuationPredictionsForString:(id)arg1;
+ (bool)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2;
+ (id)unicodeCandidateFromString:(id)arg1;
+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (void)acceptFirstCandidateWithContext:(id)arg1;
- (bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (id)candidateData;
- (id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2;
- (id)candidateResultSetUsedForCompletionQuery;
- (void)clearInput;
- (id)completionCandidateResultSetForKeyHint:(id)arg1;
- (id)currentKeyHint;
- (id)deleteFromInput:(unsigned long long*)arg1;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)didAcceptCandidate:(id)arg1;
- (bool)duringDeleteFromInputWithContext;
- (id)firstCandidate;
- (id)generateCompletions;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(id /* block */)arg3;
- (bool)handlePairedPunctuationInput:(id)arg1 context:(id)arg2;
- (bool)hasIdeographicCandidates;
- (struct TIInputManager { int (**x1)(); struct vector<KB::Input, std::__1::allocator<KB::Input>> { struct Input {} *x_2_1_1; struct Input {} *x_2_1_2; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input>> { struct Input {} *x_3_2_1; } x_2_1_3; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; unsigned int x5; struct String { unsigned short x_6_1_1; unsigned short x_6_1_2; unsigned short x_6_1_3; unsigned char x_6_1_4; char *x_6_1_5; BOOL x_6_1_6[16]; } x6; struct retain_ptr<const __CFLocale *> { struct __CFLocale {} *x_7_1_1; } x7; struct ConfidenceModel { struct Params { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; int x_1_2_6; int x_1_2_7; } x_8_1_1; } x8; struct LockedInput { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> { struct __compressed_pair<TI::Favonius::StrokeBuildManager *, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> { struct StrokeBuildManager {} *x_1_2_1; } x_10_1_1; } x10; }*)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (unsigned long long)initialSelectedIndex;
- (void)inputLocationChanged;
- (bool)isAlphabeticPlane;
- (bool)isFacemarkInput:(id)arg1;
- (bool)isInCompletionMode;
- (id)language;
- (void)loadFavoniusTypingModel;
- (id)mathSymbolPunctuationController;
- (void*)mecabraCandidateRefFromPointerValue:(id)arg1;
- (id)modeName;
- (id)operationQueue;
- (id)outputByConvertingDecimalPointForInput:(id)arg1;
- (id)pairedPunctuationOpenQuote;
- (id)pairedPunctuationSelectedText;
- (unsigned long long)predictionOptions;
- (id)replacementForDoubleSpace;
- (void)resetCommitHistory;
- (id)searchStringForMarkedText;
- (void)setCurrentKeyHint:(id)arg1;
- (void)setDuringDeleteFromInputWithContext:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setIsAlphabeticPlane:(bool)arg1;
- (void)setIsInCompletionMode:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLearnsCorrection:(bool)arg1;
- (void)setModeName:(id)arg1;
- (void)setPairedPunctuationOpenQuote:(id)arg1;
- (void)setPairedPunctuationSelectedText:(id)arg1;
- (void)setShouldLearnAcceptedCandidate:(bool)arg1;
- (bool)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (bool)shouldLearnAcceptedCandidate;
- (bool)shouldSearchCompletionForSubstrings;
- (bool)showingFacemarkCandidates;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (id)sortingMethods;
- (bool)supportsPairedPunctutationInput;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(bool)arg3;
- (void)syncToLayoutState:(id)arg1;
- (id)titleForSortingMethod:(id)arg1;
- (bool)updateCompletionCandidatesIfAppropriate;
- (void)willExitCompletionMode;
- (id)wordCharacters;
- (id)wordSearch;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;

@end
