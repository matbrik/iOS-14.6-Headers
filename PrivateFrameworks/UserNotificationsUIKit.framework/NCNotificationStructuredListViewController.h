/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationStructuredListViewController : UIViewController <NCLegibilitySettingsAdjusting, NCNotificationManagementViewPresenterDelegate, NCNotificationMasterListDelegate> {
    bool  _backgroundBlurred;
    <NCNotificationListCoalescingControlsHandler> * _coalescingControlsHandlerInForceTouchState;
    <NCNotificationStructuredListViewControllerDelegate> * _delegate;
    bool  _deviceAuthenticated;
    NCNotificationListSectionHeaderView * _headerViewInForceTouchState;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetMargins;
    double  _itemSpacing;
    NCNotificationManagementViewPresenter * _managementViewPresenter;
    NCNotificationMasterList * _masterList;
    NCNotificationListView * _masterListView;
    NCNotificationRequest * _notificationRequestRemovedWhilePresentingLongLook;
    NCNotificationViewController * _notificationViewControllerPresentingLongLook;
    NSHashTable * _observers;
    NCNotificationListTouchEaterManager * _touchEaterManager;
}

@property (nonatomic) bool backgroundBlurred;
@property (nonatomic, readonly) NSString *backgroundGroupNameBase;
@property (nonatomic) <NCNotificationListCoalescingControlsHandler> *coalescingControlsHandlerInForceTouchState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationStructuredListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } effectiveContentSize;
@property (nonatomic, readonly) bool hasVisibleContent;
@property (nonatomic, readonly) bool hasVisibleContentToReveal;
@property (readonly) unsigned long long hash;
@property (nonatomic) NCNotificationListSectionHeaderView *headerViewInForceTouchState;
@property (nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (getter=isHomeAffordanceVisible, nonatomic) bool homeAffordanceVisible;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetMargins;
@property (nonatomic, readonly) double itemSpacing;
@property (nonatomic, retain) NCNotificationManagementViewPresenter *managementViewPresenter;
@property (nonatomic, retain) NCNotificationMasterList *masterList;
@property (nonatomic, retain) NCNotificationListView *masterListView;
@property (nonatomic, retain) NCNotificationRequest *notificationRequestRemovedWhilePresentingLongLook;
@property (nonatomic) NCNotificationViewController *notificationViewControllerPresentingLongLook;
@property (nonatomic, retain) NSHashTable *observers;
@property (getter=isPresentingNotificationInLongLook, nonatomic, readonly) bool presentingNotificationInLongLook;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NCNotificationListTouchEaterManager *touchEaterManager;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_contentSizeCategoryDidChange;
- (void)_didChangeDeepestActionResponder;
- (void)_didChangeDeepestUnambiguousResponder;
- (bool)_forwarNotificationRequestToLongLookIfNecessary:(id)arg1;
- (id)_logDescription;
- (void)_requestAuthenticationAndPerformBlock:(id /* block */)arg1;
- (void)_resetCellWithRevealedActions;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)backgroundBlurred;
- (id)backgroundGroupNameBase;
- (id)backgroundGroupNameBaseForNotificationListComponent:(id)arg1;
- (id)coalescingControlsHandlerInForceTouchState;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)containerViewForPreviewInteractionPresentedContentForNotificationListComponent:(id)arg1;
- (id)delegate;
- (bool)dismissModalFullScreenAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })effectiveContentSize;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasVisibleContent;
- (bool)hasVisibleContentToReveal;
- (id)headerViewInForceTouchState;
- (id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (id)homeAffordancePanGesture;
- (id)init;
- (void)insertNotificationRequest:(id)arg1;
- (double)insetHorizontalMarginForNotificationListComponent:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMargins;
- (bool)interpretsViewAsContent:(id)arg1;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isDeviceAuthenticated;
- (bool)isHomeAffordanceVisible;
- (bool)isPresentingNotificationInLongLook;
- (double)itemSpacing;
- (id)legibilitySettingsForNotificationListComponent:(id)arg1;
- (void)listViewControllerPresentedByUserAction;
- (id)managementViewPresenter;
- (id)masterList;
- (id)masterListView;
- (void)migrateNotifications;
- (void)modifyNotificationRequest:(id)arg1;
- (id)newCaptureOnlyMaterialViewController;
- (void)notificationListComponent:(id)arg1 didAddNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didPresentCoalescingControlsHandler:(id)arg2 inForceTouchState:(bool)arg3;
- (void)notificationListComponent:(id)arg1 didPresentSectionHeaderView:(id)arg2 inForceTouchState:(bool)arg3;
- (void)notificationListComponent:(id)arg1 didRemoveNotificationViewController:(id)arg2;
- (void)notificationListComponent:(id)arg1 didTransitionActionsForNotificationCell:(id)arg2 revealed:(bool)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionCoalescingControlsHandler:(id)arg2 toClearState:(bool)arg3;
- (void)notificationListComponent:(id)arg1 didTransitionSectionHeaderView:(id)arg2 toClearState:(bool)arg3;
- (bool)notificationListComponent:(id)arg1 isClockNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2;
- (id)notificationListComponent:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)notificationListComponent:(id)arg1 requestsAuthenticationAndPerformBlock:(id /* block */)arg2;
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (void)notificationListComponent:(id)arg1 requestsPresentingManagementViewForNotificationRequest:(id)arg2 managementViewType:(unsigned long long)arg3 withPresentingView:(id)arg4 completion:(id /* block */)arg5;
- (id)notificationListComponent:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (bool)notificationListComponent:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)notificationListComponent:(id)arg1 willDismissLongLookForCancelActionForViewController:(id)arg2;
- (void)notificationListComponentChangedContent:(id)arg1;
- (void)notificationListComponentDidSignificantUserInteraction:(id)arg1;
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1;
- (bool)notificationListComponentShouldAllowLongPressGesture:(id)arg1;
- (bool)notificationListComponentShouldHintForDefaultAction:(id)arg1;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;
- (void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg4;
- (bool)notificationMasterList:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
- (bool)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;
- (bool)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;
- (id)notificationRequestRemovedWhilePresentingLongLook;
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (id)notificationUsageTrackingStateForNotificationListComponent:(id)arg1;
- (id)notificationViewControllerPresentingLongLook;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;
- (void)notifyContentObservers;
- (id)observers;
- (void)removeContentObserver:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)revealNotificationHistory:(bool)arg1 animated:(bool)arg2;
- (id)scrollView;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setCoalescingControlsHandlerInForceTouchState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setHeaderViewInForceTouchState:(id)arg1;
- (void)setHomeAffordancePanGesture:(id)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setManagementViewPresenter:(id)arg1;
- (void)setMasterList:(id)arg1;
- (void)setMasterListView:(id)arg1;
- (void)setNotificationRequestRemovedWhilePresentingLongLook:(id)arg1;
- (void)setNotificationViewControllerPresentingLongLook:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setTouchEaterManager:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)arg1;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(bool)arg2;
- (void)toggleMissedSectionActive:(bool)arg1 reason:(unsigned long long)arg2;
- (id)touchEaterManager;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end
