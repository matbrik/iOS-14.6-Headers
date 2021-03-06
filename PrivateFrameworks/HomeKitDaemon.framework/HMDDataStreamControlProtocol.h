/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamControlProtocol : NSObject <HMDDataStreamProtocol, HMFLogging> {
    bool  _helloMessageResponseReceived;
    NSString * _logIdentifier;
    NSNumber * _peerDataStreamProtocolVersion;
    NSNumber * _pendingHelloMessageIdentifier;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool helloMessageResponseReceived;
@property (readonly, copy) NSString *logIdentifier;
@property (nonatomic, readonly) NSNumber *peerDataStreamProtocolVersion;
@property (nonatomic, retain) NSNumber *pendingHelloMessageIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_sendHelloMessageOnDataStream:(id)arg1;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (bool)helloMessageResponseReceived;
- (id)initWithLogIdentifier:(id)arg1;
- (bool)isActive;
- (bool)isExpectedHelloControlMessage:(id)arg1 header:(id)arg2;
- (id)logIdentifier;
- (id)peerDataStreamProtocolVersion;
- (id)pendingHelloMessageIdentifier;
- (void)setHelloMessageResponseReceived:(bool)arg1;
- (void)setPendingHelloMessageIdentifier:(id)arg1;

@end
