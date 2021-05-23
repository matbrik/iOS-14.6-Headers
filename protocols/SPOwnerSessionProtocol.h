/* Generated by RuntimeBrowser.
 */

@protocol SPOwnerSessionProtocol <NSObject>

@required

- (NSSet *)allBeacons;
- (void)allBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (id /* block */)beaconAddedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPBeacon *, void*, id, SEL
- (id /* block */)beaconRemovedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPBeacon *, void*, id, SEL
- (id /* block */)beaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (void)disableUTAppAlert:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (FMFuture *)executeCommand:(SPCommand *)arg1;
- (void)executeCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (FMFuture *)executeUTPlaySoundCommand:(SPCommand *)arg1;
- (void)fetchUnauthorizedEncryptedPayload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (void)isUTAppAlertDisabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id /* block */)latestLocationsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (NSSet *)locationSources;
- (void)locationsForBeacons:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)removeBeacon:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPBeacon *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBeaconAddedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)setBeaconRemovedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)setBeaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setLatestLocationsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setLocationSources:(NSSet *)arg1;
- (void)shareBeacon:(void *)arg1 handles:(void *)arg2 expiration:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: SPBeacon *, NSArray *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)startRefreshing;
- (void)startRefreshingBeacons:(NSArray *)arg1;
- (void)stopRefreshing;
- (void)unacceptedBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)unknownBeaconsForUUIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)updateBatteryStatus:(void *)arg1 beaconUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned char, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateBeaconObservations:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end