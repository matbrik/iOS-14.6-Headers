/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARImageDistortionCorrectionTechnique : ARTechnique {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct vImageMapping { } * _mapping;
    struct vector<float, std::__1::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _mappingU;
    struct vector<float, std::__1::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _mappingV;
    struct __CVPixelBufferPool { } * _rgbImagePool;
    struct __CVPixelBufferPool { } * _rgbUndistortedImagePool;
    struct __CVPixelBufferPool { } * _undistortedImageBufferPool;
    bool  _uvMapExists;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildUVMapFromHardcodedCalibrationParametersWithOriginalImageData:(id)arg1;
- (void)buildUVMapWithOriginalImageData:(id)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })lensDistortionPointForPoint:(struct CGPoint { double x1; double x2; })arg1 lookupTable:(id)arg2 distortionOpticalCenter:(struct CGPoint { double x1; double x2; })arg3 imageSize:(struct CGSize { double x1; double x2; })arg4;
- (id)processData:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)undistortImage:(struct __CVBuffer { }*)arg1 toTargetImage:(struct __CVBuffer { }*)arg2;

@end
