/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFDictionaryEditorComponent : CKStatefulViewComponent {
    double  _additionalBottomMargin;
    NSSet * _allowedValueTypes;
    NSSet * _allowedVariableTypes;
    bool  _editable;
    NSArray * _keyValuePairs;
    NSString * _localizedNewItemTypeName;
    <WFComponentNavigationContext> * _navigationContext;
    id /* block */  _updateBlock;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
    bool  _variablesDisabled;
}

@property (nonatomic, readonly) double additionalBottomMargin;
@property (nonatomic, readonly, copy) NSSet *allowedValueTypes;
@property (nonatomic, readonly, copy) NSSet *allowedVariableTypes;
@property (nonatomic, readonly) bool editable;
@property (nonatomic, readonly) NSArray *keyValuePairs;
@property (nonatomic, readonly, copy) NSString *localizedNewItemTypeName;
@property (nonatomic, readonly) <WFComponentNavigationContext> *navigationContext;
@property (nonatomic, readonly) id /* block */ updateBlock;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;
@property (nonatomic, readonly) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic, readonly) bool variablesDisabled;

+ (id)newWithKeyValuePairs:(id)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3 navigationContext:(id)arg4 localizedNewItemTypeName:(id)arg5 variablesDisabled:(bool)arg6 allowedValueTypes:(id)arg7 allowedVariableTypes:(id)arg8 editable:(bool)arg9 updateBlock:(id /* block */)arg10 additionalBottomMargin:(double)arg11 size:(const struct CKComponentSize { struct CKRelativeDimension { int x_1_1_1; double x_1_1_2; } x1; struct CKRelativeDimension { int x_2_1_1; double x_2_1_2; } x2; struct CKRelativeDimension { int x_3_1_1; double x_3_1_2; } x3; struct CKRelativeDimension { int x_4_1_1; double x_4_1_2; } x4; struct CKRelativeDimension { int x_5_1_1; double x_5_1_2; } x5; struct CKRelativeDimension { int x_6_1_1; double x_6_1_2; } x6; }*)arg12;

- (void).cxx_destruct;
- (double)additionalBottomMargin;
- (id)allowedValueTypes;
- (id)allowedVariableTypes;
- (struct CKComponentLayout { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)editable;
- (id)keyValuePairs;
- (id)localizedNewItemTypeName;
- (id)navigationContext;
- (id /* block */)updateBlock;
- (id)variableProvider;
- (id)variableUIDelegate;
- (bool)variablesDisabled;

@end
