/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COMeshControllerQueuedNotification : NSObject <COMeshControllerQueuedElementProtocol> {
    COMeshNotification * _notification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COMeshNotification *notification;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)command;
- (id)initWithNotification:(id)arg1;
- (void)invokeCallbackWithError:(id)arg1;
- (id)notification;

@end