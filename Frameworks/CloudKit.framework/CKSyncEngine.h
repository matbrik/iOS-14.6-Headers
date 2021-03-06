/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSyncEngine : NSObject {
    bool  _allowMetadataCallbackDeferral;
    bool  _automaticSyncingEnabled;
    NSObject<OS_dispatch_queue> * _batchCreationQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <CKSyncEngineDataSource> * _dataSource;
    CKDatabase * _database;
    bool  _ignoringSystemConditions;
    long long  _lastKnownAccountStatus;
    unsigned long long  _lastNotifiedMetadataChangeCount;
    unsigned long long  _maxRecordBytesPerBatch;
    unsigned long long  _maxRecordCountPerBatch;
    unsigned long long  _maxZoneCountPerBatch;
    CKSyncEngineMetadata * _metadata;
    CKNotificationListener * _notificationListener;
    NSOperationQueue * _operationQueue;
    long long  _priority;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _skipRetryOnOperationError;
    id /* block */  _updateMetadataBlock;
    bool  _useUniqueActivityIdentifiers;
    bool  _waitingForHSA2;
    bool  _waitingForIdentityUpdate;
    NSObject<OS_xpc_object> * _xpcActivityCriteriaOverrides;
}

@property (nonatomic) bool allowMetadataCallbackDeferral;
@property (getter=isAutomaticSyncingEnabled, nonatomic) bool automaticSyncingEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *batchCreationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) <CKSyncEngineDataSource> *dataSource;
@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, readonly) bool ignoringSystemConditions;
@property (nonatomic) long long lastKnownAccountStatus;
@property (nonatomic) unsigned long long lastNotifiedMetadataChangeCount;
@property (nonatomic) unsigned long long maxRecordBytesPerBatch;
@property (nonatomic) unsigned long long maxRecordCountPerBatch;
@property (nonatomic) unsigned long long maxZoneCountPerBatch;
@property (nonatomic, retain) CKSyncEngineMetadata *metadata;
@property (nonatomic, retain) CKNotificationListener *notificationListener;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) long long priority;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool skipRetryOnOperationError;
@property (nonatomic, copy) id /* block */ updateMetadataBlock;
@property (nonatomic) bool useOpportunisticPushTopic;
@property (nonatomic) bool useUniqueActivityIdentifiers;
@property (getter=isWaitingForHSA2, nonatomic) bool waitingForHSA2;
@property (getter=isWaitingForIdentityUpdate, nonatomic) bool waitingForIdentityUpdate;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;

+ (id)activityIdentifierWithName:(id)arg1 database:(id)arg2 ignoringSystemConditions:(bool)arg3 uniquenessPointer:(id)arg4;
+ (id)earliestStartDateAfterError:(id)arg1;
+ (id)errorForAccountStatus:(long long)arg1;
+ (bool)fastErrorRetry;
+ (id)saveSubscriptionActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(bool)arg2;
+ (void)setFastErrorRetry:(bool)arg1;
+ (bool)shouldDeferAfterError:(id)arg1;
+ (id)supportedDatabaseScopes;
+ (id)syncActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(bool)arg2;
+ (void)unregisterActivitiesWithDatabase:(id)arg1 ignoringSystemConditions:(bool)arg2;
+ (id)userRequestedBackupActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(bool)arg2;

