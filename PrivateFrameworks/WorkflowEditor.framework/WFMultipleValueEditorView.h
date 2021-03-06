/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFMultipleValueEditorView : UIView <UITableViewDataSource, UITableViewDelegatePrivate, WFModuleSummaryEditorDelegate, WFMultipleValueEditorViewCellDelegate> {
    NSString * _addNewItemCellTitle;
    NSSet * _allowedVariableTypes;
    WFModuleSummaryEditor * _currentEditor;
    <WFMultipleValueEditorViewDelegate> * _delegate;
    MTVisualStylingProvider * _fillProvider;
    NSArray * _items;
    NSString * _localizedNewItemTypeName;
    <WFComponentNavigationContext> * _navigationContext;
    UIColor * _overridingCellBackgroundColor;
    WFParameter * _parameter;
    bool  _standaloneVariablesAsContentItems;
    WFMultipleValueParameterState * _state;
    UITableView * _tableView;
    NSIndexPath * _textEditingCellIndexPath;
    id /* block */  _updateBlock;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
    bool  _variablesDisabled;
    NSString * _widgetSizeClass;
}

@property (nonatomic, readonly) NSString *addNewItemCellTitle;
@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic, retain) WFModuleSummaryEditor *currentEditor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFMultipleValueEditorViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic, retain) MTVisualStylingProvider *fillProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *localizedNewItemTypeName;
@property (nonatomic) <WFComponentNavigationContext> *navigationContext;
@property (nonatomic, retain) UIColor *overridingCellBackgroundColor;
@property (nonatomic, retain) WFParameter *parameter;
@property (getter=isScrollEnabled, nonatomic) bool scrollEnabled;
@property (nonatomic) bool standaloneVariablesAsContentItems;
@property (nonatomic, copy) WFMultipleValueParameterState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, retain) NSIndexPath *textEditingCellIndexPath;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic) bool variablesDisabled;
@property (nonatomic, copy) NSString *widgetSizeClass;

- (void).cxx_destruct;
- (void)_setState:(id)arg1;
- (id)accessibilityElements;
- (void)addNewItemAtIndexPath:(id)arg1;
- (id)addNewItemCellTitle;
- (id)addNewItemIndexPath;
- (id)allowedVariableTypes;
- (void)beginEditingWithContext:(id)arg1;
- (void)configureCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)configureCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)currentEditor;
- (void)dealloc;
- (id)delegate;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)editItemAtIndexPath:(id)arg1;
- (id)fillProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isAccessibilityElement;
- (bool)isEditable;
- (bool)isScrollEnabled;
- (id)items;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)localizedNewItemTypeName;
- (void)movedItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)multipleValueEditorViewCell:(id)arg1 didUpdateParameterState:(id)arg2;
- (void)multipleValueEditorViewCellDidInvalidateSize:(id)arg1;
- (void)multipleValueEditorViewCellDidRequestEditing:(id)arg1;
- (id)navigationContext;
- (id)overridingCellBackgroundColor;
- (id)parameter;
- (id)reuseIdentifierForIndexPath:(id)arg1;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setCurrentEditor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setFillProvider:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLocalizedNewItemTypeName:(id)arg1;
- (void)setNavigationContext:(id)arg1;
- (void)setOverridingCellBackgroundColor:(id)arg1;
- (void)setParameter:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setStandaloneVariablesAsContentItems:(bool)arg1;
- (void)setState:(id)arg1;
- (void)setTextEditingCellIndexPath:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariablesDisabled:(bool)arg1;
- (void)setWidgetSizeClass:(id)arg1;
- (bool)standaloneVariablesAsContentItems;
- (id)state;
- (void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
- (void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(bool)arg2 withTextAttachmentToEdit:(id)arg3;
- (void)summaryEditorDidRequestTextEntry:(id)arg1;
- (id)tableView;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)textEditingCellIndexPath;
- (id /* block */)updateBlock;
- (void)updateCells;
- (void)updatedItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)variableProvider;
- (id)variableUIDelegate;
- (bool)variablesDisabled;
- (id)widgetSizeClass;

@end
