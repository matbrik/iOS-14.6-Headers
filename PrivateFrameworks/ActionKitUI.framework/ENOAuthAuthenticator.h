/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface ENOAuthAuthenticator : NSObject <ENAuthenticator, ENLoadingViewControllerDelegate, ENOAuthViewControllerDelegate> {
    UINavigationController * _authenticationViewController;
    NSString * _consumerKey;
    NSString * _consumerSecret;
    ENCredentialStore * _credentialStore;
    NSString * _currentProfile;
    <ENAuthenticatorDelegate> * _delegate;
    NSString * _host;
    UIViewController * _hostViewController;
    bool  _inProgress;
    bool  _isActiveBecauseOfCallback;
    bool  _isCancelled;
    bool  _isMultitaskLoginDisabled;
    bool  _isSwitchingInProgress;
    ENOAuthViewController * _oauthViewController;
    bool  _preferRegistration;
    NSArray * _profiles;
    NSMutableData * _receivedData;
    NSURLResponse * _response;
    long long  _state;
    bool  _supportsLinkedAppNotebook;
    NSString * _tokenSecret;
    bool  _useWebAuthenticationOnly;
    bool  _userSelectedLinkedAppNotebook;
}

@property (nonatomic, retain) UINavigationController *authenticationViewController;
@property (nonatomic, copy) NSString *consumerKey;
@property (nonatomic, copy) NSString *consumerSecret;
@property (nonatomic, retain) ENCredentialStore *credentialStore;
@property (nonatomic, copy) NSString *currentProfile;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ENAuthenticatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, retain) UIViewController *hostViewController;
@property (nonatomic) bool inProgress;
@property (nonatomic) bool isActiveBecauseOfCallback;
@property (nonatomic) bool isCancelled;
@property (nonatomic) bool isMultitaskLoginDisabled;
@property (nonatomic) bool isSwitchingInProgress;
@property (nonatomic, retain) ENOAuthViewController *oauthViewController;
@property (nonatomic) bool preferRegistration;
@property (nonatomic, retain) NSArray *profiles;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsLinkedAppNotebook;
@property (nonatomic, copy) NSString *tokenSecret;
@property (nonatomic) bool useWebAuthenticationOnly;
@property (nonatomic) bool userSelectedLinkedAppNotebook;

+ (id)deviceDescription;
+ (id)parametersFromQueryString:(id)arg1;
+ (id)queryStringFromParameters:(id)arg1;
+ (id)scrubString:(id)arg1 usingRegex:(id)arg2 withMaxLength:(unsigned short)arg3;

- (void).cxx_destruct;
- (void)authenticateWithViewController:(id)arg1;
- (id)authenticationViewController;
- (id)callbackScheme;
- (bool)canHandleSwitchProfileURL:(id)arg1;
- (void)completeAuthenticationWithCredentials:(id)arg1 usesLinkedAppNotebook:(bool)arg2;
- (void)completeAuthenticationWithError:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)consumerKey;
- (id)consumerSecret;
- (id)credentialStore;
- (id)currentProfile;
- (void)dealloc;
- (id)delegate;
- (void)disableIsActiveBecauseOfCallback;
- (void)emptyCookieJar;
- (void)enableIsActiveBecauseOfCallback;
- (void)getOAuthTokenForURL:(id)arg1;
- (void)gotCallbackURL:(id)arg1;
- (void)handleDidBecomeActive;
- (bool)handleOpenURL:(id)arg1;
- (id)host;
- (id)hostViewController;
- (bool)inProgress;
- (id)init;
- (bool)isActiveBecauseOfCallback;
- (bool)isCancelled;
- (bool)isMultitaskLoginDisabled;
- (bool)isSwitchingInProgress;
- (void)loadingViewControllerDidCancel:(id)arg1;
- (id)oauthCallback;
- (id)oauthViewController;
- (void)oauthViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)oauthViewController:(id)arg1 receivedOAuthCallbackURL:(id)arg2;
- (void)oauthViewControllerDidCancel:(id)arg1;
- (void)oauthViewControllerDidSwitchProfile:(id)arg1;
- (void)openOAuthViewControllerWithURL:(id)arg1;
- (bool)preferRegistration;
- (id)profiles;
- (id)receivedData;
- (id)response;
- (void)setAuthenticationViewController:(id)arg1;
- (void)setConsumerKey:(id)arg1;
- (void)setConsumerSecret:(id)arg1;
- (void)setCredentialStore:(id)arg1;
- (void)setCurrentProfile:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setIsActiveBecauseOfCallback:(bool)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setIsMultitaskLoginDisabled:(bool)arg1;
- (void)setIsSwitchingInProgress:(bool)arg1;
- (void)setOauthViewController:(id)arg1;
- (void)setPreferRegistration:(bool)arg1;
- (void)setProfiles:(id)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsLinkedAppNotebook:(bool)arg1;
- (void)setTokenSecret:(id)arg1;
- (void)setUseWebAuthenticationOnly:(bool)arg1;
- (void)setUserSelectedLinkedAppNotebook:(bool)arg1;
- (void)startOauthAuthentication;
- (long long)state;
- (bool)supportsLinkedAppNotebook;
- (void)switchProfile;
- (id)tokenSecret;
- (void)updateCurrentBootstrapProfileWithName:(id)arg1;
- (bool)useWebAuthenticationOnly;
- (id)userAuthorizationURLStringWithParameters:(id)arg1;
- (bool)userSelectedLinkedAppNotebook;
- (void)verifyCFBundleURLSchemes;

@end
