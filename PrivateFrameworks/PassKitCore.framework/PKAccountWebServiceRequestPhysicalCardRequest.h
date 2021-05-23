/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountWebServiceRequestPhysicalCardRequest : PKAccountWebServiceRequest <NSSecureCoding, PKAccountWebServiceApplePayTrustProtocol> {
    NSString * _accountIdentifier;
    NSString * _accountUserAltDSID;
    PKPaymentDeviceMetadata * _deviceMetadata;
    PKPhysicalCardOrder * _order;
    NSData * _publicKeyHash;
    NSURL * baseURL;
    PKApplePayTrustHashResponse * hashResponse;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *accountUserAltDSID;
@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKApplePayTrustHashResponse *hashResponse;
@property (nonatomic, retain) PKPhysicalCardOrder *order;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)accountUserAltDSID;
- (id)baseURL;
- (id)deviceMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointComponents;
- (id)hashResponse;
- (id)initWithCoder:(id)arg1;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (id)order;
- (id)publicKeyHash;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountUserAltDSID:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setHashResponse:(id)arg1;
- (void)setOrder:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (Class)signatureResponseClass;

@end