/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHSignature : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _ID;
    NSData * _dataRepresentation;
    SHSignatureMetrics * _metrics;
    NSDate * _startDate;
    AVAudioTime * _time;
}

@property (nonatomic, readonly) NSUUID *ID;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) double length;
@property (nonatomic, copy) SHSignatureMetrics *metrics;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) AVAudioTime *time;

+ (id)signatureFromData:(id)arg1 atTime:(id)arg2 error:(id*)arg3;
+ (id)signatureWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ID;
- (id)_startDateBasedUponAudioTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 dataRepresentation:(id)arg2 startTime:(id)arg3;
- (double)length;
- (id)metrics;
- (void)setMetrics:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTime:(id)arg1;
- (id)startDate;
- (id)time;

@end