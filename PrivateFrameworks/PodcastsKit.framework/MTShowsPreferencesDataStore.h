/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTShowsPreferencesDataStore : NSObject

@property (nonatomic) long long sortOrder;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (long long)_sortTypeForString:(id)arg1;
- (id)_stringForSortType:(long long)arg1;
- (void)setSortOrder:(long long)arg1;
- (id)sortDescriptors;
- (long long)sortOrder;

@end
