/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAgentFilterExtension : NSObject <NEAgentSessionDelegate, NEFilterExtensionProviderHostDelegate, NEFilterPluginDriver> {
    bool  _appsUpdateEnding;
    bool  _appsUpdateStarted;
    NSXPCListenerEndpoint * _clientListenerEndpoint;
    NEFilterProviderConfiguration * _configuration;
    NSExtension * _controlExtension;
    NSString * _controlExtensionIdentifier;
    bool  _controlExtensionInitialized;
    NEFilterControlExtensionProviderHostContext * _controlSessionContext;
    NSUUID * _controlSessionRequestIdentifier;
    int  _crypto_kernel_salt;
    struct cfil_crypto_state { struct ccdigest_info {} *x1; unsigned char x2[32]; } * _crypto_state;
    NSExtension * _dataExtension;
    NSString * _dataExtensionIdentifier;
    bool  _dataExtensionInitialized;
    NEFilterExtensionProviderHostContext * _dataSessionContext;
    NSUUID * _dataSessionRequestIdentifier;
    NSArray * _extensionUUIDs;
    <NEPluginManagerObjectFactory> * _managerObjectFactory;
    id /* block */  _pendingDisposeCompletion;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _sendFailedTimer;
}

@property bool appsUpdateEnding;
@property bool appsUpdateStarted;
@property (retain) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (retain) NEFilterProviderConfiguration *configuration;
@property (retain) NSExtension *controlExtension;
@property (retain) NSString *controlExtensionIdentifier;
@property bool controlExtensionInitialized;
@property (retain) NEFilterControlExtensionProviderHostContext *controlSessionContext;
@property (retain) NSUUID *controlSessionRequestIdentifier;
@property int crypto_kernel_salt;
@property struct cfil_crypto_state { struct ccdigest_info {} *x1; unsigned char x2[32]; }*crypto_state;
@property (retain) NSExtension *dataExtension;
@property (retain) NSString *dataExtensionIdentifier;
@property bool dataExtensionInitialized;
@property (retain) NEFilterExtensionProviderHostContext *dataSessionContext;
@property (retain) NSUUID *dataSessionRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCInterface *driverInterface;
@property (nonatomic, readonly) NSArray *extensionUUIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCInterface *managerInterface;
@property (readonly) <NEPluginManagerObjectFactory> *managerObjectFactory;
@property (copy) id /* block */ pendingDisposeCompletion;
@property (nonatomic, readonly) NSString *pluginType;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *sendFailedTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *uuids;

+ (bool)authenticateFlowWithState:(struct cfil_crypto_state { struct ccdigest_info {} *x1; unsigned char x2[32]; }*)arg1 crypto_key:(id)arg2 flow:(id)arg3 salt:(unsigned int)arg4 isKernelSocket:(bool)arg5;

- (void).cxx_destruct;
- (void)applySettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)appsUpdateEnding;
- (bool)appsUpdateStarted;
- (bool)authenticateFlow:(id)arg1;
- (void)cleanupControlExtensionWithRequestIdentifier:(id)arg1;
- (void)cleanupDataExtensionWithRequestIdentifier:(id)arg1;
- (void)cleanupOnStartFailure;
- (id)clientListenerEndpoint;
- (id)configuration;
- (id)controlExtension;
- (id)controlExtensionIdentifier;
- (bool)controlExtensionInitialized;
- (id)controlSessionContext;
- (id)controlSessionRequestIdentifier;
- (id)copyProcessIdentities;
- (void)createPacketChannelForExtension:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)crypto_kernel_salt;
- (struct cfil_crypto_state { struct ccdigest_info {} *x1; unsigned char x2[32]; }*)crypto_state;
- (id)dataExtension;
- (id)dataExtensionIdentifier;
- (bool)dataExtensionInitialized;
- (id)dataSessionContext;
- (id)dataSessionRequestIdentifier;
- (void)dealloc;
- (id)driverInterface;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extensionDidStop:(id)arg1;
- (id)extensionUUIDs;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)generateClientKey:(int)arg1 salt:(unsigned int)arg2;
- (void)getFilterClientConnectionWithCompletionHandler:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleCancel;
- (void)handleControlExtensionInitWithCompletionHandler:(id /* block */)arg1;
- (void)handleDataExtensionInitWithCompletionHandler:(id /* block */)arg1;
- (void)handleDisposeWithCompletionHandler:(id /* block */)arg1;
- (void)handleExtensionExit:(id)arg1;
- (void)handleInitWithCompletionHandler:(id /* block */)arg1;
- (void)handleStopCompleteWithError:(id)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginProcessIdentity:(id)arg4 queue:(id)arg5 factory:(id)arg6;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
- (id)managerInterface;
- (id)managerObjectFactory;
- (void)notifyRulesChanged;
- (id /* block */)pendingDisposeCompletion;
- (id)pluginType;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (id)queue;
- (void)report:(id)arg1;
- (void)resetFilterSettings;
- (long long)sanitizeFilterAction:(long long)arg1;
- (id)sanitizeFilterFlow:(id)arg1;
- (long long)sanitizeFilterReportEvent:(long long)arg1;
- (id)sanitizeReport:(id)arg1;
- (void)savedConfigurationChanged:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (bool)sendCryptoKeyWithControlSocket:(int)arg1 crypto_key:(id)arg2;
- (void)sendExtensionFailed;
- (id)sendFailedTimer;
- (void)sendFilterStatus:(long long)arg1 withError:(long long)arg2;
- (void)sendSocketContentFilterRequest;
- (void)setAppsUpdateEnding:(bool)arg1;
- (void)setAppsUpdateStarted:(bool)arg1;
- (void)setClientListenerEndpoint:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setControlExtension:(id)arg1;
- (void)setControlExtensionIdentifier:(id)arg1;
- (void)setControlExtensionInitialized:(bool)arg1;
- (void)setControlSessionContext:(id)arg1;
- (void)setControlSessionRequestIdentifier:(id)arg1;
- (void)setCrypto_kernel_salt:(int)arg1;
- (void)setCrypto_state:(struct cfil_crypto_state { struct ccdigest_info {} *x1; unsigned char x2[32]; }*)arg1;
- (void)setDataExtension:(id)arg1;
- (void)setDataExtensionIdentifier:(id)arg1;
- (void)setDataExtensionInitialized:(bool)arg1;
- (void)setDataSessionContext:(id)arg1;
- (void)setDataSessionRequestIdentifier:(id)arg1;
- (void)setPendingDisposeCompletion:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSendFailedTimer:(id)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startControlExtensionWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startDataExtensionWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startFilter;
- (void)startFilterExtension;
- (void)startWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopFilterExtensionWithReason:(int)arg1;
- (void)updateConfiguration:(id)arg1;
- (id)uuids;
- (void)wakeup;

@end