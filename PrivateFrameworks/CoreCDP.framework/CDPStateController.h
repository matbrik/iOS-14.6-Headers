/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPStateController : CDPController

- (void)attemptToEscrowPreRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)deleteRecoveryKey:(id /* block */)arg1;
- (bool)deleteRecoveryKeyWithError:(id*)arg1;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id /* block */)arg1;
- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)arg1;
- (void)generateNewRecoveryKey:(id /* block */)arg1;
- (id)generateRandomRecoveryKey:(id*)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)handleURLActionWithInfo:(id)arg1;
- (void)handleURLActionWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (bool)isManateeAvailable:(id*)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)recoverAndSynchronizeWithSquirrel:(id /* block */)arg1;
- (void)recoverWithSquirrel:(id /* block */)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (bool)shouldPerformRepairWithOptionForceFetch:(bool)arg1 error:(id*)arg2;
- (void)startCircleApplicationApprovalServer:(id /* block */)arg1;

@end
