/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest {
    NSString * _accountIdentifier;
    NSString * _actionIdentifier;
    NSString * _applicationIdentifier;
    long long  _applicationType;
    PKApplyWebServiceRequestAuthenticationContext * _authenticationContext;
    NSURL * _baseURL;
    NSArray * _certificates;
    NSString * _coreIDVNextStepToken;
    PKPaymentDeviceMetadata * _deviceMetadata;
    unsigned long long  _featureIdentifier;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    PKFeatureApplicationInvitationDetails * _invitationDetails;
    NSString * _previousContextIdentifier;
    NSString * _referenceIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic) long long applicationType;
@property (nonatomic, retain) PKApplyWebServiceRequestAuthenticationContext *authenticationContext;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic, copy) NSString *coreIDVNextStepToken;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, retain) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic, retain) PKFeatureApplicationInvitationDetails *invitationDetails;
@property (nonatomic, copy) NSString *previousContextIdentifier;
@property (nonatomic, copy) NSString *referenceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)actionIdentifier;
- (id)applicationIdentifier;
- (long long)applicationType;
- (id)authenticationContext;
- (id)baseURL;
- (id)certificates;
- (id)coreIDVNextStepToken;
- (id)deviceMetadata;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)installmentConfiguration;
- (id)invitationDetails;
- (id)previousContextIdentifier;
- (id)referenceIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setActionIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationType:(long long)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setCoreIDVNextStepToken:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setInstallmentConfiguration:(id)arg1;
- (void)setInvitationDetails:(id)arg1;
- (void)setPreviousContextIdentifier:(id)arg1;
- (void)setReferenceIdentifier:(id)arg1;

@end