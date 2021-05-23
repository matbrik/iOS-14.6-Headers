/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSource : EKObject {
    EKAvailabilityCache * _availabilityCache;
    NSString * _cachedHost;
    NSSet * _cachedOwnerAddresses;
    long long  _cachedPort;
    bool  _isFacebook;
    bool  _snoozeAlarmRequiresDetach;
    NSDate * _timeOfLastExternalIdentificationCache;
}

@property (nonatomic, readonly) NSSet *allCalendars;
@property (nonatomic) bool allowsCalendarAddDeleteModify;
@property (nonatomic) bool allowsEvents;
@property (nonatomic) bool allowsProposeNewTime;
@property (nonatomic) bool allowsTasks;
@property (nonatomic, readonly) EKAvailabilityCache *availabilityCache;
@property (nonatomic, retain) NSString *cachedHost;
@property (nonatomic, retain) NSSet *cachedOwnerAddresses;
@property (nonatomic) long long cachedPort;
@property (nonatomic, readonly) NSSet *calendars;
@property (nonatomic, readonly) EKSourceConstraints *constraints;
@property (nonatomic, retain) NSString *constraintsDescriptionPath;
@property (nonatomic, retain) NSString *constraintsDescriptionPathForUnitTesting;
@property (nonatomic, retain) NSString *constraintsName;
@property (nonatomic, copy) NSString *creatorBundleID;
@property (nonatomic, copy) NSString *creatorCodeSigningIdentity;
@property (nonatomic, copy) NSNumber *defaultAlarmOffset;
@property (nonatomic, copy) NSString *delegatedAccountOwnerStoreID;
@property (nonatomic, readonly) int displayOrderForNewCalendar;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic) int flags;
@property (nonatomic) int flags2;
@property (nonatomic, readonly) bool hasOwnerEmailAddress;
@property (nonatomic, readonly) bool isDelegate;
@property (nonatomic, readonly) bool isEnabledForEvents;
@property (nonatomic) bool isFacebook;
@property (nonatomic, readonly) bool isFacebookSource;
@property (nonatomic, readonly) bool isSyncing;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, retain) NSDate *lastSyncEndDate;
@property (nonatomic, readonly) unsigned long long lastSyncError;
@property (nonatomic, retain) NSData *lastSyncErrorData;
@property (nonatomic, readonly, copy) NSDictionary *lastSyncErrorUserInfo;
@property (nonatomic, retain) NSDate *lastSyncStartDate;
@property (nonatomic) bool onlyCreatorCanModify;
@property (nonatomic, readonly) NSSet *ownerAddresses;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) bool preferUsingEventOrganizerEmailWhenComposingMail;
@property (nonatomic) long long preferredEventPrivateValue;
@property (nonatomic, readonly) NSString *preferredOwnerAddress;
@property (nonatomic, readonly) bool prefersSuggestingNewTimeViaEmail;
@property (nonatomic) bool prohibitsDetachmentOnCommentChange;
@property (nonatomic) bool prohibitsICSImport;
@property (nonatomic) bool prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) bool prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) bool prohibitsPrivateEventsWithAttendees;
@property (nonatomic) bool prohibitsYearlyRecurrenceInterval;
@property (nonatomic, readonly) REMObjectID *remAccountObjectID;
@property (nonatomic) bool requiresSamePrivacyLevelAcrossRecurrenceSeries;
@property (nonatomic, readonly) NSString *serverHost;
@property (nonatomic, readonly) long long serverPort;
@property (nonatomic, readonly) bool serverUsesSSL;
@property (nonatomic) bool showsNotifications;
@property (nonatomic) bool snoozeAlarmRequiresDetach;
@property (nonatomic, readonly) NSError *sourceError;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long strictestEventPrivateValue;
@property (nonatomic) bool supportsAlarmAcknowledgedDate;
@property (nonatomic, readonly) bool supportsAttendeeEventForwarding;
@property (nonatomic) bool supportsAvailabilityRequests;
@property (nonatomic, readonly) bool supportsCalendarCreation;
@property (nonatomic, readonly) bool supportsEventCalendarCreation;
@property (nonatomic, readonly) bool supportsFloatingTimeZone;
@property (nonatomic, readonly) bool supportsFreebusy;
@property (nonatomic) bool supportsIgnoringEventsInAvailabilityRequests;
@property (nonatomic, readonly) bool supportsJunkReporting;
@property (nonatomic) bool supportsLocationDirectorySearches;
@property (nonatomic, readonly) bool supportsMultipleAlarms;
@property (nonatomic, readonly) bool supportsMultipleDaysInMonthlyRecurrence;
@property (nonatomic, readonly) bool supportsMultipleMonthsInYearlyRecurrence;
@property (nonatomic, readonly) bool supportsPhoneNumbers;
@property (nonatomic) bool supportsPrivateEvents;
@property (nonatomic, readonly) bool supportsReminderActions;
@property (nonatomic) bool supportsSharedCalendars;
@property (nonatomic, readonly) bool supportsURLs;
@property (nonatomic, readonly) bool supportsYearlyRecurrenceWithArbitraryInterval;
@property (nonatomic, readonly) bool syncs;
@property (nonatomic, retain) NSDate *timeOfLastExternalIdentificationCache;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool usesSelfAttendee;
@property (nonatomic, readonly) bool wantsCommentPromptWhenDeclining;
@property (nonatomic) bool wasMigrated;

