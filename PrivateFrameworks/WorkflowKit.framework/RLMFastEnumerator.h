/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMFastEnumerator : NSObject {
    id  _collection;
    struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; } * _info;
    RLMRealm * _realm;
    struct Results { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct Query { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_3_1_1; struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> { struct QueryGroup {} *x_2_2_1; struct QueryGroup {} *x_2_2_2; struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup>> { struct QueryGroup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct vector<unsigned long, std::__1::allocator<unsigned long>> { unsigned long long *x_3_2_1; unsigned long long *x_3_2_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_3_2_3; } x_3_1_3; } x3; } * _results;
    struct Results { 
        struct shared_ptr<realm::Realm> { 
            struct Realm {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_realm; 
        struct ObjectSchema {} *m_object_schema; 
        struct Query { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { 
                struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned long long __cap_; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                struct { 
                                    unsigned char __size_; 
                                } ; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } error_code; 
            struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> { 
                struct QueryGroup {} *__begin_; 
                struct QueryGroup {} *__end_; 
                struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup>> { 
                    struct QueryGroup {} *__value_; 
                } __end_cap_; 
            } m_groups; 
            struct vector<unsigned long, std::__1::allocator<unsigned long>> { 
                unsigned long long *__begin_; 
                unsigned long long *__end_; 
                struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> { 
                    unsigned long long *__value_; 
                } __end_cap_; 
            } m_subtable_path; 
            struct shared_ptr<const realm::Descriptor> { 
                struct Descriptor {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } m_current_descriptor; 
            struct BasicTableRef<realm::Table> { 
                struct Table {} *m_ptr; 
            } m_table; 
            struct RowIndexes {} *m_view; 
            struct shared_ptr<realm::LinkView> { 
                struct LinkView {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } m_source_link_view; 
            struct TableViewBase {} *m_source_table_view; 
            struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase>> { 
                struct __compressed_pair<realm::TableViewBase *, std::__1::default_delete<realm::TableViewBase>> { 
                    struct TableViewBase {} *__value_; 
                } __ptr_; 
            } m_owned_source_table_view; 
        } m_query; 
        struct TableView { 
            int (**_vptr$RowIndexes)(); 
            struct Column<long long> { 
                int (**_vptr$ColumnBase)(); 
                unsigned long long m_column_ndx; 
                struct unique_ptr<realm::StringIndex, std::__1::default_delete<realm::StringIndex>> { 
                    struct __compressed_pair<realm::StringIndex *, std::__1::default_delete<realm::StringIndex>> { 
                        struct StringIndex {} *__value_; 
                    } __ptr_; 
                } m_search_index; 
                struct BpTree<long long> { 
                    struct unique_ptr<realm::Array, std::__1::default_delete<realm::Array>> { 
                        struct __compressed_pair<realm::Array *, std::__1::default_delete<realm::Array>> { 
                            struct Array {} *__value_; 
                        } __ptr_; 
                    } m_root; 
                } m_tree; 
            } m_row_indexes; 
            unsigned long long m_limit_count; 
            unsigned long long m_debug_cookie; 
            struct BasicTableRef<realm::Table> { 
                struct Table {} *m_ptr; 
            } m_table; 
            struct BacklinkColumn {} *m_linked_column; 
            struct BasicRow<const realm::Table> { 
                struct BasicTableRef<realm::Table> { 
                    struct Table {} *m_ptr; 
                } m_table; 
                unsigned long long m_row_ndx; 
                struct RowBase {} *m_prev; 
                struct RowBase {} *m_next; 
            } m_linked_row; 
            struct shared_ptr<const realm::LinkView> { 
                struct LinkView {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } m_linkview_source; 
            unsigned long long m_distinct_column_source; 
            struct DescriptorOrdering { 
                struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> { 
                    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> {} *__begin_; 
                    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> {} *__end_; 
                    struct __compressed_pair<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> *, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> { 
                        struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> {} *__value_; 
                    } __end_cap_; 
                } m_descriptors; 
            } m_descriptor_ordering; 
            struct Query { 
                struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { 
                    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned long long __cap_; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    struct { 
                                        unsigned char __size_; 
                                    } ; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } error_code; 
                struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> { 
                    struct QueryGroup {} *__begin_; 
                    struct QueryGroup {} *__end_; 
                    struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup>> { 
                        struct QueryGroup {} *__value_; 
                    } __end_cap_; 
                } m_groups; 
                struct vector<unsigned long, std::__1::allocator<unsigned long>> { 
                    unsigned long long *__begin_; 
                    unsigned long long *__end_; 
                    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> { 
                        unsigned long long *__value_; 
                    } __end_cap_; 
                } m_subtable_path; 
                struct shared_ptr<const realm::Descriptor> { 
                    struct Descriptor {} *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } m_current_descriptor; 
                struct BasicTableRef<realm::Table> { 
                    struct Table {} *m_ptr; 
                } m_table; 
                struct RowIndexes {} *m_view; 
                struct shared_ptr<realm::LinkView> { 
                    struct LinkView {} *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } m_source_link_view; 
                struct TableViewBase {} *m_source_table_view; 
                struct unique_ptr<realm::TableViewBase, std::__1::default_delete<realm::TableViewBase>> { 
                    struct __compressed_pair<realm::TableViewBase *, std::__1::default_delete<realm::TableViewBase>> { 
                        struct TableViewBase {} *__value_; 
                    } __ptr_; 
                } m_owned_source_table_view; 
            } m_query; 
            unsigned long long m_start; 
            unsigned long long m_end; 
            unsigned long long m_limit; 
            struct Optional<unsigned long long> { 
                union { 
                    unsigned long long m_value; 
                    BOOL m_null_state; 
                } ; 
                bool m_engaged; 
            } m_last_seen_version; 
            unsigned long long m_num_detached_refs; 
        } m_table_view; 
        struct shared_ptr<realm::LinkView> { 
            struct LinkView {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_link_view; 
        struct BasicTableRef<realm::Table> { 
            struct Table {} *m_ptr; 
        } m_table; 
        struct DescriptorOrdering { 
            struct vector<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> { 
                struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> {} *__begin_; 
                struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> {} *__end_; 
                struct __compressed_pair<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> *, std::__1::allocator<std::__1::unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>>>> { 
                    struct unique_ptr<realm::BaseDescriptor, std::__1::default_delete<realm::BaseDescriptor>> {} *__value_; 
                } __end_cap_; 
            } m_descriptors; 
        } m_descriptor_ordering; 
        struct Handle<realm::_impl::ResultsNotifier> { 
            struct ResultsNotifier {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_notifier; 
        int m_mode; 
        int m_update_policy; 
        bool m_has_used_table_view; 
        bool m_wants_background_updates; 
    }  _snapshot;
    id  _strongBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (void)detach;
- (id)initWithList:(struct List { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct shared_ptr<realm::LinkView> { struct LinkView {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; struct BasicTableRef<realm::Table> { struct Table {} *x_4_1_1; } x4; struct Handle<realm::_impl::CollectionNotifier> { struct CollectionNotifier {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; }*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; }*)arg4;
- (id)initWithResults:(struct Results { struct shared_ptr<realm::Realm> { struct Realm {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct ObjectSchema {} *x2; struct Query { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_3_1_1; struct vector<realm::QueryGroup, std::__1::allocator<realm::QueryGroup>> { struct QueryGroup {} *x_2_2_1; struct QueryGroup {} *x_2_2_2; struct __compressed_pair<realm::QueryGroup *, std::__1::allocator<realm::QueryGroup>> { struct QueryGroup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct vector<unsigned long, std::__1::allocator<unsigned long>> { unsigned long long *x_3_2_1; unsigned long long *x_3_2_2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_3_2_3; } x_3_1_3; } x3; }*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; }*)arg4;

@end
