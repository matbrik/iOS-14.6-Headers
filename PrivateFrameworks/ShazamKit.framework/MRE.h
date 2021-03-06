/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface MRE : NSObject {
    void * _mreInstance;
}

@property (nonatomic) void*mreInstance;

- (bool)ConvertException:(const struct exception { int (**x1)(); }*)arg1 toError:(id*)arg2;
- (bool)ConvertSystemError:(const struct system_error { int (**x1)(); struct __libcpp_refstring { char *x_2_1_1; } x2; struct error_code { int x_3_1_1; struct error_category {} *x_3_1_2; } x3; }*)arg1 toError:(id*)arg2;
- (bool)FillUnknownError:(id*)arg1;
- (void)dealloc;
- (id)initWithMREInstance:(struct MREInstance { struct unique_ptr<shazam::MMap, std::__1::default_delete<shazam::MMap>> { struct __compressed_pair<shazam::MMap *, std::__1::default_delete<shazam::MMap>> { struct MMap {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<Searcher, std::__1::default_delete<Searcher>> { struct __compressed_pair<Searcher *, std::__1::default_delete<Searcher>> { struct Searcher {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1 error:(id*)arg2;
- (id)initWithSignatures:(id)arg1 density:(long long)arg2 error:(id*)arg3;
- (void*)mreInstance;
- (id)search:(id)arg1 error:(id*)arg2;
- (void)setMreInstance:(void*)arg1;

@end
