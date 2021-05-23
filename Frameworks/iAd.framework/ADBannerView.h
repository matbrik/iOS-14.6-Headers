/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate> {
    double  _adDataLoadTime;
    NSDate * _adDisplayDate;
    NSString * _adResponseId;
    ADAdSpace * _adSpace;
    long long  _adType;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    double  _bannerLoadTime;
    bool  _bannerLoaded;
    bool  _bannerViewActionInProgress;
    double  _constraintBasedWidth;
    bool  _createdForIBInternal;
    bool  _debugHighlightEnabled;
    bool  _determiningConstraintBasedWidth;
    bool  _dimmed;
    ADDimmerView * _dimmerView;
    bool  _displayed;
    UIView * _highlightClippedView;
    UIView * _highlightHittableView;
    NSTimer * _highlightUpdateTimer;
    UILabel * _idLbl;
    bool  _imageUpdateEnabled;
    bool  _inSecondConstraintsPass;
    int  _internalAdType;
    bool  _internalAdTypeCanChange;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeSize;
    long long  _lastErrorCode;
    ADLayoutOptions * _layoutOptions;
    NSDate * _loadEndTime;
    NSDate * _loadStartTime;
    long long  _options;
    NSString * _originID;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitSize;
    ADPrivacyMarker * _privacyMarker;
    bool  _reUsed;
    bool  _requestCalledbackError;
    int  _screenfuls;
    bool  _scrolling;
    NSURL * _serverURL;
    int  _slotPosition;
    <ADBannerViewDelegate> * _weakDelegate;
    <ADBannerViewInternalDelegate> * _weakInternalDelegate;
    NSDate * _webLoadStartTime;
}

