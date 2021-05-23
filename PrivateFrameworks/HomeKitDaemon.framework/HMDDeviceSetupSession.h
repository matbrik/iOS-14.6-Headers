/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceSetupSession : HMFObject <HMDDeviceSetupTrackingInfoMutable, HMDDeviceSetupTrackingInfoProviding, HMFLogging, HMFMessageReceiver> {
    NSUUID * _accessoryUUID;
    HMFActivity * _activity;
    NSString * _category;
    NSObject<OS_dispatch_queue> * _clientQueue;
    id /* block */  _dateFactory;
    <HMDDeviceSetupSessionDelegate> * _delegate;
    NSDate * _endTime;
    HMDHomeManager * _homeManager;
    NSUUID * _identifier;
    HMDDeviceSetupSessionInternal * _internal;
    bool  _open;
    NSError * _sessionError;
    NSDate * _startTime;
}

@property (copy) NSUUID *accessoryUUID;
@property (copy) NSString *category;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) id /* block */ dateFactory;
@property (readonly, copy) NSString *debugDescription;
@property <HMDDeviceSetupSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) HMDDeviceSetupSessionInternal *internal;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isOpen, nonatomic) bool open;
@property (readonly) long long role;
@property (copy) NSError *sessionError;
@property (copy) NSDate *startTime;
@property (readonly) Class superclass;

+ (bool)isRoleSupported:(long long)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__registerForMessages;
- (void)_closeWithError:(id)arg1;
- (void)_handleClose:(id)arg1;
- (void)_handleReceiveData:(id)arg1;
- (void)_sendRequestData:(id)arg1;
- (id)accessoryUUID;
- (id)category;
- (id)clientQueue;
- (id /* block */)dateFactory;
- (id)delegate;
- (id)endTime;
- (unsigned long long)hash;
- (id)homeManager;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3 dateFactory:(id /* block */)arg4;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isOpen;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)open;
- (long long)role;
- (id)sessionError;
- (void)setAccessoryUUID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setOpen:(bool)arg1;
- (void)setSessionError:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)setupTrackingInfo;
- (id)startTime;

@end