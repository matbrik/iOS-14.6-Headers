/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
 */

@interface ATXModeAutomationSuggestionClient : NSObject <ATXModeAutomationSuggestorProtocol> {
    <ATXModeAutomationSuggestionClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

@property (nonatomic) <ATXModeAutomationSuggestionClientDelegate> *delegate;

- (void).cxx_destruct;
- (void)_modeDidChange;
- (bool)_shouldSendAutomationSuggestionForMode:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end