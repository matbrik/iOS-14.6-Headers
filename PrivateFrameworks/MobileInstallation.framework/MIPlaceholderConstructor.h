/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIPlaceholderConstructor : NSObject {
    NSURL * _bundleURL;
    NSDictionary * _entitlements;
    unsigned long long  _iconPreservationLevel;
    NSData * _installSessionUUID;
    NSData * _installUUID;
    bool  _isLaunchProhibited;
    NSDictionary * _partialInfoPlist;
    bool  _performPlaceholderInstallActions;
    unsigned long long  _placeholderType;
    NSArray * _pluginPlaceholderConstructors;
    NSURL * _substituteIconFileURL;
}

@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, copy) NSDictionary *entitlements;
@property (nonatomic) unsigned long long iconPreservationLevel;
@property (nonatomic, retain) NSData *installSessionUUID;
@property (nonatomic, retain) NSData *installUUID;
@property (nonatomic) bool isLaunchProhibited;
@property (nonatomic, retain) NSDictionary *partialInfoPlist;
@property (nonatomic) bool performPlaceholderInstallActions;
@property (nonatomic) unsigned long long placeholderType;
@property (nonatomic, copy) NSArray *pluginPlaceholderConstructors;
@property (nonatomic, retain) NSURL *substituteIconFileURL;

+ (id)_iconKeys;
+ (id)_infoPlistKeysToLoad;

- (void).cxx_destruct;
- (bool)_copyStringsToPlaceholder:(id)arg1 error:(id*)arg2;
- (id)_entitlementsForPath:(id)arg1 error:(id*)arg2;
- (bool)_introspectWithError:(id*)arg1;
- (bool)_loadPartialInfoPlistWithError:(id*)arg1;
- (bool)_populatePluginPlaceholderConstructorsWithError:(id*)arg1;
- (bool)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)arg1 error:(id*)arg2;
- (bool)_writeIconToPlaceholder:(id)arg1 error:(id*)arg2;
- (bool)_writeInfoPlistToPlaceholder:(id)arg1 withError:(id*)arg2;
- (id)bundleURL;
- (id)entitlements;
- (unsigned long long)iconPreservationLevel;
- (id)initWithSource:(id)arg1 error:(id*)arg2;
- (id)installSessionUUID;
- (id)installUUID;
- (bool)isLaunchProhibited;
- (bool)materializeIntoBundleDirectory:(id)arg1 error:(id*)arg2;
- (id)partialInfoPlist;
- (bool)performPlaceholderInstallActions;
- (unsigned long long)placeholderType;
- (id)pluginPlaceholderConstructors;
- (void)setBundleURL:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setIconPreservationLevel:(unsigned long long)arg1;
- (void)setInstallSessionUUID:(id)arg1;
- (void)setInstallUUID:(id)arg1;
- (void)setIsLaunchProhibited:(bool)arg1;
- (void)setPartialInfoPlist:(id)arg1;
- (void)setPerformPlaceholderInstallActions:(bool)arg1;
- (void)setPlaceholderType:(unsigned long long)arg1;
- (void)setPluginPlaceholderConstructors:(id)arg1;
- (void)setSubstituteIconFileURL:(id)arg1;
- (id)substituteIconFileURL;

@end