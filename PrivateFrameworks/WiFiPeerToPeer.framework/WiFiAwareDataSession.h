/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
 */

@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate> {
    NSNumber * _datapathID;
    <WiFiAwareDatapathXPC> * _datapathProxy;
    <WiFiAwareDataSessionDelegate> * _delegate;
    WiFiAwareDiscoveryResult * _discoveryResult;
    WiFiMACAddress * _initiatorDataAddress;
    unsigned int  _localInterfaceIndex;
    NSString * _passphrase;
    NSData * _pmk;
    NSObject<OS_dispatch_queue> * _queue;
    WiFiAwarePublishDatapathServiceSpecificInfo * _serviceSpecificInfo;
    long long  _serviceType;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WiFiAwareDataSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WiFiAwareDiscoveryResult *discoveryResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WiFiMACAddress *localDataAddress;
@property (nonatomic, readonly) unsigned int localInterfaceIndex;
@property (nonatomic, readonly) NSString *passphrase;
@property (nonatomic, readonly) NSData *pmk;
@property (nonatomic, readonly) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic, readonly) long long serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)datapathConfirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2;
- (void)datapathFailedToStartWithError:(long long)arg1;
- (void)datapathReceivedControlDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 onInterfaceIndex:(unsigned int)arg3;
- (void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 localInterfaceIndex:(unsigned int)arg3;
- (void)datapathTerminatedWithReason:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)discoveryResult;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)arg1;
- (void)handleError;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4 pmk:(id)arg5;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 pmk:(id)arg4;
- (bool)isConnected;
- (id)localDataAddress;
- (unsigned int)localInterfaceIndex;
- (id)passphrase;
- (id)pmk;
- (void)reportIssue:(id)arg1;
- (void)resetState;
- (id)serviceSpecificInfo;
- (long long)serviceType;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)startDatapathSync;
- (void)stop;
- (void)updateLinkStatus:(long long)arg1;

@end