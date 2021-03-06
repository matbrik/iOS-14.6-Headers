/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector {
    struct shared_ptr<vision::mod::LandmarkDetectorDNN> { 
        struct LandmarkDetectorDNN {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _landmarkDetector;
    struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_>> { 
        struct _Geometry2D_point2D_ {} *__begin_; 
        struct _Geometry2D_point2D_ {} *__end_; 
        struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_>> { 
            struct _Geometry2D_point2D_ {} *__value_; 
        } __end_cap_; 
    }  _landmarkPoints65;
}

@property (readonly) /* Warning: unhandled struct encoding: '{vector<_Geometry2D_point2D_' */ struct *landmarkPoints65; /* unknown property attribute:  std::__1::allocator<_Geometry2D_point2D_>>=^{_Geometry2D_point2D_}}} */

+ (const struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int>>> { struct __tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)_requestConstellationToDetectorConstellationMap;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputBlobNames;
+ (id)outputBlobNames;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)getConstellation:(unsigned long long*)arg1 cvmlConstellation:(int*)arg2 fromOptions:(id)arg3 error:(id*)arg4;
- (bool)getLandmarkErrorEstimates:(struct vector<float, std::__1::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float>> { float *x_3_1_1; } x3; }*)arg1 forConstellation:(int)arg2 error:(id*)arg3;
- (bool)getLandmarkOcclusionFlags:(struct vector<bool, std::__1::allocator<bool>> { unsigned long long *x1; unsigned long long x2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long>> { unsigned long long x_3_1_1; } x3; }*)arg1 forConstellation:(int)arg2 error:(id*)arg3;
- (bool)getLandmarkPoints:(struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ {} *x1; struct _Geometry2D_point2D_ {} *x2; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ {} *x_3_1_1; } x3; }*)arg1 forConstellation:(int)arg2 error:(id*)arg3;
- (struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ {} *x1; struct _Geometry2D_point2D_ {} *x2; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ {} *x_3_1_1; } x3; }*)landmarkPoints65;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (void)releaseResources;
- (bool)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ {} *x1; struct _Geometry2D_point2D_ {} *x2; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_>> { struct _Geometry2D_point2D_ {} *x_3_1_1; } x3; }*)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 error:(id*)arg4;

@end
