/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFEditWorkflowViewController : WFRunWorkflowViewController <UIGestureRecognizerDelegate, WFContentClassesToolbarDelegate, WFDragControllerDelegate, WFModuleDelegate, WFModulesCollectionViewDelegate, WFWorkflowEditingDelegate, WFWorkflowEmptyStateViewDelegate> {
    NSIndexPath * _actionRevealFromIndexPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  _actionRevealInitialOffset;
    NSIndexPath * _actionRevealToIndexPath;
    UIView * _borderView;
    NSHashTable * _currentDragControllers;
    WFActionDragFeedbackGenerator * _dragFeedbackGenerator;
    WFEditShortcutEvent * _editShortcutEvent;
    NSAttributedString * _emptyStateInstructionText;
    WFWorkflowEmptyStateView * _emptyStateView;
    UIButton * _endRevealButton;
    id /* block */  _endRevealGoBackHandler;
    id /* block */  _endRevealScrolledAwayHandler;
    UIView * _firstResponderHintView;
    NSLayoutConstraint * _hintBottomConstraint;
    NSHashTable * _moduleDragControllers;
    long long  _revealState;
    NSUndoManager * _undoManager;
    <WFVariableUIDelegate> * _variableUIDelegate;
    UIResponder * _wf_firstResponder;
}

@property (nonatomic, retain) NSIndexPath *actionRevealFromIndexPath;
@property (nonatomic) struct CGPoint { double x1; double x2; } actionRevealInitialOffset;
@property (nonatomic, retain) NSIndexPath *actionRevealToIndexPath;
@property (nonatomic, readonly) UIView *borderView;
@property (nonatomic, readonly) NSHashTable *currentDragControllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFEditWorkflowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFActionDragFeedbackGenerator *dragFeedbackGenerator;
@property (nonatomic, retain) WFEditShortcutEvent *editShortcutEvent;
@property (nonatomic, copy) NSAttributedString *emptyStateInstructionText;
@property (nonatomic, readonly) WFWorkflowEmptyStateView *emptyStateView;
@property (nonatomic, retain) UIButton *endRevealButton;
@property (nonatomic, copy) id /* block */ endRevealGoBackHandler;
@property (nonatomic, copy) id /* block */ endRevealScrolledAwayHandler;
@property (nonatomic) UIView *firstResponderHintView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *hintBottomConstraint;
@property (nonatomic, readonly) NSHashTable *moduleDragControllers;
@property (nonatomic) long long revealState;
@property (nonatomic) bool scrollsToTop;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic) UIResponder *wf_firstResponder;

+ (bool)displaysEmptyView;

- (void).cxx_destruct;
- (id)actionRevealFromIndexPath;
- (struct CGPoint { double x1; double x2; })actionRevealInitialOffset;
- (id)actionRevealToIndexPath;
- (id)actionsOnPasteboard;
- (void)appendActions:(id)arg1;
- (id)borderView;
- (bool)canBecomeFirstResponder;
- (bool)canMoveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (void)cancelRevealAction;
- (void)checkRevealActionScrollState;
- (void)cleanupAfterReveal;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)commitInsertionOfActions:(id)arg1 atIndexes:(id)arg2 allowUndo:(bool)arg3;
- (void)commitMovingOfActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 allowUndo:(bool)arg3;
- (void)commitRemovalOfActions:(id)arg1 allowUndo:(bool)arg2;
- (void)contentClassesToolbarTapped:(id)arg1;
- (id)createModelForAction:(id)arg1;
- (id)currentDragControllers;
- (void)dealloc;
- (void)didFinishAnimatingReveal;
- (void)didFinishAnimatingRevealGoBack;
- (void)didSelectEndRevealButton;
- (void)documentationPressedForModule:(id)arg1 withAction:(id)arg2 sender:(id)arg3;
- (void)dragController:(id)arg1 didEnterViewController:(id)arg2;
- (void)dragController:(id)arg1 didExitViewController:(id)arg2;
- (void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
- (bool)dragController:(id)arg1 shouldAcceptViewWithCompletion:(id /* block */)arg2;
- (void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
- (void)dragControllerWillBeginDragging:(id)arg1;
- (id)dragFeedbackGenerator;
- (id)editShortcutEvent;
- (id)emptyStateInstructionText;
- (id)emptyStateView;
- (void)emptyViewDidRequestActionDrawer:(id)arg1;
- (void)emptyViewDidRequestTutorial:(id)arg1;
- (id)endRevealButton;
- (id /* block */)endRevealGoBackHandler;
- (id /* block */)endRevealScrolledAwayHandler;
- (id)firstResponderHintView;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasActionsOnPasteboard;
- (id)hintBottomConstraint;
- (unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 allowsActionDragAndDrop:(bool)arg3;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 cellConfigurationFunction:(int (*)arg3;
- (id)initialIndexPathForDragController:(id)arg1;
- (id)keyCommands;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)loadView;
- (void)logEditEventIfNeccesary;
- (id)menuForModule:(id)arg1 withAction:(id)arg2;
- (bool)module:(id)arg1 setParameterState:(id)arg2 forParameter:(id)arg3 action:(id)arg4;
- (bool)module:(id)arg1 shouldAllowRemovingAction:(id)arg2;
- (id)moduleDragControllers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)paste:(id)arg1;
- (void)removeActionPressedForModule:(id)arg1 withAction:(id)arg2;
- (void)resetToolbar;
- (void)resetUIForRevealActionEnd;
- (void)resetVisibleCellStylesForEndReveal;
- (void)responderDidBeginEditing:(id)arg1;
- (void)responderDidEndEditing:(id)arg1;
- (void)responderDidType:(id)arg1;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(id /* block */)arg3 goBackHandler:(id /* block */)arg4 scrolledAwayHandler:(id /* block */)arg5;
- (long long)revealState;
- (void)runToolbarRedoTapped:(id)arg1;
- (void)runToolbarShareTapped:(id)arg1 sender:(id)arg2;
- (void)runToolbarUndoTapped:(id)arg1;
- (void)runWorkflowFromSource:(id)arg1;
- (void)scrollFirstResponderToVisible;
- (void)scrollToAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewToVisible:(id)arg1;
- (bool)scrollsToTop;
- (void)setActionRevealFromIndexPath:(id)arg1;
- (void)setActionRevealInitialOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setActionRevealToIndexPath:(id)arg1;
- (void)setDragFeedbackGenerator:(id)arg1;
- (void)setEditShortcutEvent:(id)arg1;
- (void)setEditingState:(unsigned long long)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setEmptyStateInstructionText:(id)arg1;
- (void)setEndRevealButton:(id)arg1;
- (void)setEndRevealGoBackHandler:(id /* block */)arg1;
- (void)setEndRevealScrolledAwayHandler:(id /* block */)arg1;
- (void)setFirstResponderHintView:(id)arg1;
- (void)setHintBottomConstraint:(id)arg1;
- (void)setRevealState:(long long)arg1;
- (void)setScrollsToTop:(bool)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setWf_firstResponder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoManager;
- (void)updateBorderWidth;
- (void)updateContentInsetAnimated:(bool)arg1;
- (void)updateEditEvent;
- (void)updateEditingStateAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateEmptyStateViewVisibilityAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)variableUIDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)wf_firstResponder;
- (void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2;
- (void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;
- (void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
- (void)workflow:(id)arg1 reloadActions:(id)arg2;
- (void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(id /* block */)arg3;

@end