+ (long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1;
+ (int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1;
+ (Class)frozenClass;
+ (bool)isWeakRelationship;
+ (id)knownIdentityKeysForComparison;
+ (id)knownSingleValueKeysForComparison;
+ (id)sourceWithEventStore:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (void)_cacheExternalIdentification;
- (void)_cacheExternalIdentificationIfNeeded;
- (id)_calDAVOfficeHoursFromEKOfficeHours:(id)arg1;
- (void)_countCalendarItemsOfCalType:(int)arg1 resultHandler:(id /* block */)arg2;
- (id)_ekOfficeHoursFromCalDAVOfficeHours:(id)arg1;
- (bool)_reset;
- (void)_setConstraintsNameWithoutValidation:(id)arg1;
- (id)allCalendars;
- (bool)allowsCalendarAddDeleteModify;
- (bool)allowsEvents;
- (bool)allowsProposeNewTime;
- (bool)allowsTasks;
- (id)availabilityCache;
- (id)cachedHost;
- (id)cachedOwnerAddresses;
- (long long)cachedPort;
- (id)calendarWithExternalIdentifier:(id)arg1;
- (id)calendars;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (bool)commit:(id*)arg1;
- (id)constraints;
- (id)constraintsDescriptionPath;
- (id)constraintsDescriptionPathForUnitTesting;
- (id)constraintsName;
- (void)countCalendarItemsOfType:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (void)countCalendarItemsWithResultHandler:(id /* block */)arg1;
- (id)creatorBundleID;
- (id)creatorCodeSigningIdentity;
- (id)defaultAlarmOffset;
- (id)delegatedAccountOwnerStoreID;
- (id)description;
- (bool)disabled;
- (int)displayOrderForNewCalendar;
- (id)externalID;
- (id)externalModificationTag;
- (void)fetchOfficeHoursWithCompletion:(id /* block */)arg1 onQueue:(id)arg2;
- (bool)flag2:(int)arg1;
- (bool)flag:(int)arg1;
- (int)flags;
- (int)flags2;
- (bool)hasOwnerEmailAddress;
- (bool)isDelegate;
- (bool)isEnabled;
- (bool)isEnabledForEvents;
- (bool)isFacebook;
- (bool)isFacebookSource;
- (bool)isSyncing;
- (bool)isWritable;
- (id)lastSyncEndDate;
- (unsigned long long)lastSyncError;
- (id)lastSyncErrorData;
- (id)lastSyncErrorUserInfo;
- (id)lastSyncStartDate;
- (int)managedConfigurationAccountAccess;
- (bool)onlyCreatorCanModify;
- (id)ownerAddresses;
- (id)personaIdentifier;
- (bool)preferUsingEventOrganizerEmailWhenComposingMail;
- (long long)preferredEventPrivateValue;
- (int)preferredEventPrivateValueRaw;
- (id)preferredOwnerAddress;
- (bool)prefersSuggestingNewTimeViaEmail;
- (bool)prohibitsDetachmentOnCommentChange;
- (bool)prohibitsICSImport;
- (bool)prohibitsMultipleDaysInMonthlyRecurrence;
- (bool)prohibitsMultipleMonthsInYearlyRecurrence;
- (bool)prohibitsPrivateEventsWithAttendees;
- (bool)prohibitsYearlyRecurrenceInterval;
- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;
- (bool)refresh;
- (id)remAccountObjectID;
- (bool)remove:(id*)arg1;
- (bool)removeCalendarItemsOlderThanDate:(id)arg1 entityTypeMask:(unsigned long long)arg2 error:(id*)arg3;
- (bool)requiresSamePrivacyLevelAcrossRecurrenceSeries;
- (id)serverHost;
- (long long)serverPort;
- (bool)serverUsesSSL;
- (void)setAllowsCalendarAddDeleteModify:(bool)arg1;
- (void)setAllowsEvents:(bool)arg1;
- (void)setAllowsProposeNewTime:(bool)arg1;
- (void)setAllowsTasks:(bool)arg1;
- (void)setCachedHost:(id)arg1;
- (void)setCachedOwnerAddresses:(id)arg1;
- (void)setCachedPort:(long long)arg1;
- (void)setConstraintsDescriptionPath:(id)arg1;
- (void)setConstraintsDescriptionPathForUnitTesting:(id)arg1;
- (void)setConstraintsName:(id)arg1;
- (void)setCreatorBundleID:(id)arg1;
- (void)setCreatorCodeSigningIdentity:(id)arg1;
- (void)setDefaultAlarmOffset:(id)arg1;
- (void)setDelegatedAccountOwnerStoreID:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setFlag2:(int)arg1 value:(bool)arg2;
- (void)setFlag:(int)arg1 value:(bool)arg2;
- (void)setFlags2:(int)arg1;
- (void)setFlags:(int)arg1;
- (void)setIsFacebook:(bool)arg1;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1;
- (void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setLastSyncErrorData:(id)arg1;
- (void)setLastSyncErrorUserInfo:(id)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setOfficeHours:(id)arg1 withCompletion:(id /* block */)arg2 onQueue:(id)arg3;
- (void)setOnlyCreatorCanModify:(bool)arg1;
- (void)setPreferredEventPrivateValue:(long long)arg1;
- (void)setPreferredEventPrivateValueRaw:(int)arg1;
- (void)setProhibitsDetachmentOnCommentChange:(bool)arg1;
- (void)setProhibitsICSImport:(bool)arg1;
- (void)setProhibitsMultipleDaysInMonthlyRecurrence:(bool)arg1;
- (void)setProhibitsMultipleMonthsInYearlyRecurrence:(bool)arg1;
- (void)setProhibitsPrivateEventsWithAttendees:(bool)arg1;
- (void)setProhibitsYearlyRecurrenceInterval:(bool)arg1;
- (void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(bool)arg1;
- (void)setShowsNotifications:(bool)arg1;
- (void)setSnoozeAlarmRequiresDetach:(bool)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setStrictestEventPrivateValue:(long long)arg1;
- (void)setStrictestEventPrivateValueRaw:(int)arg1;
- (void)setSupportsAlarmAcknowledgedDate:(bool)arg1;
- (void)setSupportsAvailabilityRequests:(bool)arg1;
- (void)setSupportsIgnoringEventsInAvailabilityRequests:(bool)arg1;
- (void)setSupportsLocationDirectorySearches:(bool)arg1;
- (void)setSupportsPrivateEvents:(bool)arg1;
- (void)setSupportsSharedCalendars:(bool)arg1;
- (void)setTimeOfLastExternalIdentificationCache:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUsesSelfAttendee:(bool)arg1;
- (void)setWasMigrated:(bool)arg1;
- (bool)showsNotifications;
- (bool)snoozeAlarmRequiresDetach;
- (id)sourceError;
- (id)sourceIdentifier;
- (long long)sourceType;
- (long long)strictestEventPrivateValue;
- (int)strictestEventPrivateValueRaw;
- (bool)supportsAlarmAcknowledgedDate;
- (bool)supportsAttendeeEventForwarding;
- (bool)supportsAvailabilityRequests;
- (bool)supportsCalendarCreation;
- (bool)supportsEventCalendarCreation;
- (bool)supportsFloatingTimeZone;
- (bool)supportsFreebusy;
- (bool)supportsIgnoringEventsInAvailabilityRequests;
- (bool)supportsJunkReporting;
- (bool)supportsLocationDirectorySearches;
- (bool)supportsMultipleAlarms;
- (bool)supportsMultipleDaysInMonthlyRecurrence;
- (bool)supportsMultipleMonthsInYearlyRecurrence;
- (bool)supportsPhoneNumbers;
- (bool)supportsPrivateEvents;
- (bool)supportsReminderActions;
- (bool)supportsSharedCalendars;
- (bool)supportsURLs;
- (bool)supportsYearlyRecurrenceWithArbitraryInterval;
- (bool)syncs;
- (id)timeOfLastExternalIdentificationCache;
- (id)title;
- (bool)usesSelfAttendee;
- (bool)validate:(id*)arg1;
- (bool)wantsCommentPromptWhenDeclining;
- (bool)wasMigrated;

@end