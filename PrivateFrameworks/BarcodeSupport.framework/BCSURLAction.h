/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSURLAction : BCSAction {
    NSArray * _appLinks;
    NSURL * _appStoreSearchURLForUnsupportedScheme;
    LSApplicationRecord * _applicationRecord;
    CTCellularPlanManagerCameraScanAction * _cellularPlanAction;
    CoreTelephonyClient * _coreTelephonyClient;
    bool  _deviceDataIsUnavailable;
    bool  _hasPreferredAppLink;
}

@property (nonatomic, readonly) unsigned long long appLinkCount;
@property (nonatomic, readonly) bool hasPreferredAppLink;
@property (nonatomic, readonly) bool mustOpenAppLinkInApp;
@property (nonatomic, readonly) LSApplicationRecord *targetApplication;

- (void).cxx_destruct;
- (id)_actionDescriptionForAppClip;
- (id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(bool)arg3;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1;
- (id)_additionalActionPickerItems;
- (id)_appclipLaunchReason;
- (bool)_hasCellularPlanAction;
- (bool)_isCodeFromQRScanner;
- (bool)_isVisualCode;
- (void)_resolveAppClipForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_shouldBlockHandlingURL:(id)arg1;
- (bool)_shouldOpenInAppForAppLink:(id)arg1;
- (bool)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(id /* block */)arg1;
- (bool)_willOpenInSafari;
- (id)actionIcon;
- (id)actionPickerItems;
- (unsigned long long)appLinkCount;
- (id)appLinks;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)arg1;
- (bool)hasPreferredAppLink;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (bool)isAMSAction;
- (id)localizedDefaultActionDescription;
- (id)localizedDefaultActionTitle;
- (bool)mustOpenAppLinkInApp;
- (void)performAction;
- (void)performDefaultAction;
- (void)performDefaultActionWithFBOptions:(id)arg1;
- (id)shortDescription;
- (bool)shouldRequireUserToPickTargetApp;
- (id)targetApplication;
- (id)url;
- (id)urlThatCanBeOpened;

@end
