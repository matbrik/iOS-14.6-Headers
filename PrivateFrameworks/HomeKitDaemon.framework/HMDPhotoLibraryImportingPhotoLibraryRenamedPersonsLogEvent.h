/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {
    long long  _numberOfRenamedPersons;
}

@property (readonly) long long numberOfRenamedPersons;

- (id)eventName;
- (id)initWithNumberOfRenamedPersons:(long long)arg1;
- (long long)numberOfRenamedPersons;
- (id)serializedEvent;

@end
