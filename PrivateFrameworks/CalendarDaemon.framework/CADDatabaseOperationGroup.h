/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADDatabaseCanModifyCalendarDatabase:(id /* block */)arg1;
- (void)CADDatabaseCommitWithReply:(id /* block */)arg1;
- (void)CADDatabaseExportICSDataForCalendar:(id)arg1 options:(long long)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(id /* block */)arg3;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseGetNextAssignableColorWithReply:(id /* block */)arg1;
- (void)CADDatabaseGetSequenceNumber:(id /* block */)arg1;
- (void)CADDatabaseGetUUID:(id /* block */)arg1;
- (void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(id /* block */)arg6;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(id /* block */)arg1;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(id /* block */)arg1;
- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseRollbackWithReply:(id /* block */)arg1;
- (void)CADDatabaseSaveWithReply:(id /* block */)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(bool)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(id /* block */)arg1;
- (bool)_CADDatabaseCanModifyCalendarDatabase;
- (struct __CFArray { }*)_copyToIntCFArrayRef:(id)arg1;
- (struct __CFSet { }*)_copyToIntCFSetRef:(id)arg1;
- (id)_importEvents:(id)arg1 data:(id)arg2 intoCalendarWithID:(int)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 outError:(int*)arg6;

@end