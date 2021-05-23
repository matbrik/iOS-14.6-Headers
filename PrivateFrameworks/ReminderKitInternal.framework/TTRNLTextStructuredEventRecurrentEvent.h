/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
 */

@interface TTRNLTextStructuredEventRecurrentEvent : NSObject {
    NSDate * _endDate;
    NSDictionary * _frequency;
    bool  _isAllDay;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSDate * _startDate;
}

@property (nonatomic, readonly) long long dayFrequency;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDictionary *frequency;
@property (nonatomic, readonly) long long hourFrequency;
@property (nonatomic) bool isAllDay;
@property (nonatomic, readonly) long long monthFrequency;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly) long long weekDay;
@property (nonatomic, readonly) long long weekOfMonthFrequency;
@property (nonatomic, readonly) long long weekOfYear;
@property (nonatomic, readonly) long long weekdayEnd;
@property (nonatomic, readonly) long long weekdayOrdinal;
@property (nonatomic, readonly) long long weekdayStart;
@property (nonatomic, readonly) long long yearFrequency;

- (void).cxx_destruct;
- (long long)dayFrequency;
- (id)description;
- (id)endDate;
- (id)frequency;
- (long long)frequencyForKey:(id)arg1;
- (long long)hourFrequency;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 startDate:(id)arg2 endDate:(id)arg3 isAllDay:(bool)arg4 frequency:(id)arg5;
- (bool)isAllDay;
- (long long)monthFrequency;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setEndDate:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (long long)weekDay;
- (long long)weekOfMonthFrequency;
- (long long)weekOfYear;
- (long long)weekdayEnd;
- (long long)weekdayOrdinal;
- (long long)weekdayStart;
- (long long)yearFrequency;

@end