@property (nonatomic) double adDataLoadTime;
@property (nonatomic, copy) NSDate *adDisplayDate;
@property (nonatomic, copy) NSString *adResponseId;
@property (nonatomic, retain) ADAdSpace *adSpace;
@property (nonatomic, readonly) UIView *adSpaceView;
@property (nonatomic, readonly) long long adType;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (nonatomic) double bannerLoadTime;
@property (getter=isBannerLoaded, nonatomic, readonly) bool bannerLoaded;
@property (getter=isBannerViewActionInProgress, nonatomic) bool bannerViewActionInProgress;
@property (nonatomic) double constraintBasedWidth;
@property (nonatomic, readonly) bool createdForIBInternal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugHighlightEnabled;
@property (nonatomic) <ADBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool determiningConstraintBasedWidth;
@property (nonatomic) bool dimmed;
@property (nonatomic, retain) ADDimmerView *dimmerView;
@property (nonatomic) bool displayed;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightClippedView;
@property (nonatomic, retain) UIView *highlightHittableView;
@property (nonatomic, retain) NSTimer *highlightUpdateTimer;
@property (nonatomic, retain) UILabel *idLbl;
@property (nonatomic) bool imageUpdateEnabled;
@property (nonatomic) bool inSecondConstraintsPass;
@property (nonatomic, readonly) int internalAdType;
@property (nonatomic) bool internalAdTypeCanChange;
@property (nonatomic) struct CGSize { double x1; double x2; } landscapeSize;
@property (nonatomic) long long lastErrorCode;
@property (nonatomic, retain) ADLayoutOptions *layoutOptions;
@property (nonatomic, copy) NSDate *loadEndTime;
@property (nonatomic, copy) NSDate *loadStartTime;
@property (nonatomic, readonly) long long options;
@property (nonatomic, copy) NSString *originID;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitSize;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, retain) ADPrivacyMarker *privacyMarker;
@property (nonatomic) bool reUsed;
@property (nonatomic) bool requestCalledbackError;
@property (nonatomic) int screenfuls;
@property (nonatomic) bool scrolling;
@property (nonatomic, copy) NSURL *serverURL;
@property (nonatomic) int slotPosition;
@property (readonly) Class superclass;
@property (nonatomic) <ADBannerViewDelegate> *weakDelegate;
@property (nonatomic, copy) NSDate *webLoadStartTime;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adWindowBounds;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameThatFits:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(bool)arg3;
+ (struct CGSize { double x1; double x2; })_landscapeBannerSize;
+ (struct CGSize { double x1; double x2; })_portraitBannerSize;
+ (struct CGSize { double x1; double x2; })_sizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(bool)arg3;
+ (bool)requiresConstraintBasedLayout;
+ (void)setServerURL:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeFromBannerContentSizeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingElementAttributes;
- (void)_commonInit;
- (void)_forwardErrorToDelegate:(id)arg1;
- (id)_initWithInternalAdType:(int)arg1 layoutOptions:(id)arg2 options:(long long)arg3;
- (id)_initWithInternalAdType:(int)arg1 options:(long long)arg2;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetHighlightTimer;
- (void)_resetToBeginningOfDoublePass;
- (void)_setAdPrivacyMarkPosition;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (void)_updateHighlight:(id)arg1;
- (int)action;
- (double)adDataLoadTime;
- (id)adDisplayDate;
- (id)adResponseId;
- (id)adSpace;
- (id)adSpaceView;
- (long long)adType;
- (void)adlibManagedVideoAdDidCompletePlay:(int)arg1;
- (void)adlibManagedVideoAdDidImpress;
- (void)adlibManagedVideoAdDidPausePlay;
- (void)adlibManagedVideoAdDidResumePlay;
- (void)adlibManagedVideoAdDidTapForMoreInfo;
- (void)adlibManagedVideoAdDidTapVideo;
- (void)adlibManagedVideoAdDidToggleToMute:(bool)arg1;
- (id)advertisingSection;
- (id)audioURL;
- (id)authenticationUserName;
- (void)bannerDidAppear;
- (void)bannerDidDisappear;
- (double)bannerLoadTime;
- (void)bannerTappedAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)bannerTappedAtPoint:(struct CGPoint { double x1; double x2; })arg1 withMRAIDAction:(id)arg2;
- (void)beginAction;
- (bool)canReuseForContext:(id)arg1;
- (void)cancelBannerViewAction;
- (void)cancelScheduledAd;
- (double)constraintBasedWidth;
- (id)context;
- (bool)createdForIBInternal;
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint { double x1; double x2; })arg1 withMRAIDAction:(id)arg2;
- (id)currentAdIdentifier;
- (id)currentContentSizeIdentifier;
- (void)cycleImpressionImmediately;
- (void)dealloc;
- (bool)debugHighlightEnabled;
- (id)delegate;
- (bool)determiningConstraintBasedWidth;
- (void)didMoveToWindow;
- (bool)dimmed;
- (id)dimmerView;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)displayBannerView;
- (void)displayCreativeView;
- (bool)displayed;
- (bool)enableDimmerView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAction;
- (bool)hasImpressed;
- (bool)hasTransparencyDetails;
- (id)highlightClippedView;
- (id)highlightHittableView;
- (id)highlightUpdateTimer;
- (id)idLbl;
- (id)identifier;
- (bool)imageUpdateEnabled;
- (bool)inSecondConstraintsPass;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 adType:(long long)arg2;
- (id)initWithAdType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)internalAdType;
- (bool)internalAdTypeCanChange;
- (id)internalDelegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isBannerLoaded;
- (bool)isBannerViewActionInProgress;
- (struct CGSize { double x1; double x2; })landscapeSize;
- (long long)lastErrorCode;
- (id)layoutOptions;
- (void)layoutSubviews;
- (id)loadEndTime;
- (id)loadStartTime;
- (id)nativeMetadata;
- (void)nextContentVideoStartedPlaying;
- (long long)options;
- (id)originID;
- (void)pauseBannerMedia;
- (void)playbackAudioWasMuted:(id)arg1;
- (void)playbackAudioWasUnmuted:(id)arg1;
- (void)playbackDidEnterFullscreen:(id)arg1;
- (void)playbackDidExitFullscreen:(id)arg1;
- (void)playbackDidFinish:(id)arg1;
- (void)playbackDidPause:(id)arg1;
- (void)playbackDidReachProgressEvent:(id)arg1;
- (void)playbackDidResume:(id)arg1;
- (void)playbackDidStart:(id)arg1;
- (void)playbackFailed:(id)arg1;
- (void)playbackFailed:(id)arg1 forURL:(id)arg2;
- (void)playbackFinished:(id)arg1;
- (void)playbackMediaWasSkipped:(id)arg1;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)playbackStartedForImpressionSource:(int)arg1;
- (struct CGSize { double x1; double x2; })portraitSize;
- (void)prerollDidStart;
- (void)prerollDidStop;
- (id)presentingViewController;
- (void)privacyButtonWasTapped;
- (id)privacyMarker;
- (id)publicImpressionAttributes;
- (bool)reUsed;
- (void)registerVideoPlayerForAdAnalytics:(id)arg1;
- (void)removeCreativeView;
- (void)reportNativeClickEvent;
- (bool)requestCalledbackError;
- (id)requiredContentSizeIdentifiers;
- (bool)requiresMRAID;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)resumeBannerMedia;
- (void)resumeImpressionCycling;
- (void)scheduleAd;
- (int)screenfuls;
- (bool)scrolling;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)serverStoryboardDidTransitionOut;
- (id)serverURL;
- (void)setAdDataLoadTime:(double)arg1;
- (void)setAdDisplayDate:(id)arg1;
- (void)setAdResponseId:(id)arg1;
- (void)setAdSpace:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBannerLoadTime:(double)arg1;
- (void)setBannerViewActionInProgress:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setConstraintBasedWidth:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (void)setDebugHighlightEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeterminingConstraintBasedWidth:(bool)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDimmerView:(id)arg1;
- (void)setDisplayed:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlightClippedView:(id)arg1;
- (void)setHighlightHittableView:(id)arg1;
- (void)setHighlightUpdateTimer:(id)arg1;
- (void)setIdLbl:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageUpdateEnabled:(bool)arg1;
- (void)setInSecondConstraintsPass:(bool)arg1;
- (void)setInternalAdType:(int)arg1;
- (void)setInternalAdTypeCanChange:(bool)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setLandscapeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastErrorCode:(long long)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setLoadEndTime:(id)arg1;
- (void)setLoadStartTime:(id)arg1;
- (void)setOriginID:(id)arg1;
- (void)setPortraitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrivacyMarker:(id)arg1;
- (void)setReUsed:(bool)arg1;
- (void)setRequestCalledbackError:(bool)arg1;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
- (void)setScreenfuls:(int)arg1;
- (void)setScrolling:(bool)arg1;
- (void)setServerURL:(id)arg1;
- (void)setSlotPosition:(int)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewSizeInPortrait:(struct CGSize { double x1; double x2; })arg1 inLandscape:(struct CGSize { double x1; double x2; })arg2;
- (void)setWeakDelegate:(id)arg1;
- (void)setWebLoadStartTime:(id)arg1;
- (bool)shouldTestVisibilityAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)skipThreshold;
- (int)slotPosition;
- (void)storyboardViewControllerDidPresent;
- (void)suspendImpressionCycling;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uniqueIdentifier;
- (void)unregisterVideoPlayerForAdAnalytics:(id)arg1;
- (void)updateConstraints;
- (void)userDidSkipPreroll;
- (id)videoAssets;
- (void)videoBannerDidLoad:(id)arg1;
- (void)videoBannerDidUnload:(id)arg1;
- (void)videoBannerTouched:(id)arg1;
- (void)videoBannerVisibilityDidChange:(id)arg1;
- (id)weakDelegate;
- (id)webLoadStartTime;

@end