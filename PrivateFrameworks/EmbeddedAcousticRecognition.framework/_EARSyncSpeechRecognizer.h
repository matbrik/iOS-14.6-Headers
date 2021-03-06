/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSyncSpeechRecognizer : NSObject {
    NSString * _configPath;
    _EARFormatter * _formatter;
    NSObject<OS_dispatch_queue> * _formatterQueue;
    struct shared_ptr<quasar::SyncSpeechRecognizer> { 
        struct SyncSpeechRecognizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _syncRecognizer;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getSpeechRecognitionResultFromTokens:(struct vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>> { struct vector<quasar::Token, std::__1::allocator<quasar::Token>> {} *x1; struct vector<quasar::Token, std::__1::allocator<quasar::Token>> {} *x2; struct __compressed_pair<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>> *, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>> { struct vector<quasar::Token, std::__1::allocator<quasar::Token>> {} *x_3_1_1; } x3; })arg1 taskName:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)resetWithSamplingRate:(unsigned int)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(bool)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned int)arg9;
- (id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3;
- (id)resultsWithAddedFloatAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3;
- (id)resultsWithEndedAudio;

@end
