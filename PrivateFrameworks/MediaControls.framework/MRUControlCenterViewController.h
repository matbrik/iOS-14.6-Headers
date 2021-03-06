/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUControlCenterViewController : UIViewController <MRUEndpointMetadataControllerObserver, MRUModuleViewController, MRUNowPlayingViewControllerDelegate, MediaControlsEndpointsManagerDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    UIViewController * _alertViewController;
    UICollectionViewDiffableDataSource * _dataSource;
    id /* block */  _dismissalBlock;
    MediaControlsEndpointsManager * _endpointsManager;
    id /* block */  _homeGestureDismissalAllowedBlock;
    bool  _onScreen;
    long long  _pendingNowPlayingExpandedLayout;
    id /* block */  _replaceRoutes;
    id /* block */  _routingCornerViewTappedBlock;
    MRUNowPlayingViewController * _selectedViewController;
    NSMutableDictionary * _viewControllers;
}

@property (nonatomic, retain) UIViewController *alertViewController;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalBlock;
@property (nonatomic, retain) MediaControlsEndpointsManager *endpointsManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ homeGestureDismissalAllowedBlock;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic) long long pendingNowPlayingExpandedLayout;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, copy) id /* block */ replaceRoutes;
@property (nonatomic, copy) id /* block */ routingCornerViewTappedBlock;
@property (nonatomic, retain) MRUNowPlayingViewController *selectedViewController;
@property (nonatomic, readonly) bool shouldPerformClickInteraction;
@property (nonatomic, readonly) bool shouldPerformHoverInteraction;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUControlCenterView *view;
@property (nonatomic, retain) NSMutableDictionary *viewControllers;
@property (nonatomic, retain) MRUControlCenterView *viewIfLoaded;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)alertViewController;
- (bool)canDismissPresentedContent;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)dataSource;
- (void)didSelectListState:(id)arg1;
- (void)didSelectQuickActionButton:(id)arg1;
- (void)dismiss;
- (void)dismissPresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id /* block */)dismissalBlock;
- (id)endpointsManager;
- (void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2;
- (void)endpointsManager:(id)arg1 defersRoutesReplacement:(id /* block */)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id /* block */)homeGestureDismissalAllowedBlock;
- (id)init;
- (bool)isOnScreen;
- (void)loadView;
- (void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)metadataController:(id)arg1 didUpdateApplicationIcon:(id)arg2;
- (void)metadataControllerDidChangeState:(id)arg1;
- (void)metadataControllerDidUpdateRoutingAvailability:(id)arg1;
- (void)metadataControllerRouteDidUpdate:(id)arg1;
- (bool)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1;
- (void)nowPlayingViewController:(id)arg1 applyLayout:(long long)arg2;
- (void)nowPlayingViewController:(id)arg1 didChangeSizeWithAnimations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)nowPlayingViewController:(id)arg1 showViewController:(id)arg2;
- (long long)pendingNowPlayingExpandedLayout;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentWidth;
- (bool)providesOwnPlatter;
- (id /* block */)replaceRoutes;
- (id /* block */)routingCornerViewTappedBlock;
- (id)selectedIdentifier;
- (id)selectedViewController;
- (void)setAlertViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)setEndpointsManager:(id)arg1;
- (void)setHomeGestureDismissalAllowedBlock:(id /* block */)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setPendingNowPlayingExpandedLayout:(long long)arg1;
- (void)setReplaceRoutes:(id /* block */)arg1;
- (void)setRoutingCornerViewTappedBlock:(id /* block */)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)shouldExpandModuleOnTouch:(id)arg1;
- (bool)shouldPerformHoverInteraction;
- (void)transitionToState:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateCell:(id)arg1 forIdentifier:(id)arg2;
- (void)updateCellForIdentifier:(id)arg1;
- (void)updateDiscoveryMode;
- (void)updateMetadataControllers;
- (void)updateMoreButtonVisibility;
- (void)updateSelectedViewControllerLayout;
- (void)updateViewControllers;
- (void)updateVisibilityForActiveCell:(bool)arg1 inActiveCells:(bool)arg2;
- (id)viewControllers;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
