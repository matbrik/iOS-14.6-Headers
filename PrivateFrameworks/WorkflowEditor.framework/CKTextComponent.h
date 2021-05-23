/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKTextComponent : CKComponent {
    struct CKTextComponentAccessibilityContext { 
        NSNumber *isAccessibilityElement; 
        NSNumber *providesAccessibleElements; 
        struct CKComponentAccessibilityTextAttribute { 
            id /* block */ accessibilityLazyTextBlock; 
        } accessibilityLabel; 
    }  _accessibilityContext;
    struct CKTextKitAttributes { 
        NSAttributedString *attributedString; 
        NSAttributedString *truncationAttributedString; 
        NSCharacterSet *avoidTailTruncationSet; 
        long long lineBreakMode; 
        unsigned long long maximumNumberOfLines; 
        struct CGSize { 
            double width; 
            double height; 
        } shadowOffset; 
        UIColor *shadowColor; 
        double shadowOpacity; 
        double shadowRadius; 
        int (*layoutManagerFactory)(); 
    }  _attributes;
}

+ (id)newWithTextAttributes:(const struct CKTextKitAttributes { id x1; id x2; id x3; long long x4; unsigned long long x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; id x7; double x8; double x9; int (*x10)(); }*)arg1 viewAttributes:(const struct unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue>>> { struct __hash_table<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::__unordered_map_hasher<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::hash<CKComponentViewAttribute>, true>, std::__1::__unordered_map_equal<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::equal_to<CKComponentViewAttribute>, true>, std::__1::allocator<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>>> { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>> { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>> { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg2 options:(const struct CKTextComponentOptions { unsigned long long x1; struct CKTextComponentAccessibilityContext { id x_2_1_1; id x_2_1_2; struct CKComponentAccessibilityTextAttribute { id /* block */ x_3_2_1; } x_2_1_3; } x2; }*)arg3 size:(const struct CKComponentSize { struct CKRelativeDimension { int x_1_1_1; double x_1_1_2; } x1; struct CKRelativeDimension { int x_2_1_1; double x_2_1_2; } x2; struct CKRelativeDimension { int x_3_1_1; double x_3_1_2; } x3; struct CKRelativeDimension { int x_4_1_1; double x_4_1_2; } x4; struct CKRelativeDimension { int x_5_1_1; double x_5_1_2; } x5; struct CKRelativeDimension { int x_6_1_1; double x_6_1_2; } x6; }*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct MountResult { bool x1; struct MountContext { struct shared_ptr<CK::Component::ViewManager> { struct ViewManager {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_2_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_2_1_2; struct UIEdgeInsets { double x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; } x_2_1_3; bool x_2_1_4; } x2; })mountInContext:(const struct MountContext { struct shared_ptr<CK::Component::ViewManager> { struct ViewManager {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; bool x4; }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 children:(struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *x1; struct __shared_weak_count {} *x2; })arg3 supercomponent:(id)arg4;
- (void)wf_applyVisualStying:(id)arg1;

@end