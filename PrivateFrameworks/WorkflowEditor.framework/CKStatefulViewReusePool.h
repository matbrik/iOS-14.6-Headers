/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKStatefulViewReusePool : NSObject {
    bool  _enqueuedPendingPurge;
    struct unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> { 
        struct __hash_table<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__1::__unordered_map_hasher<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, true>, std::__1::__unordered_map_equal<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *>>> { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, true>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, true>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pendingPool;
    bool  _pendingReusePoolEnabled;
    struct unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> { 
        struct __hash_table<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__1::__unordered_map_hasher<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, true>, std::__1::__unordered_map_equal<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *>>> { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, true>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::pair<__unsafe_unretained Class, id>, std::__1::__hash_value_type<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, true>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pool;
}

@property (nonatomic) bool pendingReusePoolEnabled;

+ (id)sharedPool;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dequeueStatefulViewForControllerClass:(Class)arg1 preferredSuperview:(id)arg2 context:(id)arg3;
- (void)enqueueStatefulView:(id)arg1 forControllerClass:(Class)arg2 context:(id)arg3 mayRelinquishBlock:(id /* block */)arg4;
- (bool)pendingReusePoolEnabled;
- (void)purgePendingPool;
- (void)setPendingReusePoolEnabled:(bool)arg1;

@end