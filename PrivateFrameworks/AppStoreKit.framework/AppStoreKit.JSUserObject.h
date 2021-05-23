/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
 */

@interface AppStoreKit.JSUserObject : NSObject <_TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_> {
    void accounts;
    void fitnessAppInstallationAllowedConditonLock;
    void isFitnessAppInstallationAllowedBox;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) bool isFitnessAppInstallationAllowed;
@property (nonatomic, readonly) bool isManagedAppleID;
@property (nonatomic, readonly) bool isUnderThirteen;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)cookieForUrlWithName:(id)arg1 :(id)arg2;
- (id)cookiesForUrl:(id)arg1;
- (id)dsid;
- (id)firstName;
- (id)init;
- (bool)isFitnessAppInstallationAllowed;
- (bool)isManagedAppleID;
- (bool)isUnderThirteen;
- (id)lastName;
- (void)queryFitnessAppInstallationAllowed;
- (id)userAgeIfAvailable;

@end