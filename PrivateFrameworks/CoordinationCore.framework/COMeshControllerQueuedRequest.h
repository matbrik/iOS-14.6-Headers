/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COMeshControllerQueuedRequest : NSObject <COMeshControllerQueuedElementProtocol> {
    id /* block */  _callback;
    COMeshRequest * _request;
    COMeshResponse * _response;
}

@property (nonatomic, readonly, copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COMeshRequest *request;
@property (nonatomic, retain) COMeshResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)command;
- (id)initWithRequest:(id)arg1 sentCallback:(id /* block */)arg2;
- (void)invokeCallbackWithError:(id)arg1;
- (id)request;
- (id)response;
- (void)setResponse:(id)arg1;

@end
