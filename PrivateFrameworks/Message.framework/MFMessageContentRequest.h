/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageContentRequest : NSObject {
    NSString * _clientIdentifier;
    <EMContentItemRequestDelegate> * _delegate;
    MFMailMessage * _legacyMessage;
    EDListUnsubscribeHandler * _listUnsubscribeHandler;
    EDMailDropMetadataGenerator * _mailDropAttachmentGenerator;
    EDMessagePersistence * _messagePersistence;
    MFMessageTransformer * _messageTransformer;
    EMMessageObjectID * _objectID;
    EMContentRequestOptions * _options;
    <EFScheduler> * _scheduler;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) <EMContentItemRequestDelegate> *delegate;
@property (nonatomic, readonly) MFMailMessage *legacyMessage;
@property (nonatomic, readonly) EDListUnsubscribeHandler *listUnsubscribeHandler;
@property (nonatomic, readonly) EDMailDropMetadataGenerator *mailDropAttachmentGenerator;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) MFMessageTransformer *messageTransformer;
@property (nonatomic, readonly) EMMessageObjectID *objectID;
@property (nonatomic, readonly) EMContentRequestOptions *options;
@property (nonatomic, readonly) <EFScheduler> *scheduler;

+ (id)metadataWithDictionary:(id)arg1;
+ (id)onScheduler:(id)arg1 requestContentForObjectID:(id)arg2 messagePersistence:(id)arg3 legacyMessage:(id)arg4 messageTransformer:(id)arg5 mailDropAttachmentGenerator:(id)arg6 listUnsubscribeHandler:(id)arg7 clientIdentifier:(id)arg8 options:(id)arg9 delegate:(id)arg10 completionHandler:(id /* block */)arg11;
+ (id)onScheduler:(id)arg1 requestID:(unsigned long long)arg2 requestContentForObjectID:(id)arg3 messagePersistence:(id)arg4 legacyMessage:(id)arg5 messageTransformer:(id)arg6 mailDropAttachmentGenerator:(id)arg7 listUnsubscribeHandler:(id)arg8 clientIdentifier:(id)arg9 options:(id)arg10 delegate:(id)arg11 completionHandler:(id /* block */)arg12;

- (void).cxx_destruct;
- (id)_attachmentContentItemsForMailDropNodes:(id)arg1 withContext:(id)arg2;
- (id)_attachmentForMailDropMetaData:(id)arg1 context:(id)arg2;
- (id)_contentItemForAttachment:(id)arg1 manager:(id)arg2 managed:(bool)arg3;
- (id)_contentRepresentationForEvent:(id)arg1 contentURL:(id)arg2 relatedItems:(id)arg3 existingRepresentation:(id)arg4 invocable:(id)arg5;
- (id)_contentRepresentationForLoadingEvent:(id)arg1 existingRepresentation:(id)arg2;
- (id)_dataHolderWithCancelationToken:(id)arg1;
- (id)_generateRepresentationForLoadingContext:(id)arg1 existingRepresentation:(id)arg2 completion:(id /* block */)arg3;
- (void)_includeHeadersIfNeededForRepresentation:(id)arg1 message:(id)arg2 options:(id)arg3;
- (void)_includeSuggestionItemsIfNeededForRepresentation:(id)arg1 message:(id)arg2;
- (id)_init;
- (id)_maildropMetadataFromContext:(id)arg1;
- (id)_messageForLegacyMessage:(id)arg1;
- (id)_processContentLoadingContextEvent:(id)arg1;
- (id)_requestContentForAttachment:(id)arg1 manager:(id)arg2 options:(id)arg3 managed:(bool)arg4 completion:(id /* block */)arg5;
- (id)beginRequestWithCompletionHandler:(id /* block */)arg1;
- (id)clientIdentifier;
- (id)delegate;
- (id)delegateWithErrorHandler:(id /* block */)arg1;
- (id)legacyMessage;
- (id)listUnsubscribeHandler;
- (id)mailDropAttachmentGenerator;
- (id)messagePersistence;
- (id)messageTransformer;
- (id)objectID;
- (id)options;
- (id)requestHTMLRepresentationWithCompletionHandler:(id /* block */)arg1;
- (id)requestRawRepresentationWithCompletionHandler:(id /* block */)arg1;
- (id)scheduler;

@end