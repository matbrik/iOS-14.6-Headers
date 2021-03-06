/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSLinkItemModel : NSObject <BCSItemIdentifying, BCSLinkItemDescribing, BSDescriptionProviding, NSCopying, NSSecureCoding> {
    long long  _action;
    NSString * _bundleID;
    NSArray * _businessLinkContentItemModels;
    NSDictionary * _debugInfo;
    NSString * _heroImageURLString;
    NSString * _iconImageURLString;
    bool  _isPoweredBy;
    BCSLinkItemIdentifier * _itemIdentifier;
    NSURL * _linkURL;
    NSDictionary * _mapIconStyleAttributes;
    NSNumber * _mapItemMUID;
    NSURL * _redirectURL;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, retain) NSArray *businessLinkContentItemModels;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fullHash;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *heroImageURLString;
@property (nonatomic, readonly, retain) NSString *iconImageURLString;
@property (nonatomic, readonly) bool isPoweredBy;
@property (nonatomic, readonly) NSObject *itemIdentifier;
@property (getter=_linkItemIdentifier, nonatomic, readonly) BCSLinkItemIdentifier *linkItemIdentifier;
@property (nonatomic, readonly, retain) NSURL *linkURL;
@property (nonatomic, readonly, retain) NSDictionary *mapIconStyleAttributes;
@property (nonatomic, readonly, retain) NSNumber *mapItemMUID;
@property (nonatomic, readonly, retain) NSURL *redirectURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long truncatedHash;
@property (nonatomic, readonly) long long type;

+ (id)linkItemModelsFromLinkJSONObj:(id)arg1;
+ (id)linkItemModelsFromRecords:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_linkActionForValue:(long long)arg1;
- (id)_linkItemIdentifier;
- (long long)action;
- (id)bundleID;
- (id)businessLinkContentItemModels;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugInfo;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fullHash;
- (id)heroImageURLString;
- (id)iconImageURLString;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkMessage:(id)arg1 bucketID:(id)arg2;
- (id)initWithLinkURL:(id)arg1 bundleID:(id)arg2 heroImageURLString:(id)arg3 iconImageURLString:(id)arg4 redirectURL:(id)arg5 action:(long long)arg6 mapIconStyleAttributes:(id)arg7 mapItemMUID:(id)arg8 businessLinkContentItemModels:(id)arg9 isPoweredBy:(bool)arg10;
- (bool)isPoweredBy;
- (id)itemIdentifier;
- (id)linkURL;
- (id)mapIconStyleAttributes;
- (id)mapItemMUID;
- (bool)matchesItemIdentifying:(id)arg1;
- (id)redirectURL;
- (void)setBusinessLinkContentItemModels:(id)arg1;
- (void)setDebugInfo:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)truncatedHash;
- (long long)type;

@end
