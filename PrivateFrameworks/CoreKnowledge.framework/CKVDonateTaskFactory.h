/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider> {
    NSObject<CKVDonatorProvider> * _donatorProvider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appInfoDonateTask;
- (id)contactsDonateTask;
- (id)init;
- (id)initWithQueue:(id)arg1 serviceProvider:(id)arg2;
- (id)intentVocabularyDonateTask;

@end