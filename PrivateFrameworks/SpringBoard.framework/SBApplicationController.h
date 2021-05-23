/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBApplicationController : NSObject <BKSTerminationAssertionObserver, SBApplicationLifecycleObserver, SBApplicationRestrictionDataSource, XBApplicationProviding> {
    FBSApplicationLibrary * _appLibrary;
    SBApplicationLibraryObserver * _appLibraryObserver;
    NSMutableDictionary * _applicationsByBundleIdentifer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _applicationsLock;
    NSSet * _cachedSystemAppsWithVisibilityOverrideHidden;
    SBApplicationRestrictionController * _restrictionController;
    SBSplashBoardController * _splashBoardController;
    SBApplicationInfo * _systemAppInfo;
    NSMutableDictionary * _systemAppsVisibilityOverrides;
    SBReverseCountedSemaphore * _uninstallationReverseSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_setClearAllLegacySnapshotsWhenLoaded:(bool)arg1;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(bool)arg1;
+ (id)_sharedInstanceCreateIfNecessary:(bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (id)_allApplicationsFilteredBySystem:(bool)arg1;
- (Class)_appClassForInfo:(id)arg1;
- (id)_appInfosToBundleIDs:(id)arg1;
- (id)_appLibrary;
- (id)_appLibraryObserver;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)_loadApplicationFromApplicationInfo:(id)arg1;
- (void)_loadApplications:(id)arg1 remove:(id)arg2;
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;
- (void)_memoryWarningReceived;
- (void)_preLoadApplications;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(bool)arg2 withReason:(id)arg3;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 replaced:(id)arg3 updated:(id)arg4;
- (id)_splashBoardController;
- (void)_updateVisibilityOverrides;
- (void)_updateVisibilityOverridesInBackground;
- (id)allApplications;
- (id)allBundleIdentifiers;
- (id)allInstalledApplications;
- (id)allSplashBoardApplications;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (void)applicationRestrictionsMayHaveChanged;
- (void)applicationVisibilityMayHaveChanged;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationWithPid:(int)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)applicationsDemoted:(id)arg1;
- (void)applicationsRemoved:(id)arg1;
- (void)applicationsReplaced:(id)arg1;
- (void)applicationsUpdated:(id)arg1;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (id)cameraApplication;
- (id)clockApplication;
- (id)dataActivationApplication;
- (void)dealloc;
- (id)faceTimeApp;
- (id)iPodOutApplication;
- (id)inCallServiceApp;
- (id)init;
- (id)loginApplication;
- (id)mapsApplication;
- (id)mobilePhone;
- (id)musicApplication;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (id)notesApplication;
- (id)recentlyUsedBundleIDs;
- (void)requestUninstallApplication:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)restrictionController;
- (id)runningApplications;
- (id)setupApplication;
- (id)splashBoardSystemApplications;
- (id)spotlightApplication;
- (id)testFlightApplication;
- (void)uninstallApplication:(id)arg1;
- (void)waitForUninstallsToComplete;
- (id)webApplication;

@end