/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate> {
    LPComponentView<LPTextStyleable> * _aboveTopCaptionView;
    LPComponentView<LPTextStyleable> * _belowBottomCaptionView;
    LPComponentView<LPTextStyleable> * _bottomCaptionView;
    LPCaptionBarButtonView * _buttonView;
    bool  _hasEverBuilt;
    LPInlineMediaPlaybackInformation * _inlinePlaybackInformation;
    LPCaptionBarAccessoryView * _leftAccessoryView;
    LPComponentView * _leftIconView;
    LPPlayButtonView * _playButton;
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPCaptionBarAccessoryView * _rightAccessoryView;
    LPComponentView * _rightIconView;
    LPCaptionBarStyle * _style;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textSafeAreaInset;
    LPVerticalTextStackView * _textStackView;
    LPComponentView<LPTextStyleable> * _topCaptionView;
    bool  _useProgressSpinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textSafeAreaInset;
@property (nonatomic) bool useProgressSpinner;

- (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (struct CGSize { double x1; double x2; })_layoutCaptionBarForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;
- (void)animateOut;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)button;
- (id)init;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2;
- (void)layoutComponentView;
- (void)setPlaybackInformation:(id)arg1;
- (void)setTextSafeAreaInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseProgressSpinner:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textSafeAreaInset;
- (bool)useProgressSpinner;

@end