/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
 */

@interface QSSShortcutFuzzyMatchRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ShortcutFuzzyMatchRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *device_type;
@property (nonatomic, readonly) NSString *interaction_id;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSArray *shortcuts;
@property (nonatomic, readonly) QSSShortcutFuzzyMatchRequest_StringTokenPair *utterance;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchRequest> { unsigned int x1; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator {} *x_1_1_1; bool x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; char *x_1_1_6; char *x_1_1_7; char *x_1_1_8; } x1; unsigned int x2; unsigned short x3; bool x4; bool x5; unsigned long long x6; bool x7; bool x8; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String>>> {} *x9; }*)arg1;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device_type;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutFuzzyMatchRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)interaction_id;
- (id)locale;
- (id)request_id;
- (id)session_id;
- (id)shortcuts;
- (id)utterance;

@end