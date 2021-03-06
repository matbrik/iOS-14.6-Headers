/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFParameterLayoutComponent : CKComponent {
    CKComponent * _controlComponent;
    struct WFCompressionResistance { 
        int _type; 
        double _value; 
    }  _controlResistance;
    NSString * _label;
    CKInsetComponent * _labelComponent;
    NSArray * _labelsToAlignTo;
    struct CKTypedComponentAction<> { 
        unsigned long long _variant; 
        id _target; 
        CKComponentScopeHandle *_scopeHandle; 
        SEL _selector; 
    }  _selectionAction;
    struct WFParameterLayoutComponentStyle { 
        UIColor *backgroundColor; 
        UIColor *highlightedBackgroundColor; 
        UIFont *labelFont; 
        UIColor *labelColor; 
    }  _style;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) CKComponent *controlComponent;
@property (nonatomic, readonly) struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; } selectionAction;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
+ (id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 selectionAction:(struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })arg3 selectionEnabled:(bool)arg4 traitCollection:(id)arg5 style:(const struct WFParameterLayoutComponentStyle { id x1; id x2; id x3; id x4; }*)arg6 accessibility:(const struct WFParameterLayoutComponentAccessibility { bool x1; id x2; id x3; id x4; unsigned long long x5; }*)arg7 controlResistance:(const struct WFCompressionResistance { int x1; double x2; }*)arg8 controlComponent:(id)arg9;
+ (id)newWithView:(const struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 size:(const struct CKComponentSize { struct CKRelativeDimension { int x_1_1_1; double x_1_1_2; } x1; struct CKRelativeDimension { int x_2_1_1; double x_2_1_2; } x2; struct CKRelativeDimension { int x_3_1_1; double x_3_1_2; } x3; struct CKRelativeDimension { int x_4_1_1; double x_4_1_2; } x4; struct CKRelativeDimension { int x_5_1_1; double x_5_1_2; } x5; struct CKRelativeDimension { int x_6_1_1; double x_6_1_2; } x6; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)controlComponent;
- (void)handleParameterLayoutPressed;
- (struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })selectionAction;

@end
