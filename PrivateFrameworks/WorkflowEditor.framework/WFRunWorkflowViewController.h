/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFRunWorkflowViewController : UIViewController <QLPreviewControllerPrivateDelegate, UIDropInteractionDelegate, UIScrollViewDelegate, WFModuleDelegate, WFModuleModelProvider, WFModulesQuickLookViewDelegate, WFModulesSupplementaryViewDataSource, WFRunWorkflowFooterViewDelegate, WFRunWorkflowToolbarDelegate, WFWorkflowControllerDelegate> {
    bool  _clearsWorkflowSettings;
    id /* block */  _completionHandler;
    WFAction * _currentlyRunningAction;
    WFDatabase * _database;
    <WFRunWorkflowViewControllerDelegate> * _delegate;
    WFDialogTransformer * _dialogTransformer;
    bool  _droppingInputContent;
    unsigned long long  _editingState;
    WFRunWorkflowFooterView * _footerView;
    bool  _indicatesLoadingBeforeRunning;
    WFAction * _lastRunningAction;
    id /* block */  _prepareToRunCompletion;
    NSIndexPath * _prepareToRunIndexPath;
    WFWorkflowRunEvent * _runEvent;
    bool  _runningFromOtherWorkflow;
    WFWorkflow * _workflow;
    WFWorkflowController * _workflowController;
    WFContentCollection * _workflowInput;
    WFWorkflowViewController * _workflowViewController;
}

@property (nonatomic) bool clearsWorkflowSettings;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) WFAction *currentlyRunningAction;
@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFRunWorkflowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFDialogTransformer *dialogTransformer;
@property (nonatomic) bool droppingInputContent;
@property (nonatomic, readonly) unsigned long long editingState;
@property (nonatomic) WFRunWorkflowFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool indicatesLoadingBeforeRunning;
@property (nonatomic, retain) WFAction *lastRunningAction;
@property (nonatomic, copy) id /* block */ prepareToRunCompletion;
@property (nonatomic, retain) NSIndexPath *prepareToRunIndexPath;
@property (nonatomic, retain) WFWorkflowRunEvent *runEvent;
@property (nonatomic) bool runningFromOtherWorkflow;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFRunWorkflowToolbar *toolbar;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, retain) WFWorkflowController *workflowController;
@property (nonatomic, retain) WFContentCollection *workflowInput;
@property (nonatomic, readonly) WFWorkflowViewController *workflowViewController;

- (void).cxx_destruct;
- (void)accessibilityAnnounce:(id)arg1;
- (bool)accessibilityPerformMagicTap;
- (void)checkModulePreparationScrollState;
- (void)clearQuickLook;
- (bool)clearsWorkflowSettings;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id /* block */)completionHandler;
- (id)createModelForAction:(id)arg1;
- (id)currentlyRunningAction;
- (id)database;
- (void)dealloc;
- (id)delegate;
- (id)dialogTransformer;
- (void)dismissViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (bool)droppingInputContent;
- (unsigned long long)editingState;
- (void)finishWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(bool)arg3;
- (id)footerView;
- (void)generateNewModelsAndReload;
- (unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (id)indexPathForAction:(id)arg1;
- (bool)indicatesLoadingBeforeRunning;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 cellConfigurationFunction:(int (*)arg3;
- (id)keyCommands;
- (id)lastRunningAction;
- (void)loadView;
- (id)module:(id)arg1 displayableErrorForResourceError:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)prepareToRunCompletion;
- (id)prepareToRunIndexPath;
- (void)presentSettingsViewController;
- (bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewControllerWillDismiss:(id)arg1;
- (void)quickLookView:(id)arg1 clickedShare:(id)arg2 forContentItem:(id)arg3;
- (void)quickLookViewWantsFullscreen:(id)arg1;
- (void)resetToolbar;
- (id)runEvent;
- (void)runToolbarPlayTapped:(id)arg1;
- (void)runToolbarStopTapped:(id)arg1;
- (void)runWorkflowFooterViewDidSelectAddButton:(id)arg1;
- (void)runWorkflowFromKeyPress;
- (void)runWorkflowFromSource:(id)arg1;
- (void)runWorkflowFromSource:(id)arg1 withInput:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)runningFromOtherWorkflow;
- (void)scrollToQuickLook;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setClearsWorkflowSettings:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentlyRunningAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialogTransformer:(id)arg1;
- (void)setDroppingInputContent:(bool)arg1;
- (void)setEditingState:(unsigned long long)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setFooterView:(id)arg1;
- (void)setIndicatesLoadingBeforeRunning:(bool)arg1;
- (void)setLastRunningAction:(id)arg1;
- (void)setPrepareToRunCompletion:(id /* block */)arg1;
- (void)setPrepareToRunIndexPath:(id)arg1;
- (void)setRunEvent:(id)arg1;
- (void)setRunningFromOtherWorkflow:(bool)arg1;
- (void)setWorkflowController:(id)arg1;
- (void)setWorkflowInput:(id)arg1;
- (bool)shouldShowAddButton;
- (bool)shouldShowQuickLookView;
- (id)sourceViewForQuickLook;
- (void)stopWorkflow;
- (id)toolbar;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentInset;
- (void)updateQuickLookWithCompletion:(id /* block */)arg1;
- (void)updateToolbarItemsEnabledState;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)workflow;
- (id)workflowController;
- (void)workflowController:(id)arg1 actionDidRequestWorkflowExit:(id)arg2;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(bool)arg3;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;
- (id)workflowInput;
- (id)workflowViewController;

@end
