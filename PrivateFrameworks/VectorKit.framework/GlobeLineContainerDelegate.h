/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GlobeLineContainerDelegate : NSObject <VKGlobeLineContainerDelegate> {
    struct RealisticRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList>> { struct __compressed_pair<md::PassList *, std::__1::default_delete<md::PassList>> { struct PassList {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<md::FrameGraphResourceRegistry, std::__1::default_delete<md::FrameGraphResourceRegistry>> { struct __compressed_pair<md::FrameGraphResourceRegistry *, std::__1::default_delete<md::FrameGraphResourceRegistry>> { struct FrameGraphResourceRegistry {} *x_1_2_1; } x_4_1_1; } x4; struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>>> { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> {} *x_5_1_1; struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> {} *x_5_1_2; struct __compressed_pair<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> *, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>>> { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> {} *x_3_2_1; } x_5_1_3; } x5; } * _renderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithRenderer:(struct RealisticRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList>> { struct __compressed_pair<md::PassList *, std::__1::default_delete<md::PassList>> { struct PassList {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<md::FrameGraphResourceRegistry, std::__1::default_delete<md::FrameGraphResourceRegistry>> { struct __compressed_pair<md::FrameGraphResourceRegistry *, std::__1::default_delete<md::FrameGraphResourceRegistry>> { struct FrameGraphResourceRegistry {} *x_1_2_1; } x_4_1_1; } x4; struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>>> { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> {} *x_5_1_1; struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> {} *x_5_1_2; struct __compressed_pair<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> *, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>>> { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>> {} *x_3_2_1; } x_5_1_3; } x5; }*)arg1;
- (void)lineContainerNeedsDisplay:(id)arg1;

@end