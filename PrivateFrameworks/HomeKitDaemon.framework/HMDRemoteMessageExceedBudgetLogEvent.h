/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessageExceedBudgetLogEvent : HMDLogEvent <HMDDiagnosticReportLogging> {
    struct _HMFRate { 
        unsigned long long value; 
        double period; 
    }  _budgetRate;
}

@property (nonatomic, readonly) struct _HMFRate { unsigned long long x1; double x2; } budgetRate;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;

+ (id)eventWithBudgetRate:(struct _HMFRate { unsigned long long x1; double x2; })arg1;

- (struct _HMFRate { unsigned long long x1; double x2; })budgetRate;
- (id)initWithBudgetRate:(struct _HMFRate { unsigned long long x1; double x2; })arg1;
- (void)updateDiagnosticReportSignature:(id)arg1;

@end