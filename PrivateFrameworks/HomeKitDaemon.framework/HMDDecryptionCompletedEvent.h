/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDecryptionCompletedEvent : HMDLogEvent {
    bool  _didDecryptionFail;
}

@property (nonatomic) bool didDecryptionFail;

+ (id)decryptionCompletedWithFailure:(bool)arg1;

- (bool)didDecryptionFail;
- (id)initWithFailure:(bool)arg1;
- (void)setDidDecryptionFail:(bool)arg1;

@end
