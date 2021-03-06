/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugDevice : MTLToolsDevice {
    struct MTLSamplerDescriptorHashMap { 
        struct unordered_map<std::__1::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned long long, 3>, unsigned int>>> { 
            struct __hash_table<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>>> { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned int _limit; 
    }  _argumentBufferSamplers;
    struct CheckerboardRenderTargetPipelineCache { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _cacheLock; 
        <MTLLibrary> *_library; 
        <MTLFunction> *_vertexFunction; 
        <MTLDepthStencilState> *_depthStencilState[2]; 
        MTLFunctionConstantValues *_fConstants; 
        struct unordered_map<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>, MTLDebugCheckerboardFillHashKey::Hash, std::__1::equal_to<MTLDebugCheckerboardFillHashKey>, std::__1::allocator<std::__1::pair<const MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> { 
            struct __hash_table<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__1::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, true>, std::__1::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__1::equal_to<MTLDebugCheckerboardFillHashKey>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, true>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__1::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__1::equal_to<MTLDebugCheckerboardFillHashKey>, true>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _cache; 
    }  _checkerboardRTPipelineCache;
    bool  _loadValidationEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _referenceTrackingCommandBufferLock;
    struct unordered_set<MTLDebugCommandBuffer *, std::__1::hash<MTLDebugCommandBuffer *>, std::__1::equal_to<MTLDebugCommandBuffer *>, std::__1::allocator<MTLDebugCommandBuffer *>> { 
        struct __hash_table<MTLDebugCommandBuffer *, std::__1::hash<MTLDebugCommandBuffer *>, std::__1::equal_to<MTLDebugCommandBuffer *>, std::__1::allocator<MTLDebugCommandBuffer *>> { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *>, std::__1::allocator<std::__1::__hash_node<MTLDebugCommandBuffer *, void *>>> { 
                struct __hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<MTLDebugCommandBuffer *, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<MTLDebugCommandBuffer *>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<MTLDebugCommandBuffer *>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _referenceTrackingCommandBuffers;
    bool  _storeValidationEnabled;
}

@property (readonly) bool loadValidationEnabled;
@property (readonly) bool storeValidationEnabled;

+ (bool)complainAboutSloppyTextureUsage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })accelerationStructureSizesWithDescriptor:(id)arg1;
- (void)addReferenceTrackingCommandBuffer:(id)arg1;
- (void)clearRenderEncoder:(id)arg1 writeMask:(unsigned long long)arg2 withCheckerboard:(float*)arg3;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id*)arg2;
- (bool)loadValidationEnabled;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3;
- (id)newDynamicLibrary:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)newEvent;
- (id)newFence;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2;
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newSharedEvent;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newSharedTextureWithDescriptor:(id)arg1;
- (id)newSharedTextureWithHandle:(id)arg1;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(bool)arg2;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (void)notifyExternalReferencesNonZeroOnDealloc:(id)arg1;
- (void)notifySamplerStateDeallocated:(id)arg1;
- (void)removeReferenceTrackingCommandBuffer:(id)arg1;
- (bool)storeValidationEnabled;
- (const struct MTLTargetDeviceArch { unsigned long long x1; unsigned int x2; char *x3; }*)targetDeviceInfo;
- (bool)validateDynamicLibrary:(id)arg1 state:(bool)arg2 error:(id*)arg3;
- (bool)validateDynamicLibraryURL:(id)arg1 error:(id*)arg2;
- (void)validateLinkedFunctions:(id)arg1;
- (void)validateMemorylessResource:(id)arg1 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg2;
- (void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg3;
- (void)validateResourceOptions:(unsigned long long)arg1 isTexture:(bool)arg2 isIOSurface:(bool)arg3 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg4;
- (void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3;

@end
