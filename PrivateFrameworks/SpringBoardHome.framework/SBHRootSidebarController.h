/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHRootSidebarController : UIViewController <SBHSidebarProvider, UIGestureRecognizerDelegate> {
    UIViewController * _avocadoViewController;
    SBHDateHeaderViewController * _dateViewController;
    <SBHSidebarProviderDelegate> * _delegate;
    NSLayoutConstraint * _dockHeightConstraint;
    unsigned long long  _layoutInsetsIgnoredEdges;
    _UILegibilitySettings * _legibilitySettings;
    SBHSidebarVisualConfiguration * _sidebarVisualConfiguration;
    WGWidgetGroupViewController * _widgetViewController;
    NSMutableArray * _widgetViewControllerConstraints;
}

@property (nonatomic, retain) UIViewController *avocadoViewController;
@property (nonatomic, readonly) SBHDateHeaderViewController *dateViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHSidebarProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *dockHeightConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutInsetsIgnoredEdges;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) WGWidgetGroupViewController *widgetViewController;
@property (nonatomic, retain) NSMutableArray *widgetViewControllerConstraints;

- (void).cxx_destruct;
- (void)_addEditButtonForWidgetGroupViewController:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_configureAvocadoViewController;
- (void)_configureLayoutMargins;
- (void)_configureWidgetViewController;
- (void)_setupConstraintsForViewController:(id)arg1;
- (void)_updateDockHeightConstraint;
- (id)avocadoViewController;
- (id)dateViewController;
- (id)delegate;
- (id)dockHeightConstraint;
- (unsigned long long)layoutInsetsIgnoredEdges;
- (id)legibilitySettings;
- (void)setAvocadoViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockHeightConstraint:(id)arg1;
- (void)setEditingIcons:(bool)arg1;
- (void)setLayoutInsetsIgnoredEdges:(unsigned long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSidebarVisualConfiguration:(id)arg1;
- (void)setWidgetViewController:(id)arg1;
- (void)setWidgetViewControllerConstraints:(id)arg1;
- (id)sidebarVisualConfiguration;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)widgetViewController;
- (id)widgetViewControllerConstraints;

@end