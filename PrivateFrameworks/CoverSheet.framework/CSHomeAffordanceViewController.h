/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSHomeAffordanceViewController : CSCoverSheetViewControllerBase {
    UIView * _counterRotationView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _homeAffordanceOffset;
    CSHomeAffordanceView * _homeAffordanceView;
    long long  _orientation;
    NSMutableArray * _rotationWrapperViews;
    SBFHomeGrabberSettings * _settings;
    bool  _suppressAnimationForPointer;
    UIHoverGestureRecognizer * _suppressAnimationForPointerGestureRecognizer;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } homeAffordanceOffset;
@property (nonatomic, readonly) CSHomeAffordanceView *homeAffordanceView;

- (void).cxx_destruct;
- (id)_addWrapperViewWithOrientation:(long long)arg1;
- (bool)_canShowWhileLocked;
- (void)_handleSuppressAnimationForPointerGesture:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_homeAffordanceRestingFrame;
- (void)_layoutHomeAffordance;
- (void)aggregateAppearance:(id)arg1;
- (struct CGPoint { double x1; double x2; })homeAffordanceOffset;
- (id)homeAffordanceView;
- (void)setHomeAffordanceOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end