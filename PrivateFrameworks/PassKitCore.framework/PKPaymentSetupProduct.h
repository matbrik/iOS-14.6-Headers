/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupProduct : NSObject <NSCopying> {
    NSArray * _accounts;
    NSURL * _appLaunchURL;
    NSArray * _associatedStoreIdentifiers;
    PKPaymentSetupProductConfiguration * _configuration;
    NSString * _displayName;
    NSArray * _featureApplications;
    unsigned long long  _flags;
    long long  _hsa2Requirement;
    PKPaymentSetupProductImageAssetURLs * _imageAssetURLs;
    PKPaymentSetupProductImageAssets * _imageAssets;
    long long  _maximumSupportedAge;
    bool  _meetsAgeRequirements;
    NSDictionary * _minimumOSVersion;
    long long  _minimumSupportedAge;
    NSArray * _onboardingItems;
    NSArray * _paymentOptions;
    bool  _preventsFeatureApplication;
    NSExtension * _provisioningExtension;
    bool  _provisioningExtensionRequiresAuthorization;
    NSDictionary * _rawDictionary;
    NSDictionary * _readerModeMetadata;
    NSString * _regionIdentifier;
    NSSet * _regions;
    NSMutableDictionary * _requestedProvisioningMethods;
    NSArray * _requiredFields;
    NSArray * _searchTerms;
    NSArray * _supportedCameraCaptureTypes;
    NSArray * _supportedInAppTypes;
    NSArray * _supportedProtocols;
    long long  _supportedProvisioningMethods;
    NSArray * _supportedTransitNetworkIdentifiers;
    bool  _suppressPendingPurchases;
    NSURL * _termsURL;
}

@property (nonatomic, copy) NSArray *accounts;
@property (nonatomic, copy) NSURL *appLaunchURL;
@property (nonatomic, copy) NSArray *associatedStoreIdentifiers;
@property (nonatomic, readonly, copy) PKPaymentSetupProductConfiguration *configuration;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSArray *featureApplications;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long hsa2Requirement;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssets *imageAssets;
@property (nonatomic) long long maximumSupportedAge;
@property (nonatomic) bool meetsAgeRequirements;
@property (nonatomic, retain) NSDictionary *minimumOSVersion;
@property (nonatomic) long long minimumSupportedAge;
@property (nonatomic, retain) NSArray *onboardingItems;
@property (nonatomic, readonly, copy) NSString *partnerName;
@property (nonatomic, readonly, copy) NSArray *paymentOptions;
@property (nonatomic) bool preventsFeatureApplication;
@property (nonatomic, readonly) NSExtension *provisioningExtension;
@property (nonatomic, readonly) bool provisioningExtensionRequiresAuthorization;
@property (nonatomic, copy) NSDictionary *rawDictionary;
@property (nonatomic, readonly, copy) NSDictionary *readerModeMetadata;
@property (nonatomic, readonly, copy) NSString *regionIdentifier;
@property (nonatomic, copy) NSSet *regions;
@property (nonatomic, retain) NSMutableDictionary *requestedProvisioningMethods;
@property (nonatomic, copy) NSArray *requiredFields;
@property (nonatomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readonly, copy) NSArray *supportedCameraCaptureTypes;
@property (nonatomic, readonly, copy) NSArray *supportedInAppTypes;
@property (nonatomic, copy) NSArray *supportedProtocols;
@property (nonatomic) long long supportedProvisioningMethods;
@property (nonatomic, readonly, copy) NSArray *supportedTransitNetworkIdentifiers;
@property (nonatomic, readonly) bool suppressPendingPurchases;
@property (nonatomic, copy) NSURL *termsURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)_displayNameForCardType:(id)arg1;
+ (id)_inAppProvisioningURLWthScheme:(id)arg1 path:(id)arg2;
+ (void)_updateProduct:(id)arg1 withDebugConfigurationForState:(unsigned long long)arg2;
+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
+ (id)productForIssuerProvisioningExtension:(id)arg1 withStatus:(id)arg2;
+ (id)productsFromBrowseableBankApps:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12 suppressPendingPurchases:(id)arg13 supportedTransitNetworkIdentifiers:(id)arg14 onboardingItems:(id)arg15 actionBaseURL:(id)arg16 productState:(id)arg17 minimumProductAge:(id)arg18 maximumProductAge:(id)arg19 associatedStoreIdentifiers:(id)arg20 appLaunchURL:(id)arg21 regionIdentifier:(id)arg22 type:(id)arg23 localizedNotificationTitle:(id)arg24 localizedNotificationMessage:(id)arg25;
- (id)accounts;
- (long long)allSupportedProtocols;
- (id)appLaunchURL;
- (id)associatedStoreIdentifiers;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didAuthorizeProvisioningExtension;
- (id)displayName;
- (id)featureApplications;
- (unsigned long long)flags;
- (long long)hsa2Requirement;
- (id)imageAssetURLs;
- (id)imageAssets;
- (id)initWithFeatureIdentifier:(unsigned long long)arg1;
- (id)initWithProductDictionary:(id)arg1;
- (long long)maximumSupportedAge;
- (bool)meetsAgeRequirements;
- (id)minimumOSVersion;
- (long long)minimumSupportedAge;
- (id)onboardingItems;
- (id)partnerIdentifier;
- (id)partnerName;
- (id)paymentOptions;
- (bool)preventsFeatureApplication;
- (id)productIdentifier;
- (id)provisioningExtension;
- (bool)provisioningExtensionRequiresAuthorization;
- (id)provisioningMethodMetadataForType:(id)arg1;
- (id)provisioningMethodTypes;
- (id)rawDictionary;
- (id)readerModeMetadata;
- (id)regionIdentifier;
- (id)regions;
- (id)requestedProvisioningMethods;
- (id)requiredFields;
- (id)searchTerms;
- (void)setAccounts:(id)arg1;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAssociatedStoreIdentifiers:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFeatureApplications:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHsa2Requirement:(long long)arg1;
- (void)setMaximumSupportedAge:(long long)arg1;
- (void)setMeetsAgeRequirements:(bool)arg1;
- (void)setMinimumOSVersion:(id)arg1;
- (void)setMinimumSupportedAge:(long long)arg1;
- (void)setOnboardingItems:(id)arg1;
- (void)setPreventsFeatureApplication:(bool)arg1;
- (void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2;
- (void)setRawDictionary:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setRequestedProvisioningMethods:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (void)setSupportedProvisioningMethods:(long long)arg1;
- (void)setTermsURL:(id)arg1;
- (id)supportedCameraCaptureTypes;
- (id)supportedInAppTypes;
- (id)supportedProtocols;
- (long long)supportedProvisioningMethods;
- (id)supportedTransitNetworkIdentifiers;
- (bool)supportsDevice:(id)arg1;
- (bool)supportsOSVersion:(id)arg1 deviceClass:(id)arg2;
- (bool)suppressPendingPurchases;
- (id)termsURL;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)_commonCachedImageFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(id /* block */)arg1;
- (id)logoCachedImage:(id /* block */)arg1;
- (id)plasticCardCachedImage:(id /* block */)arg1;
- (void)resetCache;
- (id)thumbnailCachedImageForSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

@end