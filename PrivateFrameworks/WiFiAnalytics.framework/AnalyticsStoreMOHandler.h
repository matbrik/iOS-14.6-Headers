/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface AnalyticsStoreMOHandler : NSObject {
    AnalyticsStoreMOContext * _storeMOContext;
}

@property (nonatomic, retain) AnalyticsStoreMOContext *storeMOContext;

- (void).cxx_destruct;
- (void)ageOutManagedObjectsOlderThan:(double)arg1;
- (id)allBssidsForSsid:(id)arg1;
- (id)allSsidsForBssid:(id)arg1;
- (id)analyticsStoreEntitiesWithDate;
- (id)analyticsStoreEntityNames;
- (id)analyticsStoreEntityRelationshipNames;
- (bool)batchDelete:(id)arg1 withPredicate:(id)arg2 withFetchRequest:(id)arg3;
- (bool)batchUpdate:(id)arg1 withPredicate:(id)arg2 propertiesToUpdate:(id)arg3;
- (id)bssManagedObject:(id)arg1 ssid:(id)arg2;
- (id)bssManagedObject:(id)arg1 ssid:(id)arg2 created:(bool*)arg3;
- (id)bssManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2;
- (bool)coalesceBssidsIntoDeployment:(id)arg1;
- (id)createEntity:(id)arg1;
- (id)earliestJoinDate:(id)arg1;
- (id)entity:(id)arg1 withPredicate:(id)arg2 created:(bool*)arg3;
- (id)entityByCounting:(id)arg1 withPredicate:(id)arg2 created:(bool*)arg3;
- (unsigned long long)entityCount:(id)arg1 withPredicate:(id)arg2;
- (id)fetch:(id)arg1 withPredicate:(id)arg2;
- (id)fetchAll:(id)arg1;
- (id)fetchPropertiesForEntity:(id)arg1 properties:(id)arg2 predicate:(id)arg3;
- (id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)arg1 properties:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptor:(id)arg5 returnDistinct:(bool)arg6;
- (id)fetchRequestForEntity:(id)arg1;
- (id)fetchRequestForEntityWithBatchSize:(id)arg1 batchSize:(unsigned long long)arg2 prefetch:(id)arg3;
- (id)fetchRequestForEntityWithOffset:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 prefetch:(id)arg4;
- (id)fetchRoamCache:(id)arg1 fetchLimit:(unsigned long long)arg2;
- (id)fetchRoamObjects:(id)arg1 fetchLimit:(unsigned long long)arg2;
- (id)fetchRoamProperties:(id)arg1 fetchLimit:(unsigned long long)arg2 properties:(id)arg3;
- (id)geotagManagedObject;
- (id)getDeploymentUuidForBssids:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)joinManagedObject;
- (id)leaveManagedObject;
- (id)managedObjectContext;
- (id)mostRecentJoinMO:(id)arg1 ssid:(id)arg2;
- (id)networkManagedObject:(id)arg1;
- (id)networkManagedObject:(id)arg1 created:(bool*)arg2;
- (id)networkManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)performBlockOnManagedObjectContext:(id)arg1 block:(id /* block */)arg2;
- (void)performPruneBasedOnStoreSize;
- (id)predicateForEntityWithAge:(id)arg1 maxAge:(unsigned long long)arg2;
- (id)predicateForEntityWithAgeOlderThan:(id)arg1 dateAttribute:(id)arg2 olderThan:(double)arg3;
- (void)pruneManagedObjects;
- (bool)removeNetwork:(id)arg1;
- (id)roamManagedObject;
- (unsigned long long)roamsCount:(id)arg1 fetchLimit:(unsigned long long)arg2;
- (void)saveManagedObjectContext;
- (bool)setBssManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;
- (bool)setNetworkManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;
- (void)setStoreMOContext:(id)arg1;
- (id)storeMOContext;
- (void)updateManagedObjectContextWithoutSave;

@end