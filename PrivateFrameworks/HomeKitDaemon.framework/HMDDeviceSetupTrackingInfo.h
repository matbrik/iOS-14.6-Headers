/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceSetupTrackingInfo : HMFObject <HMDDeviceSetupTrackingInfo> {
    NSUUID * _accessoryUUID;
    NSDate * _endTime;
    NSUUID * _identifier;
    long long  _role;
    NSError * _sessionError;
    NSDate * _startTime;
}

@property (copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSDate *endTime;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long role;
@property (readonly, copy) NSError *sessionError;
@property (readonly, copy) NSDate *startTime;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)endTime;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 role:(long long)arg4 accessoryUUID:(id)arg5;
- (long long)role;
- (id)sessionError;
- (void)setAccessoryUUID:(id)arg1;
- (id)startTime;

@end