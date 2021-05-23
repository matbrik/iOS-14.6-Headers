/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUIMediaControlsViewController : UIViewController <TVRUIRemoteViewProvider> {
    <_TVRUIEventDelegate> * _buttonActionsDelegate;
    TVRUICaptionsButton * _captionsButton;
    <TVRUIDevice> * _device;
    bool  _showCaptionControl;
    bool  _showSkipControls;
    TVRUIButton * _skipBackwardButton;
    TVRUIButton * _skipForwardButton;
    <TVRUIStyleProvider> * _styleProvider;
}

@property (nonatomic) <_TVRUIEventDelegate> *buttonActionsDelegate;
@property (nonatomic, retain) TVRUICaptionsButton *captionsButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <TVRUIDevice> *device;
@property (readonly) unsigned long long hash;
@property (getter=isShowingCaptionControl, nonatomic) bool showCaptionControl;
@property (getter=isShowingSkipControls, nonatomic) bool showSkipControls;
@property (nonatomic, retain) TVRUIButton *skipBackwardButton;
@property (nonatomic, retain) TVRUIButton *skipForwardButton;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_captionsTapped:(id)arg1;
- (void)_createButtons;
- (void)_sendButtonTapped:(long long)arg1;
- (void)_skipBackwardTapped:(id)arg1;
- (void)_skipForwardTapped:(id)arg1;
- (id)buttonActionsDelegate;
- (id)captionsButton;
- (id)device;
- (bool)isShowingCaptionControl;
- (bool)isShowingSkipControls;
- (void)setButtonActionsDelegate:(id)arg1;
- (void)setCaptionsButton:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setShowCaptionControl:(bool)arg1;
- (void)setShowSkipControls:(bool)arg1;
- (void)setSkipBackwardButton:(id)arg1;
- (void)setSkipForwardButton:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)skipBackwardButton;
- (id)skipForwardButton;
- (id)styleProvider;
- (void)updateCaptionState:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end