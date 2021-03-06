/* Generated by RuntimeBrowser.
 */

@protocol COAlarmManagerServiceInterface <NSObject>

@required

- (void)addAlarm:(void *)arg1 asInstance:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 8: MTAlarm *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addObserverForNotificationName:(void *)arg1 constraints:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSSet *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)alarmsforAccessoryUniqueIdentifier:(void *)arg1 asInstance:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)canDispatchForAccessoryUniqueIdentifier:(void *)arg1 categoryType:(void *)arg2 asInstance:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)dismissAlarmWithIdentifier:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAlarm:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 7: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObserverForNotificationName:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)snoozeAlarmWithIdentifier:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateAlarm:(void *)arg1 withCallback:(void *)arg2; // needs 2 arg types, found 7: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
