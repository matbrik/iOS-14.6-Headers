/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFSwiftUIParameterHostingComponent : CKStatefulViewComponent {
    <WFComponentNavigationContext> * _navigationContext;
    struct WFParameterComponentOptions { 
        bool editable; 
        bool processing; 
        bool becomeFirstResponder; 
        NSString *actionName; 
        WFModuleAppearance *appearance; 
        bool lastParameter; 
        NSString *widgetSizeClass; 
        UITraitCollection *traitCollection; 
    }  _options;
    WFParameter * _parameter;
    <WFParameterState> * _state;
    id /* block */  _updateBlock;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

@property (nonatomic, readonly) <WFComponentNavigationContext> *navigationContext;
@property (nonatomic, readonly) struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; id x5; bool x6; id x7; id x8; } options;
@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) <WFParameterState> *state;
@property (nonatomic, readonly) id /* block */ updateBlock;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;
@property (nonatomic, readonly) <WFVariableUIDelegate> *variableUIDelegate;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; id x5; bool x6; id x7; id x8; })arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)navigationContext;
- (struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; id x5; bool x6; id x7; id x8; })options;
- (id)parameter;
- (id)state;
- (id /* block */)updateBlock;
- (id)variableProvider;
- (id)variableUIDelegate;

@end
