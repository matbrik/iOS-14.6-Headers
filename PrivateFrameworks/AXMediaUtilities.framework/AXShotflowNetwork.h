/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXShotflowNetwork : NSObject {
    int  _bins_neg_maxout;
    bool  _can_rotate;
    struct vector<float, std::__1::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _cell_starts_x;
    struct vector<float, std::__1::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _cell_starts_y;
    unsigned long long  _currentNetworkHeight;
    unsigned long long  _currentNetworkWidth;
    float  _defaultBoxSizes;
    struct vector<float, std::__1::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _default_boxes_sides;
    struct vector<float, std::__1::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _default_boxes_sides_normalized;
    void * _espressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    void * _espressoPlan;
    bool  _extra_default_boxes;
    NSArray * _filterThreshold;
    bool  _has_pose;
    struct vector<int, std::__1::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  _important_classes;
    float  _input_aspect_ratio;
    float  _input_height;
    bool  _keep_aspect_ratio;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _logitsNegOutputs;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _logitsPosOutputs;
    int  _maxout_layers;
    /* Warning: unhandled struct encoding: '{vector<NSString *, std::__1::allocator<NSString *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSString *__strong *, std::__1::allocator<NSString *>>="__value_"^@}}' */ struct vector<NSString *, std::__1::allocator<NSString *>> { 
        __end_ **__begin_; 
    }  _model_labels;
    int  _num_pos_classes;
    int  _num_ratios;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _offsetsOutputs;
    bool  _pose_square;
    struct vector<float, std::__1::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _ratios;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _rollOutputs;
    float  _threshold;
    int  _version;
    struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
        struct shared_ptr<espresso_buffer_t> {} *__begin_; 
        struct shared_ptr<espresso_buffer_t> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> { 
            struct shared_ptr<espresso_buffer_t> {} *__value_; 
        } __end_cap_; 
    }  _yawOutputs;
}

@property (nonatomic, readonly) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;
@property (nonatomic) int version;

+ (id)cpuNetworkWithModelPath:(id)arg1 configuration:(id)arg2 version:(int)arg3;
+ (id)gpuNetworkWithModelPath:(id)arg1 configuration:(id)arg2 preferredMetalDeviceID:(int)arg3 version:(int)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 configuration:(id)arg4 version:(int)arg5;
- (unsigned long long)preferredSmallSide;
- (id)processCIImage:(id)arg1;
- (id)processVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (void)runNetwork:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setThreshold:(float)arg1;
- (void)setVersion:(int)arg1;
- (float)threshold;
- (int)version;

@end