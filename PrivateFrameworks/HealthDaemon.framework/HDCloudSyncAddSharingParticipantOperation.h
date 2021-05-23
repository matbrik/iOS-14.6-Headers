/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncAddSharingParticipantOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSDictionary * _invitationTokensByShareURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CKShareParticipant * _ownerParticipant;
    CKShareParticipant * _participant;
    bool  _requireExistingRelationship;
    NSArray * _shareURLs;
    HDSynchronousTaskGroup * _taskGroup;
    NSArray * _zones;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *invitationTokensByShareURL;
@property (nonatomic, readonly, copy) CKShareParticipant *ownerParticipant;
@property (retain) CKShareParticipant *participant;
@property bool requireExistingRelationship;
@property (nonatomic, readonly, copy) NSArray *shareURLs;
@property (readonly) Class superclass;
@property (copy) NSArray *zones;

- (void).cxx_destruct;
- (id)_addParticipantIfNeeded:(id)arg1 zone:(id)arg2 share:(id)arg3;
- (void)_didSaveSharesInZones:(id)arg1;
- (void)_foundOwnerParticipant:(id)arg1;
- (bool)_isSharingWithParticipant:(id)arg1;
- (bool)_isValidParticipant:(id)arg1 withPermissions:(long long)arg2;
- (id)_updateShareRecordsWithParticipant:(id)arg1 container:(id)arg2;
- (id)_updatedRegistryRecordIfNeededForContainer:(id)arg1;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)invitationTokensByShareURL;
- (void)main;
- (id)ownerParticipant;
- (id)participant;
- (bool)requireExistingRelationship;
- (void)setParticipant:(id)arg1;
- (void)setRequireExistingRelationship:(bool)arg1;
- (void)setZones:(id)arg1;
- (id)shareURLs;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;
- (id)zones;

@end