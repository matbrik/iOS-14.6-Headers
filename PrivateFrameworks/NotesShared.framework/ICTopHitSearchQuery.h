/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTopHitSearchQuery : NSObject {
    NSString * _highlightString;
    bool  _modernResultsOnly;
    CSTopHitSearchQuery * _query;
    NSArray * _queryResults;
    NSString * _queryString;
    NSObject<OS_dispatch_semaphore> * _synchronousSemaphore;
    bool  _wasForceStopped;
}

@property (nonatomic, readonly) NSString *highlightString;
@property (nonatomic, readonly) bool modernResultsOnly;
@property (nonatomic, retain) CSTopHitSearchQuery *query;
@property (nonatomic, retain) NSArray *queryResults;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) bool wasForceStopped;

- (void).cxx_destruct;
- (void)cancel;
- (void)forceStop;
- (id)highlightString;
- (id)initWithQueryString:(id)arg1 keyboardLanguage:(id)arg2 modernResultsOnly:(bool)arg3;
- (bool)modernResultsOnly;
- (id)query;
- (id)queryResults;
- (id)queryString;
- (bool)run:(id*)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryResults:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setSynchronousSemaphore:(id)arg1;
- (void)setWasForceStopped:(bool)arg1;
- (void)setup;
- (id)synchronousSemaphore;
- (bool)wasForceStopped;

@end