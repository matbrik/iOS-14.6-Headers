/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_authContextFromCDPContext:(id)arg1;
- (void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getDevicesLosingAccountAccessWithCompletion:(id /* block */)arg1;
- (bool)isPrimaryAppleIDLoggedIn;
- (void)setDataPrivacyStatusEnabled:(bool)arg1 completion:(id /* block */)arg2;

@end