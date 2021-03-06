/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPSupportedDiagnosticsSnapshot : NSObject <HAPTLVProtocol, NSCopying> {
    HAPDiagnosticsSnapshotFormatWrapper * _format;
    HAPDiagnosticsSnapshotOptionsWrapper * _options;
    HAPDiagnosticsSnapshotTypeWrapper * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPDiagnosticsSnapshotFormatWrapper *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPDiagnosticsSnapshotOptionsWrapper *options;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPDiagnosticsSnapshotTypeWrapper *type;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)format;
- (id)init;
- (id)initWithFormat:(id)arg1 type:(id)arg2 options:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)options;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setFormat:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
