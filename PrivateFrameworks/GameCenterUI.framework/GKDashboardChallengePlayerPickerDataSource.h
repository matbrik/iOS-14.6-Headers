/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource {
    GKChallenge * _challenge;
    NSMutableDictionary * _playerAchievementDates;
    NSMutableDictionary * _playerStates;
    NSArray * _players;
    NSArray * _searchPlayers;
}

@property (nonatomic, retain) GKChallenge *challenge;
@property (nonatomic, retain) NSMutableDictionary *playerAchievementDates;
@property (nonatomic, retain) NSMutableDictionary *playerStates;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic, retain) NSArray *searchPlayers;
@property (nonatomic, readonly) NSArray *selectedPlayers;

- (void).cxx_destruct;
- (id)challenge;
- (void)clearSelection;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)currentPlayers;
- (id)indexPathForPlayer:(id)arg1;
- (id)initWithChallenge:(id)arg1;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)playerAchievementDates;
- (id)playerForIndexPath:(id)arg1;
- (id)playerStates;
- (id)players;
- (double)preferredCollectionHeight;
- (id)searchKeyForSection:(long long)arg1;
- (id)searchPlayers;
- (void)searchTextHasChanged;
- (id)sectionHeaderText;
- (id)selectedPlayers;
- (void)setChallenge:(id)arg1;
- (void)setPlayerAchievementDates:(id)arg1;
- (void)setPlayerStates:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setupCollectionView:(id)arg1;

@end
