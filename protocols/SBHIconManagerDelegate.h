/* Generated by RuntimeBrowser.
 */

@protocol SBHIconManagerDelegate <NSObject>

@optional

- (unsigned long long)allowedInterfaceOrientationsForIconManager:(SBHIconManager *)arg1;
- (UIViewController *)containerViewControllerForPopOversForIconManager:(SBHIconManager *)arg1;
- (NSDictionary *)defaultIconStateForIconManager:(SBHIconManager *)arg1;
- (void)dismissLibraryOverlayForIconManager:(SBHIconManager *)arg1;
- (void)dismissOverlaysForIconManager:(SBHIconManager *)arg1;
- (void)dismissTodayOverlayForIconManager:(SBHIconManager *)arg1;
- (double)distanceToTopOfSpotlightIconsForIconManager:(SBHIconManager *)arg1;
- (NSSet *)firstPageLeafIdentifiersForIconManager:(SBHIconManager *)arg1;
- (UIColor *)iconManager:(SBHIconManager *)arg1 accessibilityTintColorForIconView:(SBIconView *)arg2;
- (UIColor *)iconManager:(SBHIconManager *)arg1 accessibilityTintColorForScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)iconManager:(SBHIconManager *)arg1 additionalDragLiftScaleForIconView:(SBIconView *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 allowsBadgingForIcon:(SBIcon *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 allowsBadgingForIconLocation:(NSString *)arg2;
- (SBHIconAnimationSettings *)iconManager:(SBHIconManager *)arg1 animator:(SBHomeScreenIconTransitionAnimator *)arg2 animationSettingsForOperation:(unsigned long long)arg3 childViewController:(SBNestingViewController *)arg4;
- (NSURL *)iconManager:(SBHIconManager *)arg1 applicationBundleURLForShortcutsWithIconView:(SBIconView *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 applicationNameWithIdentifier:(NSString *)arg2;
- (NSArray *)iconManager:(SBHIconManager *)arg1 applicationShortcutItemsForIconView:(SBIconView *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(SBIconView *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 backgroundViewForComponentsOfIconView:(SBIconView *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 backgroundViewForDockForRootFolderController:(SBRootFolderController *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 backgroundViewForEditingDoneButtonForRootFolderController:(SBRootFolderController *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 canAcceptDropInSession:(id <UIDropSession>)arg2 inIconListView:(SBIconListView *)arg3;
- (bool)iconManager:(SBHIconManager *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2 fromIconView:(SBIconView *)arg3;
- (bool)iconManager:(SBHIconManager *)arg1 canAddIcon:(SBIcon *)arg2 toIconList:(SBIconListModel *)arg3 inFolder:(SBFolder *)arg4;
- (bool)iconManager:(SBHIconManager *)arg1 canAddIconToIgnoredList:(SBIcon *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 canBeginDragForIconView:(SBIconView *)arg2;
- (long long)iconManager:(SBHIconManager *)arg1 closeBoxTypeForIconView:(SBIconView *)arg2 proposedType:(long long)arg3;
- (NSData *)iconManager:(SBHIconManager *)arg1 configurationDataForDataSource:(id <SBLeafIconDataSource>)arg2 ofIcon:(SBLeafIcon *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 configureIconView:(SBIconView *)arg2 forIcon:(SBIcon *)arg3;
- (UIViewController *)iconManager:(SBHIconManager *)arg1 containerViewControllerForConfigurationOfIconView:(SBIconView *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 containerViewForPresentingContextMenuForIconView:(SBIconView *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconManager:(SBHIconManager *)arg1 contentBoundingRectForConfigurationOfIconView:(SBIconView *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconManager:(SBHIconManager *)arg1 contentOverlayInsetsFromParentIfAvailableForFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 dataSource:(id <SBLeafIconDataSource>)arg2 ofIcon:(SBLeafIcon *)arg3 didUpdateConfigurationData:(NSData *)arg4;
- (NSArray *)iconManager:(SBHIconManager *)arg1 defaultAutomaticFavoriteIconIdentifiersWithMaximumCount:(unsigned long long)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didAddItemsToIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(SBHIconManager *)arg1 didCloseFolder:(SBFolder *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didCreateRootFolderController:(SBRootFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didCreateRootViewController:(UIViewController<SBHIconRootViewProviding> *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didDismissPageManagementWithContext:(NSMutableDictionary *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didEndIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(SBHIconManager *)arg1 didOpenFolder:(SBFolder *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didReceiveTapOnLaunchDisabledIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 didRemoveConfigurableDataSource:(id <SBLeafIconDataSource>)arg2 ofIcon:(SBLeafIcon *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 didSpringLoadIconView:(SBIconView *)arg2;
- (UIView<SBIconDragPreview> *)iconManager:(SBHIconManager *)arg1 dragPreviewForIconView:(SBIconView *)arg2 dragPreviewForItem:(UIDragItem *)arg3 session:(id <UIDragSession>)arg4 previewParameters:(UIDragPreviewParameters *)arg5;
- (long long)iconManager:(SBHIconManager *)arg1 draggingStartLocationForIconView:(SBIconView *)arg2 proposedStartLocation:(long long)arg3;
- (UIStatusBar *)iconManager:(SBHIconManager *)arg1 fakeStatusBarForFolderController:(SBFolderController *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 folderController:(SBFolderController *)arg2 canChangeCurrentPageIndexToIndex:(long long)arg3;
- (Class)iconManager:(SBHIconManager *)arg1 folderControllerClassForFolderClass:(Class)arg2 proposedClass:(Class)arg3;
- (void)iconManager:(SBHIconManager *)arg1 folderControllerDidEndScrolling:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 folderControllerWillBeginScrolling:(SBFolderController *)arg2;
- (UIView *)iconManager:(SBHIconManager *)arg1 homeScreenContentViewForConfigurationOfIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 iconCloseBoxTapped:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 iconDropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)iconManager:(SBHIconManager *)arg1 iconView:(SBIconView *)arg2 configurationDidEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg3;
- (void)iconManager:(SBHIconManager *)arg1 iconView:(SBIconView *)arg2 configurationWillBeginWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg3;
- (void)iconManager:(SBHIconManager *)arg1 iconView:(SBIconView *)arg2 willUseContextMenuStyle:(_UIContextMenuStyle *)arg3;
- (bool)iconManager:(SBHIconManager *)arg1 iconViewDisplaysCloseBox:(SBIconView *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 isApplicationWithIdentifierBlockedForScreenTimeExpiration:(NSString *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 isCustomElementValid:(SBHCustomIconElement *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 isIconVisibleForBundleIdentifier:(NSString *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 isPartialEditingAllowedForIconLocation:(NSString *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 isWidgetValid:(SBHWidget *)arg2;
- (NSSet *)iconManager:(SBHIconManager *)arg1 launchActionsForIconView:(SBIconView *)arg2;
- (void)iconManager:(void *)arg1 launchIcon:(void *)arg2 location:(void *)arg3 animated:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: SBHIconManager *, SBIcon *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)iconManager:(SBHIconManager *)arg1 launchIconForIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 launchIconForIconView:(SBIconView *)arg2 withActions:(NSSet *)arg3;
- (NSURL *)iconManager:(SBHIconManager *)arg1 launchURLForIconView:(SBIconView *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 localizedFolderNameForDefaultDisplayName:(NSString *)arg2;
- (double)iconManager:(SBHIconManager *)arg1 minimumHomeScreenScaleForFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 nestingViewController:(SBNestingViewController *)arg2 willPerformOperation:(long long)arg3 onViewController:(SBNestingViewController *)arg4 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg5;
- (UIViewController *)iconManager:(SBHIconManager *)arg1 popoverContentViewControllerForIcon:(SBIcon *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 possibleUserIconTapBegan:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 possibleUserIconTapBeganAfterInformingIcon:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 prepareAddSheetViewController:(SBHAddWidgetSheetViewController *)arg2;
- (void)iconManager:(void *)arg1 prepareForPageHidingEducationWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: SBHIconManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSString *)iconManager:(SBHIconManager *)arg1 reasonToDisallowInteractionOnIconView:(SBIconView *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 reasonToDisallowTapOnIconView:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didChangeEffectiveSidebarVisibilityProgress:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didChangeSidebarVisibilityProgress:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didEndOverscrollOnFirstPageWithVelocity:(double)arg3 translation:(double)arg4;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didEndOverscrollOnLastPageWithVelocity:(double)arg3 translation:(double)arg4;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didOverscrollOnFirstPageByAmount:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 didOverscrollOnLastPageByAmount:(double)arg3;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 willUsePropertyAnimator:(UIViewPropertyAnimator *)arg3 toTransitionToState:(long long)arg4;
- (void)iconManager:(SBHIconManager *)arg1 rootFolderController:(SBRootFolderController *)arg2 willUseTransitionContext:(SBViewControllerTransitionContext *)arg3 toTransitionToState:(long long)arg4;
- (<SBIconViewSnapshotProviding> *)iconManager:(SBHIconManager *)arg1 screenSnapshotProviderForComponentsOfIconView:(SBIconView *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3 forIconView:(SBIconView *)arg4;
- (bool)iconManager:(SBHIconManager *)arg1 shouldAvoidPlacingIconOnFirstPage:(SBLeafIcon *)arg2;
- (bool)iconManager:(SBHIconManager *)arg1 shouldCacheRecentViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;
- (bool)iconManager:(SBHIconManager *)arg1 shouldContinueToUseBackgroundView:(UIView *)arg2 forComponentsOfIconView:(SBIconView *)arg3;
- (bool)iconManager:(SBHIconManager *)arg1 shouldPlaceIconOnIgnoredList:(SBIcon *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconManager:(SBHIconManager *)arg1 statusBarEdgeInsetsForFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 statusBarInsetsDidChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (UIStatusBarStyleRequest *)iconManager:(SBHIconManager *)arg1 statusBarStyleRequestForFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 touchesEndedForIconView:(SBIconView *)arg2;
- (NSString *)iconManager:(SBHIconManager *)arg1 vendorNameForAppWithBundleIdentifiers:(NSString *)arg2;
- (UIViewController *)iconManager:(SBHIconManager *)arg1 viewControllerForCustomIcon:(SBWidgetIcon *)arg2 element:(id <SBLeafIconDataSource>)arg3;
- (void)iconManager:(SBHIconManager *)arg1 wantsLaunchForWidgetURL:(NSURL *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(struct CGPoint { double x1; double x2; })arg2;
- (<BSInvalidatable> *)iconManager:(SBHIconManager *)arg1 wantsToHideStatusBarForFolderController:(SBFolderController *)arg2 animated:(bool)arg3;
- (void)iconManager:(SBHIconManager *)arg1 wantsUninstallForIcon:(SBIcon *)arg2 location:(NSString *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willBeginIconDragWithUniqueIdentifier:(NSUUID *)arg2 numberOfDraggedItems:(unsigned long long)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willCloseFolder:(SBFolder *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willCloseFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willDestroyRootFolderController:(SBRootFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willDestroyRootViewController:(UIViewController<SBHIconRootViewProviding> *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willDismissPageManagementUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willOpenFolder:(SBFolder *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willOpenFolderController:(SBFolderController *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willPrepareIconViewForLaunch:(SBIconView *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willPresentPageManagementUsingAnimator:(id <UIViewImplicitlyAnimating>)arg2 context:(NSMutableDictionary *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willRemoveFakeStatusBar:(UIStatusBar *)arg2 forFolderController:(SBFolderController *)arg3;
- (void)iconManager:(SBHIconManager *)arg1 willRemoveViewControllerForIdentifier:(NSString *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willUseIconImageCache:(SBHIconImageCache *)arg2;
- (void)iconManager:(SBHIconManager *)arg1 willUseRootFolderControllerConfiguration:(SBRootFolderControllerConfiguration *)arg2;
- (bool)iconManagerCanBeginIconDrags:(SBHIconManager *)arg1;
- (bool)iconManagerCanSaveIconState:(SBHIconManager *)arg1;
- (bool)iconManagerCanUseSeparateWindowForRotation:(SBHIconManager *)arg1;
- (void)iconManagerDidDismissWidgetEditing:(SBHIconManager *)arg1;
- (void)iconManagerDidFinishInstallForIcon:(SBHIconManager *)arg1;
- (void)iconManagerDidNoteIconStateChangedExternally:(SBHIconManager *)arg1;
- (void)iconManagerDidSaveIconState:(SBHIconManager *)arg1;
- (void)iconManagerEditingDidChange:(SBHIconManager *)arg1;
- (void)iconManagerFolderAnimatingDidChange:(SBHIconManager *)arg1;
- (void)iconManagerIconDraggingDidChange:(SBHIconManager *)arg1;
- (void)iconManagerWillAnimateWidgetInsertion:(SBHIconManager *)arg1;
- (void)iconManagerWillPresentWidgetEditing:(SBHIconManager *)arg1;
- (long long)interfaceOrientationForIconManager:(SBHIconManager *)arg1;
- (bool)isEditingAllowedForIconManager:(SBHIconManager *)arg1;
- (bool)isFloatingDockVisibleForIconManager:(SBHIconManager *)arg1;
- (bool)isIconContentPossiblyVisibleOverApplicationForIconManager:(SBHIconManager *)arg1;
- (bool)isRootFolderContentVisibleForIconManager:(SBHIconManager *)arg1;
- (NSString *)localizedDefaultFolderNameForIconManager:(SBHIconManager *)arg1;
- (unsigned long long)maximumListCountForFoldersForIconManager:(SBHIconManager *)arg1;
- (void)presentLibraryOverlayForIconManager:(SBHIconManager *)arg1;
- (void)presentTodayOverlayForIconManager:(SBHIconManager *)arg1;
- (<SBRecycledViewsContainerProviding> *)recycledViewsContainerProviderForIconManager:(SBHIconManager *)arg1;
- (UIViewController *)viewControllerForPresentingViewControllersForIconManager:(SBHIconManager *)arg1;
- (UIWindow<SBIconDragPreviewContaining> *)windowForIconDragPreviewsForIconManager:(SBHIconManager *)arg1;

@end
