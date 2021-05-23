/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeferringPredicate : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
    BKSHIDEventDeferringToken * _token;
}

@property (nonatomic, readonly, copy) BKSHIDEventDisplay *display;
@property (nonatomic, readonly) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringToken *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithEnvironment:(id)arg1 display:(id)arg2 token:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)display;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)token;

@end