/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface FTSpeechTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FTAudioPacket *contentAsFTAudioPacket;
@property (nonatomic, readonly) FTFinishAudio *contentAsFTFinishAudio;
@property (nonatomic, readonly) FTLanguageDetected *contentAsFTLanguageDetected;
@property (nonatomic, readonly) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (nonatomic, readonly) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (nonatomic, readonly) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property (nonatomic, readonly) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property (nonatomic, readonly) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingRequest> { unsigned int x1; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator {} *x_1_1_1; bool x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; char *x_1_1_6; char *x_1_1_7; char *x_1_1_8; } x1; unsigned int x2; unsigned short x3; bool x4; bool x5; unsigned long long x6; bool x7; bool x8; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String>>> {} *x9; }*)arg1;
- (id)contentAsFTAudioPacket;
- (id)contentAsFTFinishAudio;
- (id)contentAsFTLanguageDetected;
- (id)contentAsFTResetServerEndpointer;
- (id)contentAsFTSetEndpointerState;
- (id)contentAsFTSpeechTranslationAudioPacket;
- (id)contentAsFTStartSpeechTranslationLoggingRequest;
- (id)contentAsFTStartSpeechTranslationRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end