/* Generated by RuntimeBrowser.
 */

@protocol COAlarmAddOnListenerProvider <NSObject>

@required

- (NSXPCListener *)alarmAddOnListener;

@optional

- (bool)shouldAcceptNewConnection:(NSXPCConnection *)arg1;

@end