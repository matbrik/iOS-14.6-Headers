/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver> {
    bool  _accentedLanguage;
    NSMutableArray * _accentedLayoutsMap;
    unsigned long long  _aggregatedWordThreshold;
    NSMutableArray * _currentSessionSamplesArray;
    long long  _currentWordPosition;
    <TISensorWriterWrapper> * _dataWriter;
    NSDictionary * _emojiBuckets;
    long long  _eventOrder;
    NSMutableArray * _events;
    NSString * _identifier;
    TIInputMode * _inputMode;
    bool  _isLoaded;
    bool  _isTCCAuthorized;
    TIKeyboardInput * _lastInput;
    NSMutableArray * _layoutIDs;
    NSMutableArray * _savedSessionSamplesArray;
    bool  _skipTCCAuthorization;
    NSArray * _sortedEvents;
    NLTagger * _tagger;
    NSMutableArray * _taps;
    int  _tccNotifyToken;
    NSMutableDictionary * _touchToEventMap;
    NSMutableArray * _touches;
    TITypingSession * _typingSession;
    TIUserModelDataStore * _userModelDataStore;
    unsigned long long  _wordAccumulationThreshold;
    NSDictionary * _wordBucketDictionary;
    long long  _wordPosition;
    NSString * _wordSeparator;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableArray *currentSessionSamplesArray;
@property (nonatomic, retain) <TISensorWriterWrapper> *dataWriter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLoaded;
@property (nonatomic, retain) NSMutableArray *savedSessionSamplesArray;
@property (readonly) Class superclass;
@property (nonatomic, retain) TITypingSession *typingSession;
@property (nonatomic) unsigned long long wordAccumulationThreshold;

+ (id)makeMetricCollector:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 isTesting:(bool)arg4;

- (void).cxx_destruct;
- (void)_clear;
- (void)_coalesceTaps;
- (id)_consumeTypingSession:(id)arg1;
- (void)_consumeUserAction:(id)arg1;
- (void)_consumeWordEntry:(id)arg1;
- (id)_findSessionWithLayoutOfSameDimentions:(id)arg1 layout:(id)arg2;
- (void)_haltSessionTypingTimer:(id)arg1 event:(id)arg2;
- (id)_insertEmojiSwitchEvents:(id)arg1;
- (void)_loadStatsFromDataStore;
- (id)_mapIDToLayout:(unsigned long long)arg1;
- (void)_mapTapsToEvents;
- (void)_mergeStats:(id)arg1;
- (void)_metricWalk;
- (void)_persistSavedSessionSampleArray;
- (void)_processEvents;
- (void)_reportRipeBuckets;
- (void)_resetConsumeState;
- (id)_retrieveSavedSessionSampleArray;
- (void)_setupTCCAuthNotification;
- (id)consumeTypingSession:(id)arg1;
- (id)currentSessionSamplesArray;
- (id)dataWriter;
- (void)dealloc;
- (id)eventsDescription;
- (id)eventsDescription:(bool)arg1;
- (id)getWordBucketCategoryForWord:(id)arg1;
- (void)handleTypingSession:(id)arg1;
- (id)init:(id)arg1;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(bool)arg4;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(bool)arg4 skipTCCAuthorization:(bool)arg5;
- (bool)isLoaded;
- (id)lemmatizeWord:(id)arg1;
- (id)loadDataWithFilename:(id)arg1;
- (void)loadEmojiBucketDictionaryIfNecessary;
- (void)loadWordBucketDictionaryIfNecessary;
- (void)placeTaskOnWorkQueue:(id /* block */)arg1;
- (id)privateEventsDescription;
- (void)removeSamplesWithNegativeDurationForTypingSession:(id)arg1;
- (id)savedSessionSamplesArray;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (void)setCurrentSessionSamplesArray:(id)arg1;
- (void)setDataWriter:(id)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setSavedSessionSamplesArray:(id)arg1;
- (void)setTypingSession:(id)arg1;
- (void)setWordAccumulationThreshold:(unsigned long long)arg1;
- (void)setupSessionSamplesForLayouts;
- (void)testTCCAuthorization;
- (double)totalTimeSpan;
- (double)totalTimeSpanFromLastTap;
- (id)typingSession;
- (unsigned long long)wordAccumulationThreshold;

@end
