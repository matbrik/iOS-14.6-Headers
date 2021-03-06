/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKTransactionalComponentDataSourceItem : NSObject {
    struct CKComponentBoundsAnimation { 
        double duration; 
        double delay; 
        unsigned long long mode; 
        unsigned long long options; 
        double springDampingRatio; 
        double springInitialVelocity; 
    }  _boundsAnimation;
    struct CKComponentLayout { 
        CKComponent *component; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { 
            struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } children; 
        NSDictionary *extra; 
    }  _layout;
    id  _model;
    CKComponentScopeRoot * _scopeRoot;
}

@property (nonatomic, readonly) struct CKComponentBoundsAnimation { double x1; double x2; unsigned long long x3; unsigned long long x4; double x5; double x6; } boundsAnimation;
@property (nonatomic, readonly) id model;
@property (nonatomic, readonly) CKComponentScopeRoot *scopeRoot;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentBoundsAnimation { double x1; double x2; unsigned long long x3; unsigned long long x4; double x5; double x6; })boundsAnimation;
- (id)initWithLayout:(const struct CKComponentLayout { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; }*)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(struct CKComponentBoundsAnimation { double x1; double x2; unsigned long long x3; unsigned long long x4; double x5; double x6; })arg4;
- (const struct CKComponentLayout { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>>> { struct vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild>> {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; }*)layout;
- (id)model;
- (id)scopeRoot;

@end
