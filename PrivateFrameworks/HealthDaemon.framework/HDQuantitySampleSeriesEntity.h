/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity <HDSeriesEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_insertDataObject:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(id*)arg4;
+ (long long)_insertionEra;
+ (bool)_moveHFDKey:(long long)arg1 fromEntity:(id)arg2 toEntity:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (long long)_notFinalInserationEra;
+ (id)_propertiesToLeftJoin;
+ (id)_quantitySampleWithID:(id)arg1 canBeUnfrozen:(bool)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 transaction:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)_replaceEntity:(id)arg1 UUIDToDelete:(id)arg2 newEntity:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (void)_setStatistics:(id)arg1 cumulativeQuantitySeriesSample:(id)arg2;
+ (void)_setStatistics:(id)arg1 discreteQuantitySeriesSample:(id)arg2;
+ (bool)_setStatisticsForQuantitySample:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)_statisticsProperties;
+ (id)_statisticsWithHFDKey:(long long)arg1 statisticsCalculator:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (void)_triggerABCForNotFinalSeriesSampleInsert:(id)arg1 reason:(id)arg2;
+ (bool)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_updatedSampleForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 newCount:(long long)arg4 transaction:(id)arg5 profile:(id)arg6 error:(id*)arg7;
+ (id)_updatedSampleUUIDForSeries:(id)arg1 originalEntity:(id)arg2 HFDKey:(long long)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)additionalPredicateForEnumeration;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteSeriesFromHFDWithKey:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)deleteSeriesWithID:(id)arg1 deleteHFDData:(bool)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (Class)entityClassForEnumeration;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateDataWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateRawDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)hasSeriesDataForHFDKey:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)indices;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)insertValues:(id)arg1 series:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)isConcreteEntity;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (bool)migrateDataFromDataStore:(const struct DataStore { struct BlockAccessFile { struct TransactionalFile { struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_1_3_1; struct __shared_weak_count {} *x_1_3_2; } x_1_2_1; struct WriteAheadLog { struct mutex { struct _opaque_pthread_mutex_t { long long x_1_5_1; BOOL x_1_5_2[56]; } x_1_4_1; } x_2_3_1; struct condition_variable { struct _opaque_pthread_cond_t { long long x_1_5_1; BOOL x_1_5_2[40]; } x_2_4_1; } x_2_3_2; struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_3_4_1; struct __shared_weak_count {} *x_3_4_2; } x_2_3_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_8_1; unsigned long long x_1_8_2; unsigned long long x_1_8_3; } x_1_7_1; struct __short { BOOL x_2_8_1[23]; struct { unsigned char x_2_9_1; } x_2_8_2; } x_1_7_2; struct __raw { unsigned long long x_3_8_1[3]; } x_1_7_3; } x_1_6_1; } x_1_5_1; } x_4_4_1; } x_2_3_4; struct shared_ptr<health::VirtualFile> { struct VirtualFile {} *x_5_4_1; struct __shared_weak_count {} *x_5_4_2; } x_2_3_5; } x_1_2_2; } x_1_1_1; } x1; }*)arg1 to:(struct DataStore { struct BlockAccessFile { struct TransactionalFile { struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_1_3_1; struct __shared_weak_count {} *x_1_3_2; } x_1_2_1; struct WriteAheadLog { struct mutex { struct _opaque_pthread_mutex_t { long long x_1_5_1; BOOL x_1_5_2[56]; } x_1_4_1; } x_2_3_1; struct condition_variable { struct _opaque_pthread_cond_t { long long x_1_5_1; BOOL x_1_5_2[40]; } x_2_4_1; } x_2_3_2; struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_3_4_1; struct __shared_weak_count {} *x_3_4_2; } x_2_3_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_8_1; unsigned long long x_1_8_2; unsigned long long x_1_8_3; } x_1_7_1; struct __short { BOOL x_2_8_1[23]; struct { unsigned char x_2_9_1; } x_2_8_2; } x_1_7_2; struct __raw { unsigned long long x_3_8_1[3]; } x_1_7_3; } x_1_6_1; } x_1_5_1; } x_4_4_1; } x_2_3_4; struct shared_ptr<health::VirtualFile> { struct VirtualFile {} *x_5_4_1; struct __shared_weak_count {} *x_5_4_2; } x_2_3_5; } x_1_2_2; } x_1_1_1; } x1; }*)arg2 transaction:(id)arg3 recoveryAnalytics:(id)arg4 error:(id*)arg5;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (id)orderingTermForSortDescriptor:(id)arg1;
+ (bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)performSeriesWriteTransactionWithProfile:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)primitiveInsertValues:(id)arg1 seriesVersion:(long long)arg2 HFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)primitiveRemoveDatums:(id)arg1 HFDKey:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)privateSubEntities;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)arg1 error:(id*)arg2;
+ (id)removeValues:(id)arg1 fromQuantitySeriesSample:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)replaceExistingObject:(id)arg1 existingObjectID:(id)arg2 replacementObject:(id)arg3 replacementObjectID:(id)arg4 profile:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalHFDData:(bool)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (bool)supportsObjectMerging;
+ (bool)unitTesting_insertValues:(id)arg1 quantitySample:(id)arg2 seriesVersion:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (long long)unitTesting_insertionEra;
+ (void)unitTesting_updateInsertionEra;

- (id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_dataOriginProvenanceWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)_frozenUUIDForUnfrozenQuantitySample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 profile:(id)arg5 error:(id*)arg6;
- (bool)_getFirstTimeEndTimeCountWithTransaction:(id)arg1 HFDKey:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (long long)_hasHFDDataWithDatabase:(id)arg1 error:(id*)arg2;
- (long long)_hasV1SeriesDataWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)_insertValues:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (long long)_isFrozenInDatabase:(id)arg1 error:(id*)arg2;
- (bool)_isSeriesInDatabase:(id)arg1;
- (id)_mergeCodableSeriesDataFromQuantitySampleSeries:(id)arg1 profile:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (bool)_setHFDKey:(long long)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_setInsertionEra:(long long)arg1 database:(id)arg2 error:(id*)arg3;
- (long long)_shouldMergeQuantitySampleSeries:(id)arg1 codableSeries:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (id)_updatedSampleForQuantitySeriesSample:(id)arg1 HFDKey:(long long)arg2 endDate:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (id)countForSeriesWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (bool)enumerateDataInInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)enumerateDataWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)freezeWithEndDate:(id)arg1 transaction:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (id)hasSeriesDataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)insertValues:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)startTimeEndTimeCountForSeriesWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)unitTesting_setInsertionEra:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
- (void)willDeleteFromDatabase:(id)arg1;

@end