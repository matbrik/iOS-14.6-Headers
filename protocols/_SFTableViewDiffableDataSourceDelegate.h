/* Generated by RuntimeBrowser.
 */

@protocol _SFTableViewDiffableDataSourceDelegate <NSObject>

@optional

- (bool)dataSource:(_SFTableViewDiffableDataSource *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (void)dataSource:(_SFTableViewDiffableDataSource *)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3;
- (NSString *)dataSource:(_SFTableViewDiffableDataSource *)arg1 footerTextForSection:(long long)arg2;
- (NSString *)dataSource:(_SFTableViewDiffableDataSource *)arg1 headerTextForSection:(long long)arg2;
- (long long)dataSource:(_SFTableViewDiffableDataSource *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)sectionIndexTitlesForDataSource:(_SFTableViewDiffableDataSource *)arg1;

@end
