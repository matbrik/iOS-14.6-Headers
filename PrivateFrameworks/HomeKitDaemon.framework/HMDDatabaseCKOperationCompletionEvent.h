/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDatabaseCKOperationCompletionEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSString * _containerIdentifier;
}

@property (readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)containerIdentifier;
- (id)initWithContainerIdentifier:(id)arg1 error:(id)arg2;
- (id)metricForAWD;

@end
