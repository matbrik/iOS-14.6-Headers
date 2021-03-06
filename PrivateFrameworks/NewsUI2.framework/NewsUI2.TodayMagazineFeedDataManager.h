/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.TodayMagazineFeedDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving, TSPluginDelegate> {
    void childParentPluginIdentifierMap;
    void cursorContainer;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  group;
    void myMagazinesModule;
    void parentPluggableViewController;
    void pluginManager;
    void readingHistory;
    void readingList;
    void subscriptionService;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)plugin:(id)arg1 didResizePluginModel:(id)arg2;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end