- (void).cxx_destruct;
- (void)_fetchChangesForZoneIDs:(id)arg1 ifNecessary:(bool)arg2 operationGroup:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_hasPendingModifications;
- (void)_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_needsToFetchChangesForZoneIDs:(id)arg1;
- (void)_queue_fetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_queue_modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountChangedNotification:(id)arg1;
- (id)activityIdentifierWithName:(id)arg1;
- (void)addOperationsToModifyZonesIfNecessaryFilteredByZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (bool)allowMetadataCallbackDeferral;
- (id)batchCreationQueue;
- (id)callbackQueue;
- (void)commonInitWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 useUniqueActivityIdentifiers:(bool)arg5 automaticSyncingEnabled:(bool)arg6 priority:(long long)arg7 xpcActivityCriteriaOverrides:(id)arg8;
- (id)dataSource;
- (id)database;
- (id)databaseSubscription;
- (void)dealloc;
- (id)defaultOperationConfiguration;
- (void)didReceiveDatabaseNotification:(id)arg1;
- (void)ensureAccountAvailableWithCompletionHandler:(id /* block */)arg1;
- (id)existingOperationToFetchChangesForZoneIDs:(id)arg1 includingExecutingOperations:(bool)arg2;
- (id)existingOperationToModifyRecordBatchesForZoneIDs:(id)arg1 includingExecutingOperations:(bool)arg2;
- (id)existingOperationsToModifyAnyZonesInZoneIDs:(id)arg1;
- (void)fetchChangesForZoneIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchChangesForZoneIDs:(id)arg1 ifNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchChangesOperation:(id)arg1 completedFetchingChangesForRecordZoneID:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 error:(id)arg5;
- (void)fetchChangesOperation:(id)arg1 completedFetchingDatabaseChangesWithError:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 completedWithError:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 databaseChangeTokenUpdated:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordChanged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasPurged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 updatedServerChangeToken:(id)arg2 clientChangeToken:(id)arg3 forRecordZoneID:(id)arg4;
- (void)fetchChangesWithCompletionHandler:(id /* block */)arg1;
- (bool)hasPendingModifications;
- (bool)hasSchedulerActivityWithIdentifier:(id)arg1;
- (void)identityUpdateNotification:(id)arg1;
- (bool)ignoringSystemConditions;
- (id)init;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ignoringSystemConditions:(bool)arg5 useUniqueActivityIdentifiers:(bool)arg6 automaticSyncingEnabled:(bool)arg7;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5 xpcActivityCriteriaOverrides:(id)arg6;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 useUniqueActivityIdentifiers:(bool)arg4 automaticSyncingEnabled:(bool)arg5;
- (bool)isAutomaticSyncingEnabled;
- (bool)isReadyToSubmitSchedulerActivity;
- (bool)isWaitingForHSA2;
- (bool)isWaitingForIdentityUpdate;
- (long long)lastKnownAccountStatus;
- (unsigned long long)lastNotifiedMetadataChangeCount;
- (unsigned long long)maxRecordBytesPerBatch;
- (unsigned long long)maxRecordCountPerBatch;
- (unsigned long long)maxZoneCountPerBatch;
- (id)metadata;
- (void)modifyPendingChangesInZoneIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)modifyPendingChangesInZoneIDs:(id)arg1 operationGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)modifyPendingChangesWithCompletionHandler:(id /* block */)arg1;
- (void)modifyRecordBatchesOperation:(id)arg1 completedBatch:(id)arg2 withSavedRecords:(id)arg3 deletedRecordIDs:(id)arg4 error:(id)arg5;
- (void)modifyRecordBatchesOperation:(id)arg1 completedWithError:(id)arg2;
- (void)modifyRecordBatchesOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordProgressForRecord:(id)arg2 progress:(double)arg3;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordSaveCompletionForRecord:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (bool)needsToFetchChangesForZoneIDs:(id)arg1;
- (id)newOperationToFetchChangesForZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (id)newOperationToModifyRecordBatchesInZoneIDs:(id)arg1 operationGroup:(id)arg2 osActivity:(id)arg3;
- (id)newOperationToModifyZonesToSave:(id)arg1 zoneIDsToDelete:(id)arg2 inOperationGroup:(id)arg3 osActivity:(id)arg4;
- (id)nextBatchOfRecordsToModifyDefaultBehaviorInZoneIDs:(id)arg1;
- (id)nextBatchOfRecordsToModifyInZoneIDs:(id)arg1;
- (id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)arg1;
- (id)notificationListener;
- (void)notifyDataSourceForUnserializedMetadataIfNecessaryWithCoalescing:(bool)arg1;
- (unsigned long long)numberOfModifyPendingRecordsOperations;
- (id)operationQueue;
- (void)performSaveSubscriptionActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performSyncActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performUserRequestedBackupActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)priority;
- (id)queue;
- (void)registerForSubscriptions;
- (void)registerSchedulerActivities;
- (id)saveSubscriptionActivityIdentifier;
- (void)saveSubscriptionIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleInitialWorkIfNecessary;
- (void)scheduleSaveSubscriptionIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)scheduleSyncIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)scheduleUserRequestedBackupActivityIfNecessary;
- (void)setAllowMetadataCallbackDeferral:(bool)arg1;
- (void)setAutomaticSyncingEnabled:(bool)arg1;
- (void)setBatchCreationQueue:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setLastKnownAccountStatus:(long long)arg1;
- (void)setLastNotifiedMetadataChangeCount:(unsigned long long)arg1;
- (void)setMaxRecordBytesPerBatch:(unsigned long long)arg1;
- (void)setMaxRecordCountPerBatch:(unsigned long long)arg1;
- (void)setMaxZoneCountPerBatch:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNotificationListener:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSkipRetryOnOperationError:(bool)arg1;
- (void)setUpdateMetadataBlock:(id /* block */)arg1;
- (void)setUseOpportunisticPushTopic:(bool)arg1;
- (void)setUseUniqueActivityIdentifiers:(bool)arg1;
- (void)setWaitingForHSA2:(bool)arg1;
- (void)setWaitingForIdentityUpdate:(bool)arg1;
- (void)setXpcActivityCriteriaOverrides:(id)arg1;
- (bool)shouldFetchChangesForZoneID:(id)arg1;
- (bool)shouldRetryAfterError:(id)arg1;
- (bool)skipRetryOnOperationError;
- (void)startWaitingForHSA2IfNecessary;
- (void)startWaitingForIdentityUpdateIfNecessary;
- (void)submitActivityIfNecessaryWithIdentifier:(id)arg1 earliestStartDate:(id)arg2 priority:(long long)arg3 userRequestedBackupTask:(bool)arg4;
- (id)syncActivityIdentifier;
- (void)unregisterActivities;
- (void)updateAccountInfoAndScheduleWorkIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)updateAccountInfoWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)updateMetadataBlock;
- (void)updateReadinessStateFromError:(id)arg1;
- (bool)useOpportunisticPushTopic;
- (bool)useUniqueActivityIdentifiers;
- (id)userRequestedBackupActivityIdentifier;
- (id)xpcActivityCriteriaOverrides;

@end
