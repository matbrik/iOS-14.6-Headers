/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMRealm : NSObject {
    NSHashTable * _collectionEnumerators;
    bool  _dynamic;
    struct RLMSchemaInfo { 
        struct unordered_map<NSString *, RLMClassInfo, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, RLMClassInfo>>> { 
            struct __hash_table<std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, RLMClassInfo>>> { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } m_objects; 
    }  _info;
    NSHashTable * _notificationHandlers;
    struct shared_ptr<realm::Realm> { 
        struct Realm {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _realm;
    struct unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo>> { 
        struct __compressed_pair<RLMResultsSetInfo *, std::__1::default_delete<RLMResultsSetInfo>> { 
            struct RLMResultsSetInfo {} *__value_; 
        } __ptr_; 
    }  _resultsSetInfo;
    RLMSchema * _schema;
    bool  _sendingNotifications;
}

@property (nonatomic) bool autorefresh;
@property (nonatomic, readonly) RLMRealmConfiguration *configuration;
@property (nonatomic, readonly) bool dynamic;
@property (nonatomic, readonly) struct Group { int (**x1)(); struct SlabAlloc { int (**x_2_1_1)(); unsigned long long x_2_1_2; struct Replication {} *x_2_1_3; unsigned long long x_2_1_4; /* Warning: unhandled struct encoding: '{atomic<unsigned long long>={__cxx_atomic_impl<unsigned long long' */ struct x_2_1_5; } x2; }*group; /* unknown property attribute:  std::__1::allocator<realm::Table *>>=^^{Table}}}BB{function<void (const realm::Group::CascadeNotification &)>={__value_func<void (const realm::Group::CascadeNotification &)>={type=[24C]}^{__base<void (const realm::Group::CascadeNotification &)>}}}{function<void ()>={__value_func<void ()>={type=[24C]}^{__base<void ()>}}}{shared_ptr<realm::metrics::Metrics>=^{Metrics}^{__shared_weak_count}}Q} */
@property (nonatomic, readonly) bool inWriteTransaction;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) NSHashTable *notificationHandlers;
@property (nonatomic, retain) RLMSchema *schema;

+ (id)asyncOpenWithConfiguration:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
+ (id)defaultRealm;
+ (bool)isCoreDebug;
+ (bool)performMigrationForConfiguration:(id)arg1 error:(id*)arg2;
+ (id)realmWithConfiguration:(id)arg1 error:(id*)arg2;
+ (id)realmWithSharedRealm:(struct shared_ptr<realm::Realm> { struct Realm {} *x1; struct __shared_weak_count {} *x2; })arg1 schema:(id)arg2;
+ (id)realmWithURL:(id)arg1;
+ (void)resetRealmState;
+ (unsigned long long)schemaVersionAtURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3;
+ (id)uncachedSchemalessRealmWithConfiguration:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addNotificationBlock:(id /* block */)arg1;
- (void)addObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addOrUpdateObject:(id)arg1;
- (void)addOrUpdateObjects:(id)arg1;
- (id)allObjects:(id)arg1;
- (bool)autorefresh;
- (void)beginWriteTransaction;
- (void)cancelWriteTransaction;
- (void)commitWriteTransaction;
- (bool)commitWriteTransaction:(id*)arg1;
- (bool)commitWriteTransactionWithoutNotifying:(id)arg1 error:(id*)arg2;
- (bool)compact;
- (id)configuration;
- (id)createObject:(id)arg1 withValue:(id)arg2;
- (void)dealloc;
- (void)deleteAllObjects;
- (void)deleteObject:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (void)detachAllEnumerators;
- (bool)dynamic;
- (struct Group { int (**x1)(); struct SlabAlloc { int (**x_2_1_1)(); unsigned long long x_2_1_2; struct Replication {} *x_2_1_3; unsigned long long x_2_1_4; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__1::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long x_1_3_1; } x_5_2_1; } x_2_1_5; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__1::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long x_1_3_1; } x_6_2_1; } x_2_1_6; struct Config { bool x_7_2_1; bool x_7_2_2; bool x_7_2_3; bool x_7_2_4; bool x_7_2_5; bool x_7_2_6; bool x_7_2_7; char *x_7_2_8; } x_2_1_7; struct map<int, realm::SlabAlloc::FreeBlock *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, realm::SlabAlloc::FreeBlock *>>> { struct __tree<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true>> { unsigned long long x_3_4_1; } x_1_3_3; } x_8_2_1; } x_2_1_8; } x2; }*)group;
- (bool)inWriteTransaction;
- (id)initPrivate;
- (void)invalidate;
- (bool)isEmpty;
- (id)notificationHandlers;
- (id)objectWithClassName:(id)arg1 forPrimaryKey:(id)arg2;
- (id)objects:(id)arg1 where:(id)arg2;
- (id)objects:(id)arg1 where:(id)arg2 args:(char *)arg3;
- (id)objects:(id)arg1 withPredicate:(id)arg2;
- (bool)refresh;
- (void)registerEnumerator:(id)arg1;
- (id)resolveThreadSafeReference:(id)arg1;
- (id)schema;
- (void)sendNotifications:(id)arg1;
- (void)setAutorefresh:(bool)arg1;
- (void)setNotificationHandlers:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)transactionWithBlock:(id /* block */)arg1;
- (bool)transactionWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)unregisterEnumerator:(id)arg1;
- (void)verifyNotificationsAreSupported:(bool)arg1;
- (void)verifyThread;
- (bool)writeCopyToURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3;

@end
