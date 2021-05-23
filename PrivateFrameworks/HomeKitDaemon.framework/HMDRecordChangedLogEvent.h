/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRecordChangedLogEvent : HMDLogEvent {
    bool  _legacy;
    unsigned long long  _size;
}

@property (getter=isLegacy, nonatomic, readonly) bool legacy;
@property (nonatomic, readonly) unsigned long long size;

- (id)initWithChangedRecord:(id)arg1 isLegacy:(bool)arg2;
- (bool)isLegacy;
- (unsigned long long)size;

@end