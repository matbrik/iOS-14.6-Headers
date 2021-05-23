/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UINavigationItem : NSObject <NSCoding, _UIBarAppearanceChangeObserver> {
    bool  __alignLargeTitleAccessoryViewToBaseline;
    NSArray * __alternateLargeTitles;
    bool  __backgroundHidden;
    UIView * __canvasView;
    <_UINavigationItemChangeObserver> * __changeObserver;
    double  __idealCustomTitleWidth;
    UIView * __largeTitleAccessoryView;
    unsigned long long  __largeTitleAccessoryViewHorizontalAlignment;
    unsigned long long  __largeTitleTwoLineMode;
    UINavigationBar * __owningNavigationBar;
    bool  __preserveSearchBarAcrossTransitions;
    _UINavigationBarItemStackEntry * __stackEntry;
    double  __titleViewWidthForAnimations;
    NSString * __weeTitle;
    NSArray * _abbreviatedBackButtonTitles;
    bool  _alwaysShowsSearchBar;
    bool  _alwaysUseManualScrollEdgeAppearance;
    double  _autoScrollEdgeTransitionDistance;
    UIBarButtonItem * _backBarButtonItem;
    long long  _backButtonDisplayMode;
    NSString * _backButtonTitle;
    UIView * _backButtonView;
    _UINavigationBarPalette * _bottomPalette;
    UINavigationBarAppearance * _compactAppearance;
    id  _context;
    NSArray * _customLeftViews;
    NSArray * _customRightViews;
    UIView * _defaultTitleView;
    double  _fontScaleAdjustment;
    UIImageView * _frozenTitleView;
    bool  _hidesBackButton;
    long long  _largeTitleDisplayMode;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _largeTitleInsets;
    NSArray * _leftBarButtonItems;
    unsigned long long  _leftFlexibleSpaceCount;
    NSArray * _leftItemSpaceList;
    bool  _leftItemsSupplementBackButton;
    bool  _manualScrollEdgeAppearanceEnabled;
    double  _manualScrollEdgeAppearanceProgress;
    NSMutableDictionary * _minimumDesiredHeights;
    UINavigationBar * _navigationBar;
    NSString * _pendingTitle;
    NSString * _prompt;
    NSArray * _rightBarButtonItems;
    unsigned long long  _rightFlexibleSpaceCount;
    NSArray * _rightItemSpaceList;
    UINavigationBarAppearance * _scrollEdgeAppearance;
    UISearchController * _searchController;
    UINavigationBarAppearance * _standardAppearance;
    UIBarButtonItem * _synthesizedBackBarButtonItem;
    long long  _tag;
    NSString * _title;
    UIView * _titleView;
    bool  _useRelativeLargeTitleInsets;
}

