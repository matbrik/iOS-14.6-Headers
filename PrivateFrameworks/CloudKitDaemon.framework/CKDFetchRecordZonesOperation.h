/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation {
    bool  _ignorePCSFailures;
    bool  _isFetchAllRecordZonesOperation;
    long long  _numZoneSaveAttempts;
    bool  _onlyFetchPCSInfo;
    NSMutableDictionary * _pcsUpdateErrorsByZoneID;
    id /* block */  _recordZoneFetchedProgressBlock;
    NSArray * _recordZoneIDs;
    bool  _shouldRetry;
    NSMutableSet * _zoneIDsNeedingDugongKeyRoll;
    NSMutableArray * _zoneIDsNeedingPCSUpdateRetry;
    NSMutableDictionary * _zonesToSaveForPCSUpdateByZoneID;
}

@property (nonatomic, retain) <CKFetchRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) bool ignorePCSFailures;
@property (nonatomic) bool isFetchAllRecordZonesOperation;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) bool onlyFetchPCSInfo;
@property (nonatomic, retain) NSMutableDictionary *pcsUpdateErrorsByZoneID;
@property (nonatomic, copy) id /* block */ recordZoneFetchedProgressBlock;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldRetry;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSMutableSet *zoneIDsNeedingDugongKeyRoll;
@property (nonatomic, retain) NSMutableArray *zoneIDsNeedingPCSUpdateRetry;
@property (nonatomic, retain) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID;

- (void).cxx_destruct;
- (void)_cachePCSOnRecordZone:(id)arg1;
- (void)_continueHandlingFetchedRecordZone:(id)arg1 zoneID:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2;
- (void)_locked_callbackForRecordZone:(id)arg1 zoneID:(id)arg2 error:(id)arg3;
- (bool)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id*)arg2;
- (void)_sendErrorForFailedZones;
- (id)activityCreate;
- (void)checkPCSIdentity;
- (void)fetchZonesFromServer;
- (bool)ignorePCSFailures;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isFetchAllRecordZonesOperation;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (long long)numZoneSaveAttempts;
- (bool)onlyFetchPCSInfo;
- (int)operationType;
- (id)pcsUpdateErrorsByZoneID;
- (id /* block */)recordZoneFetchedProgressBlock;
- (id)recordZoneIDs;
- (id)relevantZoneIDs;
- (void)saveZonesWithUpdatedZonePCS;
- (void)setIgnorePCSFailures:(bool)arg1;
- (void)setIsFetchAllRecordZonesOperation:(bool)arg1;
- (void)setNumZoneSaveAttempts:(long long)arg1;
- (void)setOnlyFetchPCSInfo:(bool)arg1;
- (void)setPcsUpdateErrorsByZoneID:(id)arg1;
- (void)setRecordZoneFetchedProgressBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldRetry:(bool)arg1;
- (void)setZoneIDsNeedingDugongKeyRoll:(id)arg1;
- (void)setZoneIDsNeedingPCSUpdateRetry:(id)arg1;
- (void)setZonesToSaveForPCSUpdateByZoneID:(id)arg1;
- (bool)shouldRetry;
- (id)zoneIDsNeedingDugongKeyRoll;
- (id)zoneIDsNeedingPCSUpdateRetry;
- (id)zonesToSaveForPCSUpdateByZoneID;

@end