/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCAudioSpectrumAnalyzerStorage : NSObject {
    struct DSPSplitComplex { 
        float *realp; 
        float *imagp; 
    }  _fftBuffer;
    struct OpaqueFFTSetup { } * _fftSetup;
    float * _intermediateBuffer;
    unsigned long long  _maxNumberOfFrames;
    bool  _processing;
    float  _sampleRate;
    float * _window;
    unsigned long long  _windowSize;
}

@property (nonatomic) unsigned long long maxNumberOfFrames;
@property (nonatomic) float sampleRate;

- (void)_destroyFFTSetup;
- (void)_freeBuffers;
- (void)_prepareBuffers;
- (void)analyzeFrequencies:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 numberFrames:(unsigned long long)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 observers:(id)arg4;
- (void)dealloc;
- (id)initWithMaximumNumberOfFrames:(unsigned long long)arg1 sampleRate:(float)arg2;
- (unsigned long long)maxNumberOfFrames;
- (float)sampleRate;
- (void)setMaxNumberOfFrames:(unsigned long long)arg1;
- (void)setSampleRate:(float)arg1;

@end
