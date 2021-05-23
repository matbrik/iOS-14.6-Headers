/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATIDSServiceConnection : NSObject <CATIDSMessageBroadcastHandler, CATIDSServiceConnectionDataAggregatorDelegate, CATIDSServiceConnectionKeepAliveTimerDelegate, CATIDSServiceConnectionMessageProcessorDelegate> {
    bool  _closed;
    NSError * _closedError;
    <CATIDSServiceConnectionDelegate> * _delegate;
    CATIDSServiceConnectionMetadata * _metadata;
    CATSerialOperationQueue * mControlQueue;
    <CATIDSServiceConnectionDataAggregator> * mDataAggregator;
    <CATIDSServiceConnectionDataChunker> * mDataChunker;
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    NSString * mDestinationAddress;
    <CATIDSPrimitives> * mIDSPrimitives;
    CATIDSServiceConnectionKeepAliveTimer * mKeepAliveTimer;
    <CATIDSMessageBroadcaster> * mMessageBroadcaster;
    CATIDSServiceConnectionMessageProcessor * mMessageProcessor;
    <CATIDSSubscription> * mMessageSubscription;
    <CATCancelable> * mNetworkPowerAssertion;
    CATSerialOperationQueue * mSendQueue;
    NSString * mSourceAppleID;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (getter=isClosed, nonatomic) bool closed;
@property (nonatomic, retain) NSError *closedError;
@property (nonatomic) <CATIDSServiceConnectionDelegate> *delegate;
@property (nonatomic, readonly) CATIDSServiceConnectionMetadata *metadata;

+ (id)acknowledgeContent;
+ (id)closeContentWithError:(id)arg1;
+ (id)connectionWithMetadata:(id)arg1 configuration:(id)arg2 IDSPrimitives:(id)arg3 messageBroadcaster:(id)arg4 timerSource:(id)arg5 dataChunker:(id)arg6 dataAggregator:(id)arg7 networkPowerAssertion:(id)arg8 workQueue:(id)arg9 delegateQueue:(id)arg10 destinationAddress:(id)arg11 sourceAppleID:(id)arg12;
+ (id)connectionWithMetadata:(id)arg1 configuration:(id)arg2 IDSPrimitives:(id)arg3 messageBroadcaster:(id)arg4 timerSource:(id)arg5 networkPowerAssertion:(id)arg6 workQueue:(id)arg7 delegateQueue:(id)arg8 destinationAddress:(id)arg9 sourceAppleID:(id)arg10;
+ (id)keepAliveContent;

- (void).cxx_destruct;
- (void)_close;
- (void)_sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)close;
- (id)closedError;
- (void)connectionDataAggregator:(id)arg1 aggregatedData:(id)arg2 withNumber:(unsigned long long)arg3;
- (void)connectionDataAggregator:(id)arg1 timedOutWaitingForDataNumbers:(id)arg2;
- (id)delegate;
- (id)description;
- (id)initWithMetadata:(id)arg1 configuration:(id)arg2 IDSPrimitives:(id)arg3 messageBroadcaster:(id)arg4 timerSource:(id)arg5 dataChunker:(id)arg6 dataAggregator:(id)arg7 networkPowerAssertion:(id)arg8 workQueue:(id)arg9 delegateQueue:(id)arg10 destinationAddress:(id)arg11 sourceAppleID:(id)arg12;
- (bool)isClosed;
- (void)keepAliveTimerCrossedDeathThreshold:(id)arg1;
- (void)keepAliveTimerCrossedWarningThreshold:(id)arg1;
- (void)messageProcessor:(id)arg1 wantsAggregation:(id)arg2;
- (void)messageProcessor:(id)arg1 wantsToCloseWithError:(id)arg2;
- (id)metadata;
- (void)processMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3;
- (void)processorWantsToAcknowledgeRemote:(id)arg1;
- (void)processorWantsToExtendKeepAlive:(id)arg1;
- (void)sendContent:(id)arg1;
- (void)sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)setClosed:(bool)arg1;
- (void)setClosedError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tearDownWithError:(id)arg1 shouldReportToRemote:(bool)arg2;

@end