/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHFDataStore : NSObject {
    <HDHFDataStoreDelegate> * _delegate;
    struct shared_ptr<health::VirtualFilesystem> { 
        struct VirtualFilesystem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fileSystem;
    NSString * _fileSystemPath;
    _Atomic bool  _hasOpenStore;
    struct shared_ptr<health::DataStore> { 
        struct DataStore {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _highFrequencyDataStore;
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _openAttempt;
    NSObject<OS_dispatch_queue> * _openQueue;
}

@property (nonatomic, readonly, copy) NSURL *dataStoreURL;
@property (nonatomic) <HDHFDataStoreDelegate> *delegate;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (nonatomic, readonly, copy) NSString *fileSystemPath;
@property (nonatomic, readonly) long long rebuildState;

+ (bool)_errorIndicatesCorruption:(id)arg1;
+ (bool)_errorIsOutOfSpace:(id)arg1;
+ (bool)_shouldRequestRebuildForError:(id)arg1;
+ (bool)_shouldRequestRebuildForFailure:(long long)arg1 code:(int)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_convertExceptionsToError:(id*)arg1 inBlock:(id /* block */)arg2;
- (struct shared_ptr<health::DataStore> { struct DataStore {} *x1; struct __shared_weak_count {} *x2; })_highFrequencyDataStoreWithError:(id*)arg1;
- (bool)_lock_archiveHFD:(id*)arg1;
- (void)_lock_checkForLargeSparseHFD;
- (bool)_lock_deleteCompressedArchive:(id*)arg1;
- (struct shared_ptr<health::DataStore> { struct DataStore {} *x1; struct __shared_weak_count {} *x2; })_lock_highFrequencyDataStoreWithError:(id*)arg1;
- (bool)_lock_openHighFrequencyDataStoreWithError:(id*)arg1;
- (bool)_lock_performNextRebuildStepForState:(long long)arg1 error:(id*)arg2;
- (bool)_lock_performPostRestoreCleanup:(id*)arg1;
- (bool)_lock_prepareForRecovery:(id*)arg1;
- (struct shared_ptr<health::DataStore> { struct DataStore {} *x1; struct __shared_weak_count {} *x2; })_lock_primitiveOpenHighFrequencyDataStoreWithError:(id*)arg1;
- (bool)_lock_rebuildIfNeeded:(id*)arg1;
- (bool)_lock_restoreHFDFromArchive:(id*)arg1;
- (bool)_lock_rollCloudSyncOwnerIdentifier:(id*)arg1;
- (bool)_requiresRebuildForState:(long long)arg1;
- (id)_walPathForHFDAtPath:(id)arg1;
- (bool)accessStoreWithError:(id*)arg1 block:(id /* block */)arg2;
- (struct unique_ptr<health::DataStore, std::__1::default_delete<health::DataStore>> { struct __compressed_pair<health::DataStore *, std::__1::default_delete<health::DataStore>> { struct DataStore {} *x_1_1_1; } x1; })dataStoreAtURL:(id)arg1 filesystem:(const struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x1; struct __shared_weak_count {} *x2; }*)arg2 allowCheckpoint:(bool)arg3 error:(id*)arg4;
- (id)dataStoreURL;
- (void)dealloc;
- (id)delegate;
- (bool)deleteFileAt:(id)arg1 error:(id*)arg2;
- (bool)deleteHFDAt:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)diagnosticDescription;
- (id)directoryURL;
- (bool)discardStoreWithError:(id*)arg1;
- (id)fileManager;
- (id)fileSystemPath;
- (id /* block */)flushHandlerForInvalidation:(bool)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 fileSystem:(struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (bool)moveFileOnlyIfDestinationEmptyFrom:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)moveHFDAsideWithoutOverwritingFrom:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (long long)rebuildState;
- (void)requestHFDRebuild;
- (bool)retryDecompressionAfterError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRebuildState:(long long)arg1;
- (void)unitTest_requestRebuild;
- (void)unitTest_resetRebuildState;
- (id)writeaheadLogURLForHFDAt:(id)arg1;

@end