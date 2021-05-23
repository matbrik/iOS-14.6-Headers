/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIXPCAllocationStatusRequestHandler : NSObject <TRIXPCAllocationStatusServiceProtocol> {
    <TRIAllocationStatusEntitled> * _entitlementWitness;
    TRIServerContext * _serverContext;
}

- (void).cxx_destruct;
- (void)experimentHistoryRecordsWithLimit:(unsigned long long)arg1 newerThanDate:(id)arg2 deploymentEnvironment:(int)arg3 completion:(id /* block */)arg4;
- (void)experimentRecordsWithDeploymentEnvironments:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithServerContext:(id)arg1 entitlementWitness:(id)arg2;

@end