@property (setter=_setAbbreviatedBackButtonTitles:, nonatomic, copy) NSArray *_abbreviatedBackButtonTitles;
@property (nonatomic, readonly) bool _alignLargeTitleAccessoryViewToBaseline;
@property (nonatomic, retain) NSArray *_alternateLargeTitles;
@property (setter=_setAlwaysUseManualScrollEdgeAppearance:, nonatomic) bool _alwaysUseManualScrollEdgeAppearance;
@property (setter=_setAutoScrollEdgeTransitionDistance:, nonatomic) double _autoScrollEdgeTransitionDistance;
@property (setter=_setBackButtonDisplayMode:, nonatomic) unsigned long long _backButtonDisplayMode;
@property (setter=_setBackgroundHidden:, nonatomic) bool _backgroundHidden;
@property (setter=_setBottomPalette:, nonatomic, retain) _UINavigationBarPalette *_bottomPalette;
@property (setter=_setCanvasView:, nonatomic, retain) UIView *_canvasView;
@property (setter=_setChangeObserver:, nonatomic) <_UINavigationItemChangeObserver> *_changeObserver;
@property (setter=_setFontScaleAdjustment:, nonatomic) double _fontScaleAdjustment;
@property (nonatomic, readonly) bool _hidesSearchBarWhenScrollingIfAllowed;
@property (setter=_setIdealCustomTitleWidth:, nonatomic) double _idealCustomTitleWidth;
@property (setter=_setIndependentBarStyle:, nonatomic) long long _independentBarStyle;
@property (setter=_setLargeTitleAccessoryView:, nonatomic, retain) UIView *_largeTitleAccessoryView;
@property (nonatomic, readonly) unsigned long long _largeTitleAccessoryViewHorizontalAlignment;
@property (setter=_setLargeTitleTwoLineMode:, nonatomic) unsigned long long _largeTitleTwoLineMode;
@property (setter=_setLeftFlexibleSpaceCount:, nonatomic) unsigned long long _leftFlexibleSpaceCount;
@property (setter=_setLeftItemSpaceList:, nonatomic, copy) NSArray *_leftItemSpaceList;
@property (getter=_isManualScrollEdgeAppearanceEnabled, setter=_setManualScrollEdgeAppearanceEnabled:, nonatomic) bool _manualScrollEdgeAppearanceEnabled;
@property (setter=_setManualScrollEdgeAppearanceProgress:, nonatomic) double _manualScrollEdgeAppearanceProgress;
@property (getter=_owningNavigationBar, setter=_setOwningNavigationBar:, nonatomic) UINavigationBar *_owningNavigationBar;
@property (setter=_setPendingTitle:, nonatomic, copy) NSString *_pendingTitle;
@property (setter=_setPreserveSearchBarAcrossTransitions:, nonatomic) bool _preserveSearchBarAcrossTransitions;
@property (setter=_setRightFlexibleSpaceCount:, nonatomic) unsigned long long _rightFlexibleSpaceCount;
@property (setter=_setRightItemSpaceList:, nonatomic, copy) NSArray *_rightItemSpaceList;
@property (nonatomic, readonly) UISearchController *_searchControllerIfAllowed;
@property (setter=_setStackEntry:, nonatomic) _UINavigationBarItemStackEntry *_stackEntry;
@property (setter=_setSupportsTwoLineLargeTitles:, nonatomic) bool _supportsTwoLineLargeTitles;
@property (nonatomic) double _titleViewWidthForAnimations;
@property (setter=_setWeeTitle:, nonatomic, copy) NSString *_weeTitle;
@property (nonatomic, retain) UIBarButtonItem *backBarButtonItem;
@property (nonatomic) long long backButtonDisplayMode;
@property (nonatomic, copy) NSString *backButtonTitle;
@property (nonatomic, copy) UINavigationBarAppearance *compactAppearance;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) UIBarButtonItem *customLeftItem;
@property (nonatomic, retain) UIView *customLeftView;
@property (nonatomic, retain) UIBarButtonItem *customRightItem;
@property (nonatomic, retain) UIView *customRightView;
@property (nonatomic, retain) UIView *customTitleView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesBackButton;
@property (nonatomic) bool hidesSearchBarWhenScrolling;
@property (nonatomic) long long largeTitleDisplayMode;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } largeTitleInsets;
@property (nonatomic, retain) UIBarButtonItem *leftBarButtonItem;
@property (nonatomic, copy) NSArray *leftBarButtonItems;
@property (nonatomic) bool leftItemsSupplementBackButton;
@property (nonatomic) UINavigationBar *navigationBar;
@property (nonatomic, copy) NSString *prompt;
@property (setter=pu_setBanner:, nonatomic, retain) PUAbstractNavigationBanner *pu_banner;
@property (setter=px_setBackButtonDisplayMode:, nonatomic) long long px_backButtonDisplayMode;
@property (setter=px_setBannerView:, nonatomic, retain) UIView *px_bannerView;
@property (setter=px_setDisableLargeTitle:, nonatomic) bool px_disableLargeTitle;
@property (setter=px_setHidesBackButtonInRegularWidth:, nonatomic) bool px_hidesBackButtonInRegularWidth;
@property (setter=px_setPreferredLargeTitleDisplayMode:, nonatomic) long long px_preferredLargeTitleDisplayMode;
@property (nonatomic, retain) UIBarButtonItem *rightBarButtonItem;
@property (nonatomic, copy) NSArray *rightBarButtonItems;
@property (nonatomic, copy) UINavigationBarAppearance *scrollEdgeAppearance;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) UIView *smu_largeTitleAccessoryView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } smu_largeTitleInsets;
@property (nonatomic, copy) UINavigationBarAppearance *standardAppearance;
@property (readonly) Class superclass;
@property (nonatomic) long long tag;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic) bool useRelativeLargeTitleInsets;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)defaultFont;

