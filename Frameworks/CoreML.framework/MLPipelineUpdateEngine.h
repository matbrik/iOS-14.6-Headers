/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    MLUpdateProgressHandlers * _progressHandlers;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _updatableModelIndicies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (retain) MLUpdateProgressHandlers *progressHandlers;
@property (readonly) Class superclass;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long long' */ struct  updatableModelIndicies; /* unknown property attribute:  std::__1::allocator<unsigned long long>>=^Q}} */

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>>> { struct __tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelUpdate;
- (id)dispatchQueue;
- (id)initFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>>> { struct __tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, IArchive>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, true>> { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)progressHandlers;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandlers:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (struct vector<unsigned long long, std::__1::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })updatableModelIndicies;
- (void)updateModelWithData:(id)arg1;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
