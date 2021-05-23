/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYDevice : NSObject <BYDeviceProvider> {
    bool  _hasHomeButton;
    int  _mainScreenClass;
    long long  _size;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasHomeButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int mainScreenClass;
@property (nonatomic, readonly) long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)currentDevice;

- (id)currentDevice;
- (bool)hasHomeButton;
- (id)init;
- (int)mainScreenClass;
- (long long)size;
- (long long)type;

@end