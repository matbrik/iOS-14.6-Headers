/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerManagerAppClient : _GCControllerManager <GCAdaptiveTriggersXPCProxyServiceClient, GCAdaptiveTriggersXPCProxyServiceRemoteClientInterface, GCBatteryXPCProxyServiceClient, GCBatteryXPCProxyServiceRemoteClientInterface, GCControllerServiceRemoteClientInterface, GCLightXPCProxyServiceClient, GCLightXPCProxyServiceRemoteClientInterface, GCMotionXPCProxyServiceClient, GCMotionXPCProxyServiceRemoteClientInterface, GCPlayerIndicatorXPCProxyServiceClient, GCPlayerIndicatorXPCProxyServiceRemoteClientInterface, GCSettingsXPCProxyServiceClient, GCSettingsXPCProxyServiceRemoteClientInterface, _GCAppClientInterface> {
    <GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> * _adaptiveTriggersXPCProxyService;
    <GCBatteryXPCProxyServiceRemoteServerInterface> * _batteryXPCProxyService;
    <GCControllerServiceRemoteServerInterface> * _controllerService;
    NSMutableSet * _customControllerIdentifiers;
    NSMutableSet * _knownHIDServices;
    <GCLightXPCProxyServiceRemoteServerInterface> * _lightXPCProxyService;
    <GCMotionXPCProxyServiceRemoteServerInterface> * _motionXPCProxyService;
    NSMutableSet * _pendingControllers;
    <GCPhotoVideoXPCProxyServiceRemoteServerInterface> * _photoVideoService;
    <GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> * _playerIndicatorXPCProxyService;
    NSMutableDictionary * _publishedControllers;
    <_GCIPCOutgoingConnection> * _serverConnection;
    id  _serverConnectionInterruption;
    id  _serverConnectionInvalidation;
    NSMutableSet * _serverValidControllerIdentifiers;
    <GCSettingsXPCProxyServiceRemoteServerInterface> * _settingsXPCProxyService;
    bool  _shouldResumeDaemonConnectionOnForeground;
}

@property (readonly) <_GCIPCEndpointConnection> *adaptiveTriggersXPCProxyServiceConnection;
@property (readonly) <GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> *adaptiveTriggersXPCProxyServiceRemoteServer;
@property (readonly) <_GCIPCEndpointConnection> *batteryXPCProxyServiceConnection;
@property (readonly) <GCBatteryXPCProxyServiceRemoteServerInterface> *batteryXPCProxyServiceRemoteServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <_GCIPCEndpointConnection> *lightXPCProxyServiceConnection;
@property (readonly) <GCLightXPCProxyServiceRemoteServerInterface> *lightXPCProxyServiceRemoteServer;
@property (readonly) <_GCIPCEndpointConnection> *motionXPCProxyServiceConnection;
@property (readonly) <GCMotionXPCProxyServiceRemoteServerInterface> *motionXPCProxyServiceRemoteServer;
@property (readonly) <_GCIPCEndpointConnection> *playerIndicatorXPCProxyServiceConnection;
@property (readonly) <GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> *playerIndicatorXPCProxyServiceRemoteServer;
@property (readonly) <_GCIPCEndpointConnection> *settingsXPCProxyServiceConnection;
@property (readonly) <GCSettingsXPCProxyServiceRemoteServerInterface> *settingsXPCProxyServiceRemoteServer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CBApplicationDidBecomeActive;
- (void)_connectToDaemon;
- (bool)_containsPublishedController:(id)arg1;
- (id)_mostRecentlyActiveControllerIgnoring:(id)arg1;
- (id)_mostRecentlyActiveExtendedGamepadIgnoring:(id)arg1;
- (id)_mostRecentlyActiveMicroGamepadIgnoring:(id)arg1;
- (void)_onqueue_addPendingController:(id)arg1;
- (void)_onqueue_publishController:(id)arg1;
- (void)_onqueue_publishCustomController:(id)arg1;
- (void)_onqueue_refreshPublishedControllers;
- (void)_onqueue_unpublishController:(id)arg1;
- (void)_onqueue_unpublishCustomController:(id)arg1;
- (void)_resumeDaemonConnection;
- (void)_setCurrentController:(id)arg1;
- (void)_setCurrentExtendedGamepad:(id)arg1;
- (void)_setCurrentMicroGamepad:(id)arg1;
- (id)adaptiveTriggersXPCProxyServiceConnection;
- (id)adaptiveTriggersXPCProxyServiceRemoteServer;
- (id)batteryXPCProxyServiceConnection;
- (id)batteryXPCProxyServiceRemoteServer;
- (id)controllers;
- (id)currentController;
- (id)currentExtendedGamepad;
- (id)currentMicroGamepad;
- (void)finalizeRecording;
- (void)handleKeyboardEventAsFrontmostApp:(id)arg1;
- (void)handleMouseEventAsFrontmostApp:(id)arg1;
- (id)init;
- (bool)isScreenShotAllowedForController:(id)arg1;
- (bool)isVideoRecordingAllowedForController:(id)arg1;
- (id)lightXPCProxyServiceConnection;
- (id)lightXPCProxyServiceRemoteServer;
- (id)mice;
- (id)motionXPCProxyServiceConnection;
- (id)motionXPCProxyServiceRemoteServer;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient { }*)arg1;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient { }*)arg1;
- (void)onScreenshotTriggeredWithController:(id)arg1;
- (void)onVideoRecordingToggledWithController:(id)arg1;
- (void)open;
- (id)playerIndicatorXPCProxyServiceConnection;
- (id)playerIndicatorXPCProxyServiceRemoteServer;
- (void)publishControllers:(id)arg1;
- (void)refreshControllers;
- (id)serviceClientForIPCService:(id)arg1;
- (void)setCurrentController:(id)arg1;
- (void)setCurrentExtendedGamepad:(id)arg1;
- (void)setCurrentMicroGamepad:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2 forHIDServiceClientWithRegistryID:(id)arg3;
- (id)settingsXPCProxyServiceConnection;
- (id)settingsXPCProxyServiceRemoteServer;
- (void)unpublishControllersWithIdentifiers:(id)arg1;
- (void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg1;
- (void)updateEmulatedControllerEnabled;

@end