/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRenderDestination : NSObject {
    void * _priv;
}

@property unsigned long long alphaMode;
@property (nonatomic, retain) CIBlendKernel *blendKernel;
@property bool blendsInDestinationColorSpace;
@property (getter=isClamped) bool clamped;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (getter=isDithered) bool dithered;
@property (getter=isFlipped) bool flipped;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long width;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;

- (id)_initWithInternalRenderDestination:(struct RenderDestination { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; struct __CFString {} *x3; struct CGColorSpace {} *x4; }*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(struct CGColorSpace { }*)arg5;
- (struct RenderDestination { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; struct __CFString {} *x3; struct CGColorSpace {} *x4; }*)_internalRenderDestination;
- (struct CIRenderDestinationInternal { struct RenderDestination {} *x1; unsigned long long x2; unsigned long long x3; int x4; int x5; struct { double x_6_1_1[3]; double x_6_1_2[3]; double x_6_1_3[3]; double x_6_1_4; double x_6_1_5; } x6; unsigned long long x7; bool x8; bool x9; int x10; bool x11; bool x12; bool x13; id x14; }*)_internalRepresentation;
- (struct RenderTask { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; char *x3; char *x4; BOOL x5[128]; int x6; bool x7; unsigned long long x8; int x9; BOOL x10[64]; unsigned long long x11; struct Node {} *x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; int x14; unsigned long long x15; struct __CFString {} *x16; struct __CFString {} *x17; struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>>> { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>> {} *x_18_1_1; struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>> {} *x_18_1_2; struct __compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>> *, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>>> { struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>> {} *x_3_2_1; } x_18_1_3; } x18; }*)_render:(struct Image { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct __CFURL {} *x4; void *x5; void *x6; unsigned int x7; unsigned int x8; unsigned long long x9; }*)arg1 withContext:(struct Context { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; float x6; bool x7; bool x8; bool x9; bool x10; bool x11; struct CGContext {} *x12; float x13; bool x14; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_15_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_15_1_2; } x15; struct CGAffineTransform { double x_16_1_1; double x_16_1_2; double x_16_1_3; double x_16_1_4; double x_16_1_5; double x_16_1_6; } x16; unsigned int x17; unsigned long long x18; unsigned long long x19; int x20; BOOL x21[64]; bool x22; struct ObjectCache<CI::MainProgram, false> {} *x23; struct ObjectCache<CI::Node, false> {} *x24; struct ObjectCache<CI::Node, false> {} *x25; double x26; double x27; struct RenderTask {} *x28; int x29; int x30; struct Context {} *x31; unsigned long long x32; }*)arg2;
- (void)_set_YCC_matrix:(int)arg1 fullRange:(bool)arg2 deep:(bool)arg3 isFloat:(float)arg4;
- (unsigned long long)alphaMode;
- (id)blendKernel;
- (bool)blendsInDestinationColorSpace;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (int)ditherDepth;
- (int)format;
- (unsigned long long)height;
- (id)imageRepresentation;
- (id)init;
- (id)initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;
- (id)initWithGLTexture:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 pixelBufferProvider:(id /* block */)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 surfaceProvider:(id /* block */)arg5;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(id /* block */)arg5;
- (bool)isClamped;
- (bool)isCompressed;
- (bool)isDithered;
- (bool)isFlipped;
- (id)label;
- (void)setAlphaMode:(unsigned long long)arg1;
- (void)setBlendKernel:(id)arg1;
- (void)setBlendsInDestinationColorSpace:(bool)arg1;
- (void)setClamped:(bool)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDithered:(bool)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setLabel:(id)arg1;
- (id)surface;
- (unsigned long long)width;

@end