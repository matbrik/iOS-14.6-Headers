/* Generated by RuntimeBrowser.
 */

@protocol TRIAllocationStatusProvider

@required

- (<TRINotificationToken> *)addStatusUpdateHandlerForEnvironment:(void *)arg1 queue:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: int, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)enumerateActiveExperimentsForEnvironment:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 9: int, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRIExperimentAllocationStatus *, bool*, void*
- (TRIAllocationStatusCursor *)enumerateExperimentStatusesForEnvironment:(void *)arg1 startingFromCursor:(void *)arg2 error:(void *)arg3 block:(void *)arg4; // needs 4 arg types, found 10: int, TRIAllocationStatusCursor *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRIAllocationStatus *, bool*, void*
- (bool)removeUpdateHandlerForToken:(id <TRINotificationToken>)arg1;

@end