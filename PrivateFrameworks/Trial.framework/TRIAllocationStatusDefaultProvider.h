/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {
    _PASXPCClientHelper * _clientHelper;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (id)_defaultQueue;
- (id)addStatusUpdateHandlerForEnvironment:(int)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)dealloc;
- (bool)enumerateActiveExperimentsForEnvironment:(int)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)enumerateExperimentStatusesForEnvironment:(int)arg1 startingFromCursor:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (id)init;
- (bool)removeUpdateHandlerForToken:(id)arg1;
- (id)syncProxyWithErrorHandler:(id /* block */)arg1;

@end