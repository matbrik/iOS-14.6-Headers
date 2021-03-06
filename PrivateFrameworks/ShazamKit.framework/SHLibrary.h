/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHLibrary : NSObject <NSFetchedResultsControllerDelegate, SHLibrarySyncDelegate> {
    SHLibraryDataStore * _dataStore;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SHLibraryChangeset * _localChanges;
    SHLibrarySyncController * _syncController;
    NSObject<OS_dispatch_group> * _syncGroup;
    NSObject<OS_dispatch_queue> * _syncQueue;
    SHLibrarySyncResult * _syncResult;
    <SHLibraryDelegate> * delegate;
}

@property (nonatomic, retain) SHLibraryDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SHLibraryChangeset *localChanges;
@property (readonly) Class superclass;
@property (nonatomic, retain) SHLibrarySyncController *syncController;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *syncGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) SHLibrarySyncResult *syncResult;

+ (id)defaultLibrary;

- (void).cxx_destruct;
- (void)addMediaItems:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)dataStore;
- (id)delegate;
- (id)dispatchQueue;
- (id)init;
- (id)initWithDataStore:(id)arg1 configuration:(id)arg2;
- (void)library:(id)arg1 didCompleteSyncWithCompletionHandler:(id /* block */)arg2;
- (void)library:(id)arg1 didProduceError:(id)arg2 withFailedItemIdentifiers:(id)arg3;
- (void)loadFetchedResultsController;
- (id)localChanges;
- (id)recentLibraryTracksWithLimit:(long long)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLocalChanges:(id)arg1;
- (void)setSyncController:(id)arg1;
- (void)setSyncGroup:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncResult:(id)arg1;
- (id)syncController;
- (id)syncGroup;
- (id)syncQueue;
- (id)syncResult;
- (void)synchronizeChanges:(id)arg1 completionHandler:(id /* block */)arg2;

@end
