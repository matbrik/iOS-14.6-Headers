/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync
 */

@interface ESLocalDBHelper : NSObject {
    int  _abConnectionCount;
    void * _abDB;
    NSObject<OS_dispatch_queue> * _abDBQueue;
    int  _calConnectionCount;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; id x27; bool x28; bool x29; struct __CFSet {} *x30; id x31; bool x32; } * _calDB;
    NSObject<OS_dispatch_queue> * _calDBQueue;
    id /* block */  _calUnitTestCallbackBlock;
    NSString * _clientIdentifier;
    CNContactStore * _contactStore;
    int  _noteConnectionCount;
    NoteContext * _noteDB;
    NSObject<OS_dispatch_queue> * _noteDBQueue;
    NSMutableArray * _saveRequests;
}

@property (nonatomic) int abConnectionCount;
@property (nonatomic) void*abDB;
@property (nonatomic) int calConnectionCount;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; id x27; bool x28; bool x29; struct __CFSet {} *x30; id x31; bool x32; }*calDB;
@property (nonatomic, copy) id /* block */ calUnitTestCallbackBlock;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) int noteConnectionCount;
@property (nonatomic, retain) NoteContext *noteDB;
@property (nonatomic, retain) NSMutableArray *saveRequests;

+ (void)abSetTestABDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)calTestCalDBDir;
+ (id)os_log;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;

- (void).cxx_destruct;
- (bool)_abOpenDBWithClientIdentifier:(id)arg1;
- (bool)_calOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForAddressBookYieldNotifications;
- (void)_registerForCalendarYieldNotifications;
- (bool)abCloseDBAndSave:(bool)arg1;
- (int)abConnectionCount;
- (id)abConstraintPlistPath;
- (void*)abDB;
- (void*)abDBThrowOnNil:(bool)arg1;
- (void)abOpenDBAsGenericClient;
- (void)abOpenDBWithClientIdentifier:(id)arg1;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (bool)abSaveDB;
- (void)addSaveRequest:(id)arg1;
- (void)calClearSuperfluousChanges;
- (bool)calCloseDBAndSave:(bool)arg1;
- (int)calConnectionCount;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; id x27; bool x28; bool x29; struct __CFSet {} *x30; id x31; bool x32; }*)calDB;
- (void)calOpenDBAsGenericClient;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (bool)calSaveDB;
- (bool)calSaveDBAndFlushCaches;
- (id /* block */)calUnitTestCallbackBlock;
- (void)calUnitTestsSetCallbackBlockForSave:(id /* block */)arg1;
- (id)changeTrackingID;
- (id)clientIdentifier;
- (id)contactStore;
- (void)dealloc;
- (void)executeAllSaveRequests;
- (id)init;
- (bool)noteCloseDBAndSave:(bool)arg1;
- (int)noteConnectionCount;
- (id)noteDB;
- (void)noteOpenDB;
- (bool)noteSaveDB;
- (id)saveRequests;
- (void)setAbConnectionCount:(int)arg1;
- (void)setAbDB:(void*)arg1;
- (void)setCalConnectionCount:(int)arg1;
- (void)setCalDB:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; id x27; bool x28; bool x29; struct __CFSet {} *x30; id x31; bool x32; }*)arg1;
- (void)setCalUnitTestCallbackBlock:(id /* block */)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setNoteConnectionCount:(int)arg1;
- (void)setNoteDB:(id)arg1;
- (void)setSaveRequests:(id)arg1;
- (bool)useContacts;

@end
