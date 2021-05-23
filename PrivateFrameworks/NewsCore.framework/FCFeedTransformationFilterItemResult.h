/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationFilterItemResult : NSObject {
    bool  _filtered;
    long long  _filteredReasons;
    id  _item;
}

@property (getter=isFiltered, nonatomic) bool filtered;
@property (nonatomic) long long filteredReasons;
@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (long long)filteredReasons;
- (id)initWithItem:(id)arg1 filtered:(bool)arg2 filteredReasons:(long long)arg3;
- (bool)isFiltered;
- (id)item;
- (void)setFiltered:(bool)arg1;
- (void)setFilteredReasons:(long long)arg1;

@end