- (void).cxx_destruct;
- (id)_abbreviatedBackButtonTitles;
- (bool)_accumulateViewsFromItems:(id)arg1 isLeft:(bool)arg2 refreshViews:(bool)arg3;
- (id)_addDefaultTitleViewToNavigationBarIfNecessary:(id)arg1;
- (bool)_alignLargeTitleAccessoryViewToBaseline;
- (id)_alternateLargeTitles;
- (bool)_alwaysUseManualScrollEdgeAppearance;
- (double)_autoScrollEdgeTransitionDistance;
- (unsigned long long)_backButtonDisplayMode;
- (id)_backButtonTitleAllowingGenericTitles:(bool)arg1;
- (bool)_backgroundHidden;
- (id)_barButtonForBackButtonIndicator;
- (id)_bottomPalette;
- (id)_buttonForBackButtonIndicator;
- (id)_canvasView;
- (id)_changeObserver;
- (void)_cleanupFrozenTitleView;
- (id)_customLeftView;
- (id)_customLeftViewCreating:(bool)arg1;
- (id)_customLeftViews;
- (id)_customLeftViewsCreating:(bool)arg1;
- (id)_customRightView;
- (id)_customRightViewCreating:(bool)arg1;
- (id)_customRightViews;
- (id)_customRightViewsCreating:(bool)arg1;
- (id)_defaultTitleView;
- (double)_desiredHeightForBarMetrics:(long long)arg1 defaultHeightBlock:(id /* block */)arg2;
- (id)_effectiveBackBarButtonItem;
- (id)_firstNonSpaceItemInList:(id)arg1;
- (id)_firstNonSpaceLeftItem;
- (id)_firstNonSpaceRightItem;
- (double)_fontScaleAdjustment;
- (void)_freezeCurrentTitleView;
- (bool)_hasDefaultTitleView;
- (bool)_hidesSearchBarWhenScrollingIfAllowed;
- (double)_idealCustomTitleWidth;
- (id)_independentBackgroundImageForBarMetrics:(long long)arg1;
- (long long)_independentBarStyle;
- (id)_independentShadowImage;
- (bool)_isManualScrollEdgeAppearanceEnabled;
- (id)_largeTitleAccessoryView;
- (unsigned long long)_largeTitleAccessoryViewHorizontalAlignment;
- (unsigned long long)_largeTitleTwoLineMode;
- (id)_leftBarButtonItem;
- (id)_leftBarButtonItems;
- (unsigned long long)_leftFlexibleSpaceCount;
- (id)_leftItemSpaceList;
- (bool)_leftItemsWantBackButton;
- (double)_manualScrollEdgeAppearanceProgress;
- (void)_messageChangeObserver:(id)arg1 forTransitionFromSearchController:(id)arg2;
- (double)_minimumDesiredHeightForBarMetrics:(long long)arg1;
- (id)_minimumDesiredHeights;
- (void)_movedFromTopOfStack:(bool)arg1;
- (void)_movedToTopOfStack:(bool)arg1;
- (void)_movingFromTopOfStack;
- (void)_movingToTopOfStack;
- (bool)_needsSizeTransitionToItem:(id)arg1 barMetrics:(long long)arg2 defaultHeightBlock:(id /* block */)arg3;
- (id)_owningNavigationBar;
- (id)_pendingTitle;
- (bool)_preserveSearchBarAcrossTransitions;
- (void)_removeBackButtonView;
- (void)_removeBarButtonItemViews;
- (void)_removeContentInView:(id)arg1;
- (void)_removeTitleAndButtonViews;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 left:(bool)arg3;
- (id)_rightBarButtonItem;
- (id)_rightBarButtonItems;
- (unsigned long long)_rightFlexibleSpaceCount;
- (id)_rightItemSpaceList;
- (id)_searchControllerIfAllowed;
- (void)_setAbbreviatedBackButtonTitles:(id)arg1;
- (void)_setAlwaysUseManualScrollEdgeAppearance:(bool)arg1;
- (void)_setAutoScrollEdgeTransitionDistance:(double)arg1;
- (void)_setBackButtonDisplayMode:(unsigned long long)arg1;
- (void)_setBackButtonPressed:(bool)arg1;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(long long)arg2;
- (void)_setBackgroundHidden:(bool)arg1;
- (void)_setBottomPalette:(id)arg1;
- (void)_setBottomPaletteNeedsUpdate;
- (void)_setBottomPaletteNeedsUpdate:(id)arg1;
- (void)_setCanvasView:(id)arg1;
- (void)_setChangeObserver:(id)arg1;
- (void)_setCustomLeftRightView:(id)arg1 left:(bool)arg2;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)_setCustomRightView:(id)arg1;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setFontScaleAdjustment:(double)arg1;
- (void)_setIdealCustomTitleWidth:(double)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(long long)arg3;
- (void)_setIndependentBarStyle:(long long)arg1;
- (void)_setLargeTitleAccessoryView:(id)arg1;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(bool)arg2;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(bool)arg2 horizontalAlignment:(unsigned long long)arg3;
- (void)_setLargeTitleTwoLineMode:(unsigned long long)arg1;
- (void)_setLargeTitleViewDataSource:(id)arg1;
- (void)_setLeftBarButtonItem:(id)arg1;
- (void)_setLeftBarButtonItems:(id)arg1;
- (void)_setLeftFlexibleSpaceCount:(unsigned long long)arg1;
- (void)_setLeftItemSpaceList:(id)arg1;
- (void)_setManualScrollEdgeAppearanceEnabled:(bool)arg1;
- (void)_setManualScrollEdgeAppearanceProgress:(double)arg1;
- (void)_setMinimumDesiredHeight:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setOwningNavigationBar:(id)arg1;
- (void)_setPendingTitle:(id)arg1;
- (void)_setPreserveSearchBarAcrossTransitions:(bool)arg1;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)_setRightBarButtonItems:(id)arg1;
- (void)_setRightFlexibleSpaceCount:(unsigned long long)arg1;
- (void)_setRightItemSpaceList:(id)arg1;
- (void)_setStackEntry:(id)arg1;
- (void)_setSupportsTwoLineLargeTitles:(bool)arg1;
- (void)_setTitle:(id)arg1 animated:(bool)arg2;
- (void)_setTitle:(id)arg1 animated:(bool)arg2 matchBarButtonItemAnimationDuration:(bool)arg3;
- (void)_setTitleViewDataSource:(id)arg1;
- (void)_setWeeTitle:(id)arg1;
- (id)_stackEntry;
- (bool)_supportsTwoLineLargeTitles;
- (id)_titleView;
- (double)_titleViewWidthForAnimations;
- (void)_updateBarItemOwnersTo:(id)arg1;
- (void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
- (void)_updateViewsForBarSizeChangeAndApply:(bool)arg1;
- (bool)_wantsBackButtonIndicator;
- (id)_weeTitle;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)backBarButtonItem;
- (long long)backButtonDisplayMode;
- (id)backButtonTitle;
- (id)backButtonView;
- (id)compactAppearance;
- (id)context;
- (id)currentBackButtonTitle;
- (id)customLeftItem;
- (id)customLeftView;
- (id)customRightItem;
- (id)customRightView;
- (id)customTitleView;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)existingBackButtonView;
- (bool)hidesBackButton;
- (bool)hidesSearchBarWhenScrolling;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (long long)largeTitleDisplayMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })largeTitleInsets;
- (id)leftBarButtonItem;
- (id)leftBarButtonItems;
- (bool)leftItemsSupplementBackButton;
- (id)navigationBar;
- (id)prompt;
- (id)rightBarButtonItem;
- (id)rightBarButtonItems;
- (id)scrollEdgeAppearance;
- (id)searchController;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setBackButtonDisplayMode:(long long)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (void)setCompactAppearance:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCustomLeftItem:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(bool)arg2;
- (void)setCustomLeftView:(id)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(bool)arg2;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(bool)arg2;
- (void)setCustomRightView:(id)arg1;
- (void)setCustomRightView:(id)arg1 animated:(bool)arg2;
- (void)setCustomTitleView:(id)arg1;
- (void)setHidesBackButton:(bool)arg1;
- (void)setHidesBackButton:(bool)arg1 animated:(bool)arg2;
- (void)setHidesSearchBarWhenScrolling:(bool)arg1;
- (void)setLargeTitleDisplayMode:(long long)arg1;
- (void)setLargeTitleInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setLeftBarButtonItems:(id)arg1;
- (void)setLeftBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setLeftItemsSupplementBackButton:(bool)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(bool)arg3;
- (void)setPrompt:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setRightBarButtonItems:(id)arg1;
- (void)setRightBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setScrollEdgeAppearance:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setStandardAppearance:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setUseRelativeLargeTitleInsets:(bool)arg1;
- (void)set_alternateLargeTitles:(id)arg1;
- (void)set_alwaysUseManualScrollEdgeAppearance:(bool)arg1;
- (void)set_customLeftView:(id)arg1;
- (void)set_customLeftViews:(id)arg1;
- (void)set_customRightView:(id)arg1;
- (void)set_customRightViews:(id)arg1;
- (void)set_leftBarButtonItem:(id)arg1;
- (void)set_leftBarButtonItems:(id)arg1;
- (void)set_rightBarButtonItem:(id)arg1;
- (void)set_rightBarButtonItems:(id)arg1;
- (void)set_titleViewWidthForAnimations:(double)arg1;
- (id)standardAppearance;
- (long long)tag;
- (id)title;
- (id)titleView;
- (void)updateNavigationBarButtonsAnimated:(bool)arg1;
- (bool)useRelativeLargeTitleInsets;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (bool)_pu_shouldUpdateBarButtonItems:(id)arg1 withNewBarButtonItems:(id)arg2;
- (id)pu_banner;
- (void)pu_setBanner:(id)arg1;
- (void)pu_setDefaultBackBarButtonItemWithTitle:(id)arg1;
- (bool)pu_shouldUpdateLeftBarButtonItems:(id)arg1;
- (bool)pu_shouldUpdateRightBarButtonItems:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (void)ams_configureWithDefaultBackground;
- (void)ams_configureWithTransparentBackground;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (void)ob_applyAutomaticScrollToEdgeBehavior;
- (void)ob_applyAutomaticScrollToEdgeBehaviorWithDistance:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pkui_enableManualScrollEdgeAppearanceWithInitialProgress:(double)arg1;
- (void)pkui_setupScrollEdgeChromelessAppearance;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)_updateFinalLargeTitleDisplayMode;
- (long long)px_backButtonDisplayMode;
- (id)px_bannerView;
- (bool)px_disableLargeTitle;
- (bool)px_hidesBackButtonInRegularWidth;
- (long long)px_preferredLargeTitleDisplayMode;
- (void)px_setBackButtonDisplayMode:(long long)arg1;
- (void)px_setBannerView:(id)arg1;
- (void)px_setDisableLargeTitle:(bool)arg1;
- (void)px_setHidesBackButtonInRegularWidth:(bool)arg1;
- (void)px_setPreferredLargeTitleDisplayMode:(long long)arg1;
- (void)px_updateBackButtonVisibilityForTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (void)setSmu_largeTitleAccessoryView:(id)arg1;
- (void)setSmu_largeTitleInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)smu_largeTitleAccessoryView;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })smu_largeTitleInsets;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)ts_setBackButtonTitle:(id)arg1;
- (void)ts_setBottomPaletteMinimumHeight:(double)arg1;
- (void)ts_setBottomPalettePreferredHeight:(double)arg1;
- (void)ts_setBottomPaletteWithContentView:(id)arg1;
- (void)ts_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)fadeInTitleView;
- (void)fadeOutTitleView;
- (void)mergeValuesFromItem:(id)arg1;
- (void)resetAllValues;
- (void)setTitleView:(id)arg1 animated:(bool)arg2;

@end