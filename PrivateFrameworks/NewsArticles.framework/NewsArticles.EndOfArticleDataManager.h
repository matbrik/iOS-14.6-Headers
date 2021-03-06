/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
 */

@interface NewsArticles.EndOfArticleDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving> {
    void articleRecirculationService;
    void delegate;
    void readingHistory;
    void readingList;
}

- (void).cxx_destruct;
- (id)init;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end
