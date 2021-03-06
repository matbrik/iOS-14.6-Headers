/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMessageRepository : EMRepository <EFFutureDelegate, EFLoggable> {
    EMBlockedSenderManager * _blockedSenderManager;
    NSURL * _cacheURL;
    EMRemoteConnection * _connection;
    EMRemoteConnectionRecoveryAssertion * _connectionRecoveryAssertion;
    EMMailboxRepository * _mailboxRepository;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _messageListItemCacheLock;
    NSMapTable * _observedMessageListItemCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSCache * _queryCountCache;
    NSHashTable * _recoverableObservers;
    EFPromise * _remoteContentCachePromise;
    NSMapTable * _unobservedMessageListItemCache;
    <EMVIPManager> * _vipManager;
    NSMapTable * _wrappedObserversByActualObserver;
}

@property (nonatomic, readonly) EMBlockedSenderManager *blockedSenderManager;
@property (nonatomic, retain) NSURL *cacheURL;
@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSArray *currentObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EMMailboxRepository *mailboxRepository;
@property (nonatomic, retain) NSCache *queryCountCache;
@property (nonatomic, retain) EFPromise *remoteContentCachePromise;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMVIPManager> *vipManager;

+ (id)log;
+ (id)remoteInterface;
+ (id)signpostLog;

- (void).cxx_destruct;
- (bool)_anyObserver:(id)arg1 containsObjectID:(id)arg2;
- (void)_applyChangesToCachedObjects:(id)arg1;
- (void)_blockedSendersDidChange:(id)arg1;
- (void)_broadcastMessageListItemChangesToObservers:(id /* block */)arg1;
- (id)_cachedItemForItem:(id)arg1 observers:(id)arg2 validationBlock:(id /* block */)arg3;
- (void)_detectChangesForMatchedAddedObjectIDs:(id)arg1 observerationIdentifier:(id)arg2 matchedChangesHandler:(id /* block */)arg3;
- (id)_existingObservedItemForObjectID:(id)arg1;
- (void)_notifyRecoverableObservers;
- (void)_removeItemsFromObservedItemsCacheIfNotObservedByObservers:(id)arg1;
- (id)_undoActionForConversationAction:(id)arg1;
- (void)_updateObserversForAction:(id)arg1;
- (void)_updateObserversForDeletedObjectIDs:(id)arg1;
- (void)_updateObserversForFlagChangeAction:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
- (id)blockedSenderManager;
- (id)cacheURL;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;
- (id)connection;
- (id)currentObservers;
- (void)dealloc;
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;
- (void)didStartBlockingMainThreadForFuture:(id)arg1;
- (id)initInternal;
- (id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4;
- (void)loadOlderMessagesForMailboxes:(id)arg1;
- (id)mailboxRepository;
- (id)messageForObjectID:(id)arg1;
- (id)messageForSearchableItemIdentifier:(id)arg1;
- (id)messageListItemsForObjectIDs:(id)arg1;
- (id)messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2;
- (id)messageObjectIDForURL:(id)arg1;
- (id)messageObjectIDsForSearchableItemIdentifiers:(id)arg1;
- (void)performCountQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performMessageChangeAction:(id)arg1;
- (id)performMessageChangeActionReturningUndoAction:(id)arg1;
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictMailboxForMovingMessagesWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryCountCache;
- (void)refreshQueryWithObserver:(id)arg1;
- (id)remoteContentCachePromise;
- (id)requestRepresentationForMessageWithID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)resetAllPrecomputedThreadScopes;
- (void)resetPrecomputedThreadScopesForMailboxObjectID:(id)arg1;
- (void)resetPrecomputedThreadScopesForMailboxType:(long long)arg1;
- (void)setCacheURL:(id)arg1;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (void)setConnection:(id)arg1;
- (void)setQueryCount:(id)arg1 forQueryIdentifier:(id)arg2;
- (void)setQueryCountCache:(id)arg1;
- (void)setRemoteContentCachePromise:(id)arg1;
- (unsigned long long)signpostID;
- (id)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3;
- (id)vipManager;

@end
