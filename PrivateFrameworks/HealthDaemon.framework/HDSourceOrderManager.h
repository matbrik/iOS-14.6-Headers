/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceOrderManager : NSObject {
    HDProfile * _profile;
    HDDatabaseValueCache * _sourceOrdersForTypeCache;
}

+ (id)_defaultOrderingWithSources:(id)arg1;

- (void).cxx_destruct;
- (bool)_addOrderedSource:(id)arg1 objectType:(id)arg2 transactionCache:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (id)_defaultSourceCacheItemWithTransactionCache:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)_fetchSourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)_insertCodableObjectTypeSourceOrder:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)_mergedSourceOrderForExistingOrder:(id)arg1 incomingOrder:(id)arg2;
- (id)_orderedSourceIDsForOrderedSources:(id)arg1 sourcesByID:(id)arg2 objectType:(id)arg3 transactionCache:(id)arg4 database:(id)arg5 error:(id*)arg6;
- (id)_sourceCacheItemForObjectType:(id)arg1 error:(id*)arg2;
- (id)_sourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)_sourceOrderForCodableSourceOrder:(id)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)_updateOrderedSourceIDsForWrappedSource:(struct _HDWrappedSource { id x1; struct vector<long long, std::__1::allocator<long long>> { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long>> { long long *x_3_2_1; } x_2_1_3; } x2; double x3; bool x4; }*)arg1 transactionCache:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)_updateSourceOrder:(id)arg1 type:(id)arg2 error:(id*)arg3;
- (bool)_updateSourceOrder:(id)arg1 type:(id)arg2 transactionCache:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (bool)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id*)arg3;
- (bool)createSourceOrdersWithCodables:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (id)orderedSourceIDsForObjectType:(id)arg1 bundleIdentifierMapping:(id)arg2 userOrdered:(bool*)arg3 error:(id*)arg4;
- (id)orderedSourcesForObjectType:(id)arg1 error:(id*)arg2;
- (bool)resetCacheWithError:(id*)arg1;
- (void)resetCacheWithTransaction:(id)arg1;
- (bool)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id*)arg3;

@end
