/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSubcredentialInvitationMessage : NSObject {
    PKProtobufSubcredentialInvitationMessage * _protoMessage;
    MSMessage * _underlyingMessage;
}

@property (nonatomic, copy) NSString *dataString;
@property (nonatomic, copy) UIImage *passThumbnailImage;
@property (nonatomic, copy) PKAppletSubcredentialSharingInvitation *phoneInvitation;
@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly) MSMessage *underlyingMessage;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) PKAppletSubcredentialSharingInvitation *watchInvitation;

- (void).cxx_destruct;
- (id)_subcredentialInvitationMessageDataURLWithData:(id)arg1;
- (id)_subcredentialInvitationMessageDataWithDataURL:(id)arg1;
- (void)_updateDataURL;
- (void)_updateLayoutContents;
- (id)dataString;
- (id)description;
- (id)init;
- (id)initWithUnderlyingMessage:(id)arg1;
- (id)passThumbnailImage;
- (id)phoneInvitation;
- (void)setDataString:(id)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)setPhoneInvitation:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWatchInvitation:(id)arg1;
- (unsigned long long)status;
- (id)underlyingMessage;
- (id)uniqueIdentifier;
- (id)watchInvitation;

@end