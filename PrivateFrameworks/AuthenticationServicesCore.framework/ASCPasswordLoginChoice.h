/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCPasswordLoginChoice : NSObject <ASCLoginChoiceProtocol> {
    NSString * _site;
    NSString * _username;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *site;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 site:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)site;
- (id)username;

@end