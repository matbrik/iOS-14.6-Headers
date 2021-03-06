/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDynamicDataObserverClassKitFacade : NSObject <CRKClassKitFacade> {
    NSObject<CRKClassKitFacade> * _classKitFacade;
    <CRKCancelable> * _currentUserChangeSubscription;
    NSMutableArray * _dataObservers;
    bool  _dataObserversAreRegistered;
    long long  _expectedUserRole;
    bool  _observingAccountState;
    unsigned long long  _sequenceNumber;
}

@property (nonatomic, readonly) long long accountState;
@property (nonatomic, readonly) NSObject<CRKClassKitFacade> *classKitFacade;
@property (nonatomic, retain) <CRKCancelable> *currentUserChangeSubscription;
@property (nonatomic, readonly) NSMutableArray *dataObservers;
@property (nonatomic) bool dataObserversAreRegistered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long expectedUserRole;
@property (readonly) unsigned long long hash;
@property (getter=isObservingAccountState, nonatomic) bool observingAccountState;
@property (nonatomic) unsigned long long sequenceNumber;
@property (readonly) Class superclass;

+ (id)dynamicDataObserverFacadeWithClassKitFacade:(id)arg1 expectedUserRole:(long long)arg2;
+ (id)keyPathsForValuesAffectingAccountState;

- (void).cxx_destruct;
- (long long)accountState;
- (void)addDataObserver:(id)arg1;
- (void)addInstructor:(id)arg1 toClass:(id)arg2;
- (void)addStudent:(id)arg1 toClass:(id)arg2;
- (id)classDataObserverWithSortDescriptors:(id)arg1;
- (id)classKitFacade;
- (id)currentUserChangeSubscription;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (id)dataObservers;
- (bool)dataObserversAreRegistered;
- (void)dealloc;
- (void)deregisterDataObserver:(id)arg1;
- (void)deregisterDataObservers;
- (void)deregisterForCurrentUserChangeNotification;
- (void)enrolledClassesWithCompletion:(id /* block */)arg1;
- (void)executeQuery:(id)arg1;
- (long long)expectedUserRole;
- (id)initWithClassKitFacade:(id)arg1 expectedUserRole:(long long)arg2;
- (void)instructedClassesWithCompletion:(id /* block */)arg1;
- (void)instructorsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (bool)isObservingAccountState;
- (bool)isSafeToTalkToProgressdWithAccountState:(long long)arg1;
- (id)locationsObserverWithSortDescriptors:(id)arg1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)locationsWithObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
- (id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)makeQueryForPersonsWithIdentifiers:(id)arg1;
- (id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)objectIDsOfInstructorsInClass:(id)arg1;
- (id)objectIDsOfStudentsInClass:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)ownsError:(id)arg1;
- (id)personObserverWithPersonIDs:(id)arg1 sortDescriptors:(id)arg2;
- (void)registerDataObserver:(id)arg1;
- (void)registerDataObservers;
- (void)registerForCurrentUserChangeNotification;
- (void)removeClass:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDataObserver:(id)arg1;
- (void)removeInstructor:(id)arg1 fromClass:(id)arg2;
- (void)removeStudent:(id)arg1 fromClass:(id)arg2;
- (void)safeFetchCurrentUserWithCompletion:(id /* block */)arg1;
- (void)saveClass:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)sequenceNumber;
- (void)setCurrentUserChangeSubscription:(id)arg1;
- (void)setDataObserversAreRegistered:(bool)arg1;
- (void)setObservingAccountState:(bool)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)startObservingAccountStateForEligibility;
- (void)stopObservingAccountStateForEligibility;
- (void)studentsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)subscribeToClassMembershipChangeEvents:(id /* block */)arg1;
- (id)subscribeToCurrentUserDidChangeEvents:(id /* block */)arg1;
- (void)updateCurrentUserState;

@end
