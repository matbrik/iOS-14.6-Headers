/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraClipManager : HMFObject <HMBLocalZoneModelObserver, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDLogEventSubmitting, HMFLogging, HMFMessageReceiver> {
    NSUUID * _cameraProfileUUID;
    HMDActiveXPCClientConnectionsPeriodicTimer * _clientConnectionsTimer;
    HMBCloudZone * _cloudZone;
    <HMDCameraClipManagerDelegate> * _delegate;
    HMDCameraSignificantEventFaceClassificationResolver * _faceClassificationResolver;
    HMDCameraClipFeedbackManager * _feedbackManager;
    unsigned long long  _fetchBatchLimit;
    id /* block */  _fetchServerFactory;
    <HMDFileManager> * _fileManager;
    bool  _hasWriteAccess;
    HMBLocalZone * _localZone;
    HMFMessageDispatcher * _messageDispatcher;
    HMDCameraClipsQuotaManager * _quotaManager;
    NSDate * _suppressNotificationsBeforeDate;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMDDatabaseZoneManager * _zoneManager;
}

@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer;
@property (retain) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraClipManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver;
@property (retain) HMDCameraClipFeedbackManager *feedbackManager;
@property unsigned long long fetchBatchLimit;
@property (copy) id /* block */ fetchServerFactory;
@property (readonly) <HMDFileManager> *fileManager;
@property (readonly) bool hasStartedUpCloudZone;
@property (nonatomic) bool hasWriteAccess;
@property (readonly) unsigned long long hash;
@property (retain) HMBLocalZone *localZone;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDCameraClipsQuotaManager *quotaManager;
@property (readonly) Class superclass;
@property (copy) NSDate *suppressNotificationsBeforeDate;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDatabaseZoneManager *zoneManager;

+ (id)logCategory;
+ (double)maximumClipDuration;

- (void).cxx_destruct;
- (void)_cleanUpClipsAndSignificantEventsForInitialStartup:(bool)arg1;
- (void)_cleanUpExpiredClips;
- (void)_cleanUpIncompleteClipsForInitialStartup:(bool)arg1;
- (void)_cleanUpOrphanedSignficantEvents;
- (id)_faceClassificationsForSignificantEventWithUUID:(id)arg1;
- (void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2;
- (id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg1;
- (bool)_fetchClipsWithDateInterval:(id)arg1 isAscending:(bool)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)_fetchFaceCropURLForSignificantEventModel:(id)arg1;
- (id)_fetchHeroFrameURLForSignificantEventModel:(id)arg1;
- (bool)_fetchSignificantEventsWithDateInterval:(id)arg1 isAscending:(bool)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (void)_handleChangedClipModel:(id)arg1 wasCreated:(bool)arg2 mirrorOutputFuture:(id)arg3;
- (void)_handleChangedFaceClassificationModel:(id)arg1;
- (void)_handleChangedSignificantEventNotificationModel:(id)arg1 mirrorOutputFuture:(id)arg2;
- (id)_handleFaceMisclassificationForFaceCropURL:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 significantEventModel:(id)arg4;
- (void)_notifyForChangedSignificantEventModel:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3;
- (void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2;
- (void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg1 removedSignificantEventUUIDs:(id)arg2;
- (id)_performCloudPull;
- (void)_removeAllFaceClassificationModels;
- (id)_removeClipsWithUUIDs:(id)arg1 options:(id)arg2;
- (id)_significantEventFromSignificantEventModel:(id)arg1;
- (id)_significantEventModelsForClipWithUUID:(id)arg1;
- (id)_significantEventModelsWithUUIDs:(id)arg1;
- (id)_significantEventsWithUUIDs:(id)arg1;
- (bool)areShareModificationsEnabledForManager:(id)arg1;
- (id)cameraProfileUUID;
- (void)cleanUpClipsAndSignificantEvents;
- (id)clientConnectionsTimer;
- (void)clientConnectionsTimerDidFire:(id)arg1;
- (id)cloudZone;
- (void)configureWithHome:(id)arg1;
- (id)delegate;
- (id)disableCloudStorage;
- (id)enableCloudStorage;
- (id)faceClassificationResolver;
- (id)feedbackManager;
- (unsigned long long)fetchBatchLimit;
- (id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg1;
- (id /* block */)fetchServerFactory;
- (id)fileManager;
- (void)handleDeleteAllClipsMessage:(id)arg1;
- (void)handleDeleteClipMessage:(id)arg1;
- (void)handleFetchClipForSignificantEventMessage:(id)arg1;
- (void)handleFetchClipMessage:(id)arg1;
- (void)handleFetchClipsMessage:(id)arg1;
- (void)handleFetchCountOfClipsMessage:(id)arg1;
- (void)handleFetchFaceCropDataRepresentationMessage:(id)arg1;
- (void)handleFetchFaceCropURLMessage:(id)arg1;
- (void)handleFetchHeroFrameDataRepresentationMessage:(id)arg1;
- (void)handleFetchHeroFrameURLMessage:(id)arg1;
- (void)handleFetchPosterFramesAssetContextMessage:(id)arg1;
- (void)handleFetchSignificantEventsMessage:(id)arg1;
- (void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1;
- (void)handleHandleFaceMisclassificationMessage:(id)arg1;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;
- (void)handleImportClipsMessage:(id)arg1;
- (void)handlePerformCloudPullMessage:(id)arg1;
- (void)handleRemoteHandleFaceMisclassificationMessage:(id)arg1;
- (void)handleSubscribeMessage:(id)arg1;
- (void)handleUnsubscribeMessage:(id)arg1;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;
- (bool)hasStartedUpCloudZone;
- (bool)hasWriteAccess;
- (id)heroFrameURLForSignificantEventWithUUID:(id)arg1;
- (id)home;
- (id)initWithCameraProfile:(id)arg1;
- (id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 faceClassificationResolver:(id)arg3 clientConnectionsTimer:(id)arg4 messageDispatcher:(id)arg5 workQueue:(id)arg6 cameraProfileUUID:(id)arg7 fileManager:(id)arg8;
- (id)localZone;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)logEventDispatcher;
- (id)logIdentifier;
- (bool)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)performCloudPull;
- (id)quotaManager;
- (id)remove;
- (void)setCloudZone:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackManager:(id)arg1;
- (void)setFetchBatchLimit:(unsigned long long)arg1;
- (void)setFetchServerFactory:(id /* block */)arg1;
- (void)setHasWriteAccess:(bool)arg1;
- (void)setLocalZone:(id)arg1;
- (void)setSuppressNotificationsBeforeDate:(id)arg1;
- (id)significantEventsForClipContainingDate:(id)arg1;
- (id)significantEventsForClipWithUUID:(id)arg1;
- (id)significantEventsWithDateInterval:(id)arg1;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;
- (id)suppressNotificationsBeforeDate;
- (id)workQueue;
- (id)zoneManager;
- (void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;
- (void)zoneManagerDidStart:(id)arg1;
- (void)zoneManagerDidStop:(id)arg1;

@end