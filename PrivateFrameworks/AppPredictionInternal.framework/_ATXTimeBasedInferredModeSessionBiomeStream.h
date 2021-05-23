/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXTimeBasedInferredModeSessionBiomeStream : NSObject <BMStream>

@property (nonatomic, readonly) NSString *identifier;

- (void)_addBedtimeSessionForDate:(id)arg1 toArray:(id)arg2;
- (void)_addHomeSessionForDate:(id)arg1 toArray:(id)arg2;
- (void)_addSessionForDate:(id)arg1 startHour:(long long)arg2 startMinute:(long long)arg3 durationMinutes:(long long)arg4 mode:(unsigned long long)arg5 toArray:(id)arg6;
- (void)_addWorkSessionForDate:(id)arg1 toArray:(id)arg2;
- (bool)_isDateAHoliday:(id)arg1;
- (id)_mergeSessionPublisher:(id)arg1 withOthers:(id)arg2;
- (id)identifier;
- (id)publisherFromStartTime:(double)arg1;

@end