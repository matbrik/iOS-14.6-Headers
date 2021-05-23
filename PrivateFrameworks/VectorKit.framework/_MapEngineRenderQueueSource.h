/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource> {
    struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct RealisticCommandBufferSelector {} *x4; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; struct _retain_objc { } x_5_1_3; struct _release_objc { } x_5_1_4; } x5; struct shared_ptr<ggl::DisplayLink> { struct DisplayLink {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop>> { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop>> { struct SnapshotRunLoop {} *x_1_2_1; } x_7_1_1; } x7; struct RunLoop {} *x8; struct unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager>> { struct __compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager>> { struct AnimationManager {} *x_1_2_1; } x_9_1_1; } x9; } * _mapEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct RealisticCommandBufferSelector {} *x4; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; struct _retain_objc { } x_5_1_3; struct _release_objc { } x_5_1_4; } x5; struct shared_ptr<ggl::DisplayLink> { struct DisplayLink {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop>> { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop>> { struct SnapshotRunLoop {} *x_1_2_1; } x_7_1_1; } x7; struct RunLoop {} *x8; struct unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager>> { struct __compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager>> { struct AnimationManager {} *x_1_2_1; } x_9_1_1; } x9; }*)arg1;
- (bool)isDelayedRenderQueueConsumptionSupported;
- (struct RenderQueue { struct PassDescriptor { struct AttachmentActions { int x_1_2_1; int x_1_2_2; } x_1_1_1[4]; struct AttachmentActions { int x_2_2_1; int x_2_2_2; } x_1_1_2; struct AttachmentActions { int x_3_2_1; int x_3_2_2; } x_1_1_3; } x1; struct vector<ggl::RenderQueue::Pass, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator>> { struct Pass {} *x_2_1_1; struct Pass {} *x_2_1_2; struct __compressed_pair<ggl::RenderQueue::Pass *, geo::StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator>> { struct Pass {} *x_3_2_1; struct StdAllocator<ggl::RenderQueue::Pass, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_2_1_3; } x2; struct vector<ggl::CommandBuffer *, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator>> { struct CommandBuffer {} **x_3_1_1; struct CommandBuffer {} **x_3_1_2; struct __compressed_pair<ggl::CommandBuffer **, geo::StdAllocator<ggl::CommandBuffer *, ggl::Allocator>> { struct CommandBuffer {} **x_3_2_1; struct StdAllocator<ggl::CommandBuffer *, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_3_1_3; } x3; }*)renderQueueForTimestamp:(double)arg1;

@end