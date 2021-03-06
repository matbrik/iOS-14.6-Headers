/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolHeuristic : NSObject {
    bool  _alternate;
    bool  _enforcePublisherCap;
    NSArray * _groupSizes;
    long long  _heuristicSampleSize;
    long long  _iterations;
    long long  _maxEvergreenArticles;
    long long  _maxPublisherOccurrences;
    long long  _maxUnpaidArticles;
    id /* block */  _utilityBlock;
}

- (void).cxx_destruct;
- (double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(bool)arg7 maxUnpaidArticles:(long long)arg8 maxEvergreenArticles:(long long)arg9 heuristicSampleSize:(long long)arg10 utilityBlock:(id /* block */)arg11;

@end
