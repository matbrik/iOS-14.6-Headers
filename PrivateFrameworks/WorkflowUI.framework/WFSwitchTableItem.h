/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFSwitchTableItem : WFCustomTableItem {
    NSString * _primaryText;
    NSString * _secondaryText;
}

@property (nonatomic, readonly) NSString *primaryText;
@property (nonatomic, readonly) NSString *secondaryText;

+ (id)itemWithPrimaryText:(id)arg1 initialValue:(id)arg2;
+ (id)itemWithPrimaryText:(id)arg1 secondaryText:(id)arg2 initialValue:(id)arg3;

- (void).cxx_destruct;
- (void)configureCell:(id)arg1;
- (id)primaryText;
- (id)secondaryText;

@end