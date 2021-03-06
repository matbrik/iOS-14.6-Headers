/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource> {
    unsigned long long  _additionalProvidersMode;
    NSDictionary * _destinationsBySectionIndexTitle;
    NSArray * _identityProviders;
    NSString * _requestedStorefrontCountryCode;
    NSArray * _sections;
    UITableView * _tableView;
    NSString * _titleForTableHeader;
    NSArray * _tvProviderSupportedStorefronts;
}

@property (nonatomic) unsigned long long additionalProvidersMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *destinationsBySectionIndexTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *identityProviders;
@property (nonatomic) NSString *requestedStorefrontCountryCode;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, copy) NSString *titleForTableHeader;
@property (nonatomic, copy) NSArray *tvProviderSupportedStorefronts;

- (void).cxx_destruct;
- (id)_additionalProvidersRowTitle;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;
- (unsigned long long)_minimumProviderCountForIndexes;
- (void)_scrollToTableHeaderView;
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;
- (id)_textColorForRowAtIndexPath:(id)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (unsigned long long)additionalProvidersMode;
- (id)destinationsBySectionIndexTitle;
- (id)identityProviderForRowAtIndexPath:(id)arg1;
- (id)identityProviders;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)requestedStorefrontCountryCode;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (void)setAdditionalProvidersMode:(unsigned long long)arg1;
- (void)setDestinationsBySectionIndexTitle:(id)arg1;
- (void)setIdentityProviders:(id)arg1;
- (void)setNumberOfLinesForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setRequestedStorefrontCountryCode:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleForTableHeader:(id)arg1;
- (void)setTvProviderSupportedStorefronts:(id)arg1;
- (id)storefrontAtIndexPath:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)titleForTableHeader;
- (id)tvProviderSupportedStorefronts;

@end
