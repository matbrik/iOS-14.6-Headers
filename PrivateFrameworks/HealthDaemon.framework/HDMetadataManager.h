/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataManager : NSObject {
    HDDatabaseValueCache * _keyCache;
    HDDatabaseValueCache * _keyEntityCache;
    HDProfile * _profile;
}

+ (Class)_metadataPredicateClassForKey:(id)arg1;

- (void).cxx_destruct;
- (id)_externalSyncMetadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* block */)arg3 database:(id)arg4 error:(id*)arg5;
- (id)_ignoredInsertedMetadataKeys;
- (void)_insertDerivedMetadataforKey:(id)arg1 value:(id)arg2 filteredAddBlock:(id /* block */)arg3;
- (bool)_insertExternalSyncMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(bool)arg5 transaction:(id)arg6 error:(id*)arg7;
- (bool)_insertMetadata:(id)arg1 forObjectID:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)_keyEntityForKey:(id)arg1 createIfNecessary:(bool)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)_keyForKeyID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)_metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* block */)arg3 statement:(id)arg4 error:(id*)arg5;
- (bool)_skipInsertOfKey:(id)arg1 metadata:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (bool)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(bool)arg5 error:(id*)arg6;
- (bool)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(bool)arg5 transaction:(id)arg6 error:(id*)arg7;
- (id)metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(id /* block */)arg3 statement:(id)arg4 error:(id*)arg5;
- (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
- (id)predicateWithMetadataKey:(id)arg1 exists:(bool)arg2;
- (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;
- (id)unitTest_metadataForObjectID:(long long)arg1 keyFilter:(id /* block */)arg2 error:(id*)arg3;
- (id)unitTest_rawMetadataForObject:(id)arg1 error:(id*)arg2;

@end