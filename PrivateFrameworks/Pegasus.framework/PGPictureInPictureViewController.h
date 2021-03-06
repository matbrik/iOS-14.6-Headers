/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureViewController : UIViewController <PGCommandHandler, PGPlaybackStateDiffConsumer> {
    <PGPictureInPictureAnalyticsDelegate> * _analyticsDelegate;
    NSUUID * _analyticsSessionUUID;
    NSUUID * _analyticsSourceUUID;
    PGPictureInPictureApplication * _application;
    UIView * _backgroundView;
    bool  _canStartShowingChrome;
    UIView * _containerView;
    <PGPictureInPictureViewControllerContentContainer> * _contentContainer;
    struct { 
        unsigned int prepareStopAnimationWithCompletionHandler : 1; 
        unsigned int acquireInterfaceOrientationLock : 1; 
        unsigned int relinquishInterfaceOrientationLock : 1; 
        unsigned int handleTapWhileStashedGesture : 1; 
        unsigned int handleDoubleTapGesture : 1; 
        unsigned int performRotateAnimationWithRotation : 1; 
    }  _contentContainerRespondsTo;
    PGLayerHostView * _contentView;
    PGControlsContainerView * _controlsContainerView;
    long long  _controlsStyle;
    <PGPictureInPictureViewControllerDelegate> * _delegate;
    PGHostedWindowHostingHandle * _hostedWindowHostingHandle;
    unsigned long long  _inFlightStashProgressAnimationIdentifier;
    unsigned long long  _inFlightStashTabAnimationIdentifier;
    bool  _initialLayerFrameIsNull;
    bool  _interactivelyResizing;
    bool  _isShowingChrome;
    bool  _isSuspended;
    PGPortalView * _leftSideContentPortalView;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumStashTabSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    bool  _prefersIdleTimerDisabled;
    PGPortalView * _rightSideContentPortalView;
    MTShadowView * _shadowView;
    bool  _startedAutomatically;
    PGStashedMaskView * _stashMaskView;
    bool  _stashTabHidden;
    bool  _stashTabShownLeft;
    PGStashView * _stashView;
    bool  _stashed;
    UITapGestureRecognizer * _stashedTapGestureRecognizer;
    MTShadowView * _tabShadowView;
    PGControlsViewModel * _viewModel;
    id /* block */  _waitForUIFinalizationCompletionBlock;
}

@property (nonatomic, readonly) PGPictureInPictureApplication *application;
@property (nonatomic) bool canStartShowingChrome;
@property (nonatomic) <PGPictureInPictureViewControllerContentContainer> *contentContainer;
@property (nonatomic, readonly) UIView *contentContainerView;
@property (nonatomic, readonly) long long controlsStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGPictureInPictureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (getter=isInteractivelyResizing, nonatomic) bool interactivelyResizing;
@property (getter=isInterrupted, nonatomic) bool interrupted;
@property (nonatomic, readonly) bool isStashTabHidden;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumStashTabSize;
@property (nonatomic, readonly) double preferredMinimumWidth;
@property (nonatomic, readonly) bool prefersIdleTimerDisabled;
@property (nonatomic, readonly) NSString *sourceSceneSessionPersistentIdentifier;
@property (nonatomic) bool stashed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PGControlsViewModel *viewModel;
@property (nonatomic, copy) id /* block */ waitForUIFinalizationCompletionBlock;

+ (void)animateViewWithAnimationType:(long long)arg1 initialSpringVelocity:(double)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (double)contentViewCornerRadius;

- (void).cxx_destruct;
- (void)_addMaskViewSubviewIfNeeded;
- (void)_handleTapWhileStashedGestureRecognizer:(id)arg1;
- (void)_layoutStashTabViewsIfNeeded;
- (void)_loadShadowViewIfNeeded;
- (void)_performStartAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)_performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)_resetStashTabViewsIfPossible;
- (void)_setPortalActive:(bool)arg1 left:(bool)arg2;
- (void)_setStashMaskActive:(bool)arg1;
- (void)_setStashedTabHidden:(bool)arg1 left:(bool)arg2;
- (void)_updateContentCornerRadiusForMaskActive:(bool)arg1;
- (void)_updatePrefersIdleTimerDisabled;
- (void)acquireInterfaceOrientationLock;
- (id)application;
- (bool)canStartShowingChrome;
- (id)contentContainer;
- (id)contentContainerView;
- (long long)controlsStyle;
- (void)deactivateAnalyticsSessionIfNeeded;
- (void)dealloc;
- (id)delegate;
- (void)handleCommand:(id)arg1;
- (id)hostedWindowHostingHandle;
- (void)hostedWindowSizeChangeBegan;
- (void)hostedWindowSizeChangeEnded;
- (id)initWithApplication:(id)arg1 controlsStyle:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isInteractivelyResizing;
- (bool)isInterrupted;
- (bool)isStashTabHidden;
- (void)loadView;
- (struct CGSize { double x1; double x2; })minimumStashTabSize;
- (void)notePictureInPictureStartedAutomatically:(bool)arg1;
- (void)notePictureInPictureWillStopForAppRequest:(bool)arg1 preferredFullScreenRestore:(bool)arg2;
- (void)performResumeAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)performStartAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performStopAnimated:(bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)performSuspendAnimationWithCompletionHandler:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (double)preferredMinimumWidth;
- (bool)prefersIdleTimerDisabled;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)prepareStopAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)relinquishInterfaceOrientationLock;
- (void)setAnalyticsDelegate:(id)arg1 analyticsSourceUUID:(id)arg2;
- (void)setCanStartShowingChrome:(bool)arg1;
- (void)setContentContainer:(id)arg1;
- (void)setContentViewHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setInteractivelyResizing:(bool)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setMinimumStashTabSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShowsPictureInPictureUnavailableIndicator:(bool)arg1;
- (void)setStashProgress:(double)arg1;
- (void)setStashTabHidden:(bool)arg1 left:(bool)arg2 withSpringBehavior:(id)arg3;
- (void)setStashed:(bool)arg1;
- (void)setWaitForUIFinalizationCompletionBlock:(id /* block */)arg1;
- (void)showChrome:(bool)arg1 animated:(bool)arg2;
- (bool)showsPictureInPictureUnavailableIndicator;
- (id)sourceSceneSessionPersistentIdentifier;
- (bool)stashed;
- (void)updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updatePlaybackStateWithDiff:(id)arg1;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillLayoutSubviews;
- (id /* block */)waitForUIFinalizationCompletionBlock;

@end
