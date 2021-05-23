/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPTLVNumberValueBase : NSObject <HAPTLVProtocol, NSCopying> {
    NSNumber * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;

- (void).cxx_destruct;
- (id)_parseFromData:(const char *)arg1 length:(unsigned long long)arg2 status:(int*)arg3;
- (id)_serialize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end