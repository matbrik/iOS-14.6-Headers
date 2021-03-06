/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIPredictorHelper : NSObject

+ (id)events:(id)arg1 forHourBin:(unsigned long long)arg2 date:(id)arg3 withMaxDuration:(double)arg4;
+ (id)filterEvents:(id)arg1 startOnSameWeekdayAs:(id)arg2;
+ (id)filterEventsSortedByStartDateAscending:(id)arg1 startsBefore:(id)arg2 dynamicallyAroundDate:(id)arg3 withHourBinWidth:(unsigned long long)arg4;
+ (id)getDurationsFromEvents:(id)arg1 withUnit:(double)arg2 cappedAt:(double)arg3;
+ (double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2;
+ (id)getUsageBucketsForEvents:(id)arg1 forDate:(id)arg2 withLog:(id)arg3;
+ (double)hoursUntilUseFromBucketedUsage:(id)arg1 withCurrentHour:(int)arg2 withComponentsMinutes:(long long)arg3;
+ (double)meanOf:(id)arg1;
+ (double)medianOf:(id)arg1;
+ (double)standardDeviationOf:(id)arg1;
+ (id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)arg1 forHourBin:(unsigned long long)arg2 atDate:(id)arg3 addAtDate:(bool)arg4;

@end
