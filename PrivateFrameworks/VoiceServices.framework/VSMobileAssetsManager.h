/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSMobileAssetsManager : NSObject {
    NSObject<OS_dispatch_queue> * _assetQueryQueue;
    NSCache * _cachedVoiceResources;
    NSCache * _cachedVoiceSelections;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetQueryQueue;
@property (nonatomic, retain) NSCache *cachedVoiceResources;
@property (nonatomic, retain) NSCache *cachedVoiceSelections;

+ (void)amendVoice:(id)arg1 withDefaultSettingsFrom:(id)arg2;
+ (id)bundleIdentifierForVoiceType:(long long)arg1;
+ (id)downloadOptionsWithBattery:(bool)arg1;
+ (id)getLatestAssetFromArray:(id)arg1;
+ (bool)isVoiceAssetWellDefined:(id)arg1;
+ (id)pickCorrectAssetFromLocalAssets:(id)arg1;
+ (id)preinstallAssetsDirectory;
+ (id)queryForLanguage:(id)arg1 forType:(long long)arg2 voicename:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;
+ (id)queryForVoiceResourceAsset:(id)arg1 returnTypes:(long long)arg2;
+ (id)sharedManager;
+ (long long)typeFromBundleIdentifier:(id)arg1;
+ (id)voiceResourceFromAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_builtInVoiceForLanguage:(id)arg1;
- (void)_downloadAsset:(id)arg1 options:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_getResults:(id)arg1;
- (id)_getVoiceAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;
- (id)_installedVoiceResourceAssetForLanguage:(id)arg1;
- (id)_localVoiceForLanguageAndNamePath:(id)arg1;
- (id)_nonCacheVoiceSelectionForLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 gender:(long long)arg4 footprint:(long long)arg5;
- (void)_purgeAsset:(id)arg1;
- (id)activeVoiceAssets;
- (void)amendVoiceAssetWithLatestKnownData:(id)arg1;
- (void)amendVoiceWithDefaultSettings:(id)arg1;
- (id)assetQueryQueue;
- (id)builtInVoices;
- (id)cachedVoiceResources;
- (id)cachedVoiceSelections;
- (void)cancelDownload:(id)arg1 completion:(id /* block */)arg2;
- (bool)cancelDownloads:(id)arg1 error:(id*)arg2;
- (void)cancelResourceDownload:(id)arg1 completion:(id /* block */)arg2;
- (void)cleanOldVoiceResources;
- (id)cleanUnusedVoiceAssets;
- (id)downloadCatalog:(id)arg1 options:(id)arg2;
- (void)downloadCatalog:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadVoiceAsset:(id)arg1 options:(id)arg2 progressUpdateHandler:(id /* block */)arg3;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(bool)arg2 progressUpdateHandler:(id /* block */)arg3;
- (void)downloadVoiceResource:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadVoiceResource:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadVoiceResourceCatalogWithCompletion:(id /* block */)arg1;
- (id)inactiveVoiceAssets;
- (id)init;
- (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
- (id)installedLocalVoices;
- (id)installedVoiceResources;
- (id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1;
- (void)migrateAssetIfNeededWithAssetType:(id)arg1;
- (void)migrateAssets;
- (id)preinstallAssetsMetadata;
- (id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2 name:(id)arg3;
- (void)purgeAsset:(id)arg1;
- (void)removeVoiceAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)removeVoiceResource:(id)arg1 completion:(id /* block */)arg2;
- (void)resetCache;
- (void)resetResourcesCache;
- (id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2 name:(id)arg3;
- (id)selectVoiceForLang:(id)arg1 name:(id)arg2 type:(long long)arg3 gender:(long long)arg4 footprint:(long long)arg5;
- (id)selectVoiceResourceAssetForLanguage:(id)arg1;
- (void)setAssetQueryQueue:(id)arg1;
- (void)setCachedVoiceResources:(id)arg1;
- (void)setCachedVoiceSelections:(id)arg1;
- (id)voiceAssetFromPreinstallMetadata:(id)arg1;
- (id)voiceAssetWithName:(id)arg1 localOnly:(bool)arg2 outError:(id*)arg3;
- (id)voiceDataFromAsset:(id)arg1;
- (id)voiceDataWithBundleIdentifier:(id)arg1 attributes:(id)arg2 voicePathCallback:(id /* block */)arg3;

@end
