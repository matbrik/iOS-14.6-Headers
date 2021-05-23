/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _CTDataConnectionServiceType;
    NSDictionary * _HTTPAdditionalHeaders;
    unsigned long long  _HTTPCookieAcceptPolicy;
    long long  _HTTPMaximumConnectionsPerHost;
    bool  _HTTPShouldSetCookies;
    bool  _HTTPShouldUsePipelining;
    long long  _IDSMessageTimeout;
    unsigned long long  _TCPAdaptiveReadTimeout;
    unsigned long long  _TCPAdaptiveWriteTimeout;
    int  _TLSMaximumSupportedProtocol;
    int  _TLSMinimumSupportedProtocol;
    bool  __allowsWCA;
    long long  __companionProxyPreference;
    bool  _allowTCPIOConnectionStreamTask;
    bool  _allowsCellularAccess;
    bool  _allowsConstrainedNetworkAccessAPI;
    bool  _allowsConstrainedNetworkAccessSPI;
    bool  _allowsExpensiveAccess;
    bool  _allowsExpensiveNetworkAccess;
    bool  _allowsHTTP3;
    bool  _allowsIndefiniteConnections;
    bool  _allowsMultipathTCP;
    bool  _allowsPowerNapScheduling;
    bool  _allowsReachabilityCheck;
    bool  _allowsResponseMonitoringDuringBodyTranmission;
    bool  _allowsRetryForBackgroundDataTasks;
    bool  _allowsTCPFastOpen;
    bool  _allowsTLSFallback;
    bool  _allowsTLSFalseStart;
    bool  _allowsTLSSessionResumption;
    bool  _allowsTLSSessionTickets;
    bool  _alwaysPerformDefaultTrustEvaluation;
    <NSURLSessionAppleIDContext> * _appleIDContext;
    NSData * _atsContext;
    NSSet * _authenticatorStatusCodes;
    bool  _backgroundSession;
    bool  _clientIsNotExplicitlyDiscretionary;
    NSString * _companionAppBundleIdentifier;
    double  _connectionCacheCellPurgeTimeout;
    double  _connectionCachePurgeTimeout;
    NSString * _connectionPoolName;
    NSDictionary * _connectionProxyDictionary;
    NSArray * _contentDispHeadEncFallback;
    unsigned long long  _customReadBufferSize;
    double  _customReadBufferTimeout;
    NSURL * _directoryForDownloadedFiles;
    bool  _disablesOutOfProcessDirectWiFiUsage;
    bool  _disablesUseOfProxySession;
    bool  _discretionary;
    NSString * _disposition;
    long long  _duetPreClearedMode;
    bool  _duetPreauthorized;
    long long  _expiredDNSBehavior;
    unsigned long long  _forcedNetworkServiceType;
    bool  _forcesNewConnections;
    NSString * _identifier;
    bool  _ignoreDidReceiveResponseDisposition;
    bool  _infersDiscretionaryFromOriginatingClient;
    int  _loggingPrivacyLevel;
    double  _longLivedConnectionCacheCellPurgeTimeout;
    double  _longLivedConnectionCachePurgeTimeout;
    NSNumber * _maximumWatchCellularTransferSize;
    long long  _minimumFastLanePriority;
    unsigned long long  _multipathAlternatePort;
    long long  _multipathServiceType;
    unsigned long long  _networkServiceType;
    long long  _numFastLanes;
    long long  _numPriorityLevels;
    bool  _onBehalfOfPairedDevice;
    NSDictionary * _overriddenDelegateOptions;
    bool  _overridesBackgroundSessionAutoRedirect;
    bool  _performsEVCertCheck;
    _NSHTTPAlternativeServicesStorage * _phskip_alternativeServicesStorage;
    bool  _phskip_alternativeServicesStorageSet;
    NSHTTPCookieStorage * _phskip_cookieStorage;
    bool  _phskip_cookieStorageSet;
    NSURLCredentialStorage * _phskip_credStorage;
    bool  _phskip_credStorageSet;
    _NSHSTSStorage * _phskip_hstsStorage;
    bool  _phskip_hstsStorageSet;
    NSURLCache * _phskip_urlCache;
    bool  _phskip_urlCacheSet;
    long long  _pipeliningHighWatermark;
    long long  _pipeliningLowWatermark;
    bool  _prefersInfraWiFi;
    bool  _preventsAppSSO;
    bool  _preventsDirectWiFiAccess;
    bool  _preventsIdleSleep;
    bool  _preventsIdleSleepOnceConnected;
    bool  _preventsSystemHTTPProxyAuthentication;
    NSArray * _protocolClasses;
    bool  _proxySession;
    bool  _reportsDataStalls;
    unsigned long long  _requestCachePolicy;
    bool  _requiresClientToOpenFiles;
    bool  _requiresPowerPluggedIn;
    bool  _requiresSecureHTTPSProxyConnection;
    bool  _requiresSustainedDataDelivery;
    bool  _respectsAllowsCellularAccessForDiscretionaryTasks;
    bool  _sessionSendsLaunchEvents;
    bool  _sessionSendsLaunchOnDemandEvents;
    NSString * _sharedContainerIdentifier;
    bool  _shouldPreserveBackgroundSessionDisposition;
    bool  _shouldSkipPreferredClientCertificateLookup;
    bool  _shouldUseExtendedBackgroundIdleMode;
    bool  _skip_download_unlink;
    NSDictionary * _socketStreamProperties;
    NSData * _sourceApplicationAuditTokenData;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    bool  _supportsAVAssetDownloads;
    NSSet * _suppressedAutoAddedHTTPHeaders;
    NSString * _tcpConnectionPoolName;
    double  _timeoutIntervalForRequest;
    double  _timeoutIntervalForResource;
    long long  _timingDataOptions;
    NSString * _tlsTrustPinningPolicyName;
    bool  _usePipeliningHeuristics;
    bool  _waitsForConnectivity;
    NSString * _watchAppBundleIdentifier;
    NSString * _watchExtensionBundleIdentifier;
}

@property (copy) NSDictionary *HTTPAdditionalHeaders;
@property unsigned long long HTTPCookieAcceptPolicy;
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property long long HTTPMaximumConnectionsPerHost;
@property bool HTTPShouldSetCookies;
@property bool HTTPShouldUsePipelining;
@property int TLSMaximumSupportedProtocol;
@property unsigned short TLSMaximumSupportedProtocolVersion;
@property int TLSMinimumSupportedProtocol;
@property unsigned short TLSMinimumSupportedProtocolVersion;
@property (retain) NSURLCache *URLCache;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property (copy) NSString *_CTDataConnectionServiceType;
@property long long _IDSMessageTimeout;
@property unsigned long long _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout;
@property bool _allowTCPIOConnectionStreamTask;
@property bool _allowsConstrainedNetworkAccess;
@property bool _allowsExpensiveAccess;
@property bool _allowsHTTP3;
@property bool _allowsIndefiniteConnections;
@property bool _allowsMultipathTCP;
@property bool _allowsPowerNapScheduling;
@property bool _allowsReachabilityCheck;
@property bool _allowsResponseMonitoringDuringBodyTranmission;
@property bool _allowsRetryForBackgroundDataTasks;
@property bool _allowsSensitiveLogging;
@property bool _allowsTCPFastOpen;
@property bool _allowsTLSFallback;
@property bool _allowsTLSFalseStart;
@property bool _allowsTLSSessionResumption;
@property bool _allowsTLSSessionTickets;
@property bool _allowsWCA;
@property (retain) _NSHTTPAlternativeServicesStorage *_alternativeServicesStorage;
@property bool _alwaysPerformDefaultTrustEvaluation;
@property (copy) <NSURLSessionAppleIDContext> *_appleIDContext;
@property (copy) NSData *_atsContext;
@property (copy) NSSet *_authenticatorStatusCodes;
@property bool _clientIsNotExplicitlyDiscretionary;
@property (copy) NSString *_companionAppBundleIdentifier;
@property long long _companionProxyPreference;
@property double _connectionCacheCellPurgeTimeout;
@property long long _connectionCacheMinimumFastLanePriority;
@property long long _connectionCacheNumFastLanes;
@property long long _connectionCacheNumPriorityLevels;
@property double _connectionCachePurgeTimeout;
@property (copy) NSString *_connectionPoolName;
@property (copy) NSArray *_contentDispHeadEncFallback;
@property unsigned long long _customReadBufferSize;
@property double _customReadBufferTimeout;
@property (copy) NSURL *_directoryForDownloadedFiles;
@property bool _disablesOutOfProcessDirectWiFiUsage;
@property bool _disablesUseOfProxySession;
@property long long _duetPreClearedMode;
@property bool _duetPreauthorized;
@property long long _expiredDNSBehavior;
@property unsigned long long _forcedNetworkServiceType;
@property bool _forcesNewConnections;
@property (retain) _NSHSTSStorage *_hstsStorage;
@property bool _ignoreDidReceiveResponseDisposition;
@property bool _infersDiscretionaryFromOriginatingClient;
@property int _loggingPrivacyLevel;
@property double _longLivedConnectionCacheCellPurgeTimeout;
@property double _longLivedConnectionCachePurgeTimeout;
@property (copy) NSNumber *_maximumWatchCellularTransferSize;
@property unsigned long long _multipathAlternatePort;
@property bool _onBehalfOfPairedDevice;
@property (copy) NSDictionary *_overriddenDelegateOptions;
@property bool _overridesBackgroundSessionAutoRedirect;
@property bool _performsEVCertCheck;
@property (retain) _NSHTTPAlternativeServicesStorage *_phskip_alternativeServicesStorage;
@property bool _phskip_alternativeServicesStorageSet;
@property (retain) NSHTTPCookieStorage *_phskip_cookieStorage;
@property bool _phskip_cookieStorageSet;
@property (retain) NSURLCredentialStorage *_phskip_credStorage;
@property bool _phskip_credStorageSet;
@property (retain) _NSHSTSStorage *_phskip_hstsStorage;
@property bool _phskip_hstsStorageSet;
@property (retain) NSURLCache *_phskip_urlCache;
@property bool _phskip_urlCacheSet;
@property bool _prefersInfraWiFi;
@property bool _preventsAppSSO;
@property bool _preventsDirectWiFiAccess;
@property bool _preventsIdleSleep;
@property bool _preventsIdleSleepOnceConnected;
@property bool _preventsSystemHTTPProxyAuthentication;
@property (getter=_isProxySession) bool _proxySession;
@property bool _reportsDataStalls;
@property bool _requiresClientToOpenFiles;
@property bool _requiresPowerPluggedIn;
@property bool _requiresSecureHTTPSProxyConnection;
@property bool _requiresSustainedDataDelivery;
@property bool _respectsAllowsCellularAccessForDiscretionaryTasks;
@property bool _sessionSendsLaunchOnDemandEvents;
@property bool _shouldPreserveBackgroundSessionDisposition;
@property bool _shouldSkipPreferredClientCertificateLookup;
@property (copy) NSDictionary *_socketStreamProperties;
@property (copy) NSData *_sourceApplicationAuditTokenData;
@property (copy) NSString *_sourceApplicationBundleIdentifier;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property bool _supportsAVAssetDownloads;
@property (copy) NSSet *_suppressedAutoAddedHTTPHeaders;
@property (copy) NSString *_tcpConnectionPoolName;
@property long long _timingDataOptions;
@property (copy) NSString *_tlsTrustPinningPolicyName;
@property bool _usePipeliningHeuristics;
@property (copy) NSString *_watchAppBundleIdentifier;
@property (copy) NSString *_watchExtensionBundleIdentifier;
@property bool allowsCellularAccess;
@property bool allowsConstrainedNetworkAccess;
@property bool allowsExpensiveNetworkAccess;
@property (getter=isBackgroundSession) bool backgroundSession;
@property (copy) NSDictionary *connectionProxyDictionary;
@property (getter=isDiscretionary) bool discretionary;
@property NSString *disposition;
@property (copy) NSString *identifier;
@property long long minimumFastLanePriority;
@property long long multipathServiceType;
@property unsigned long long networkServiceType;
@property long long numFastLanes;
@property long long numPriorityLevels;
@property long long pipeliningHighWatermark;
@property long long pipeliningLowWatermark;
@property (copy) NSArray *protocolClasses;
@property unsigned long long requestCachePolicy;
@property bool sessionSendsLaunchEvents;
@property (copy) NSString *sharedContainerIdentifier;
@property bool shouldUseExtendedBackgroundIdleMode;
@property bool skip_download_unlink;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;
@property (nonatomic) bool ts_timingDataEnabled;
@property bool waitsForConnectivity;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)_defaultProtocolClasses;
+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)defaultSessionConfiguration;
+ (id)ephemeralSessionConfiguration;
+ (void)initialize;
+ (id)new;
+ (id)sessionConfigurationForSharedSession;
+ (bool)supportsSecureCoding;

- (id)HTTPAdditionalHeaders;
- (unsigned long long)HTTPCookieAcceptPolicy;
- (id)HTTPCookieStorage;
- (long long)HTTPMaximumConnectionsPerHost;
- (bool)HTTPShouldSetCookies;
- (bool)HTTPShouldUsePipelining;
- (int)TLSMaximumSupportedProtocol;
- (unsigned short)TLSMaximumSupportedProtocolVersion;
- (int)TLSMinimumSupportedProtocol;
- (unsigned short)TLSMinimumSupportedProtocolVersion;
- (id)URLCache;
- (id)URLCredentialStorage;
- (id)_CTDataConnectionServiceType;
- (long long)_IDSMessageTimeout;
- (unsigned long long)_TCPAdaptiveReadTimeout;
- (unsigned long long)_TCPAdaptiveWriteTimeout;
- (bool)_allowTCPIOConnectionStreamTask;
- (bool)_allowsConstrainedNetworkAccess;
- (bool)_allowsExpensiveAccess;
- (bool)_allowsHTTP3;
- (bool)_allowsIndefiniteConnections;
- (bool)_allowsMultipathTCP;
- (bool)_allowsPowerNapScheduling;
- (bool)_allowsReachabilityCheck;
- (bool)_allowsResponseMonitoringDuringBodyTranmission;
- (bool)_allowsRetryForBackgroundDataTasks;
- (bool)_allowsSensitiveLogging;
- (bool)_allowsTCPFastOpen;
- (bool)_allowsTLSFallback;
- (bool)_allowsTLSFalseStart;
- (bool)_allowsTLSSessionResumption;
- (bool)_allowsTLSSessionTickets;
- (bool)_allowsWCA;
- (id)_alternativeServicesStorage;
- (bool)_alwaysPerformDefaultTrustEvaluation;
- (id)_appleIDContext;
- (id)_atsContext;
- (id)_authenticatorStatusCodes;
- (bool)_clientIsNotExplicitlyDiscretionary;
- (id)_companionAppBundleIdentifier;
- (long long)_companionProxyPreference;
- (double)_connectionCacheCellPurgeTimeout;
- (long long)_connectionCacheMinimumFastLanePriority;
- (long long)_connectionCacheNumFastLanes;
- (long long)_connectionCacheNumPriorityLevels;
- (double)_connectionCachePurgeTimeout;
- (id)_connectionPoolName;
- (id)_contentDispHeadEncFallback;
- (void*)_copyAttribute:(struct __CFString { }*)arg1;
- (unsigned long long)_customReadBufferSize;
- (double)_customReadBufferTimeout;
- (id)_directoryForDownloadedFiles;
- (bool)_disablesOutOfProcessDirectWiFiUsage;
- (bool)_disablesUseOfProxySession;
- (long long)_duetPreClearedMode;
- (bool)_duetPreauthorized;
- (long long)_expiredDNSBehavior;
- (unsigned long long)_forcedNetworkServiceType;
- (bool)_forcesNewConnections;
- (id)_hstsStorage;
- (bool)_ignoreDidReceiveResponseDisposition;
- (bool)_infersDiscretionaryFromOriginatingClient;
- (bool)_isProxySession;
- (int)_loggingPrivacyLevel;
- (double)_longLivedConnectionCacheCellPurgeTimeout;
- (double)_longLivedConnectionCachePurgeTimeout;
- (id)_maximumWatchCellularTransferSize;
- (unsigned long long)_multipathAlternatePort;
- (bool)_onBehalfOfPairedDevice;
- (id)_overriddenDelegateOptions;
- (bool)_overridesBackgroundSessionAutoRedirect;
- (bool)_performsEVCertCheck;
- (id)_phskip_alternativeServicesStorage;
- (bool)_phskip_alternativeServicesStorageSet;
- (id)_phskip_cookieStorage;
- (bool)_phskip_cookieStorageSet;
- (id)_phskip_credStorage;
- (bool)_phskip_credStorageSet;
- (id)_phskip_hstsStorage;
- (bool)_phskip_hstsStorageSet;
- (id)_phskip_urlCache;
- (bool)_phskip_urlCacheSet;
- (bool)_prefersInfraWiFi;
- (bool)_preventsAppSSO;
- (bool)_preventsDirectWiFiAccess;
- (bool)_preventsIdleSleep;
- (bool)_preventsIdleSleepOnceConnected;
- (bool)_preventsSystemHTTPProxyAuthentication;
- (bool)_reportsDataStalls;
- (bool)_requiresClientToOpenFiles;
- (bool)_requiresPowerPluggedIn;
- (bool)_requiresSecureHTTPSProxyConnection;
- (bool)_requiresSustainedDataDelivery;
- (bool)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (bool)_sessionSendsLaunchOnDemandEvents;
- (bool)_shouldPreserveBackgroundSessionDisposition;
- (bool)_shouldSkipPreferredClientCertificateLookup;
- (id)_socketStreamProperties;
- (id)_sourceApplicationAuditTokenData;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (bool)_supportsAVAssetDownloads;
- (id)_suppressedAutoAddedHTTPHeaders;
- (id)_tcpConnectionPoolName;
- (long long)_timingDataOptions;
- (id)_tlsTrustPinningPolicyName;
- (bool)_usePipeliningHeuristics;
- (id)_watchAppBundleIdentifier;
- (id)_watchExtensionBundleIdentifier;
- (bool)allowsCellularAccess;
- (bool)allowsConstrainedNetworkAccess;
- (bool)allowsExpensiveNetworkAccess;
- (id)connectionProxyDictionary;
- (struct _CFHSTSPolicy { }*)copyHSTSPolicy;
- (id)copyImmutableVariant:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)disposition;
- (void)encodeWithCoder:(id)arg1;
- (struct HTTPConnectionCacheLimits { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getConnectionCacheLimits;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBackgroundSession;
- (bool)isDiscretionary;
- (bool)isEqual:(id)arg1;
- (long long)minimumFastLanePriority;
- (long long)multipathServiceType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)networkServiceType;
- (long long)numFastLanes;
- (long long)numPriorityLevels;
- (long long)pipeliningHighWatermark;
- (long long)pipeliningLowWatermark;
- (id)protocolClasses;
- (unsigned long long)requestCachePolicy;
- (bool)sessionSendsLaunchEvents;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAllowsConstrainedNetworkAccess:(bool)arg1;
- (void)setAllowsExpensiveNetworkAccess:(bool)arg1;
- (void)setBackgroundSession:(bool)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDisposition:(id)arg1;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(long long)arg1;
- (void)setHTTPShouldSetCookies:(bool)arg1;
- (void)setHTTPShouldUsePipelining:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumFastLanePriority:(long long)arg1;
- (void)setMultipathServiceType:(long long)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setNumFastLanes:(long long)arg1;
- (void)setNumPriorityLevels:(long long)arg1;
- (void)setPipeliningHighWatermark:(long long)arg1;
- (void)setPipeliningLowWatermark:(long long)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setRequestCachePolicy:(unsigned long long)arg1;
- (void)setSessionSendsLaunchEvents:(bool)arg1;
- (void)setSharedContainerIdentifier:(id)arg1;
- (void)setShouldUseExtendedBackgroundIdleMode:(bool)arg1;
- (void)setSkip_download_unlink:(bool)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setURLCache:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (void)setWaitsForConnectivity:(bool)arg1;
- (void)set_CTDataConnectionServiceType:(id)arg1;
- (void)set_IDSMessageTimeout:(long long)arg1;
- (void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1;
- (void)set_allowTCPIOConnectionStreamTask:(bool)arg1;
- (void)set_allowsConstrainedNetworkAccess:(bool)arg1;
- (void)set_allowsExpensiveAccess:(bool)arg1;
- (void)set_allowsHTTP3:(bool)arg1;
- (void)set_allowsIndefiniteConnections:(bool)arg1;
- (void)set_allowsMultipathTCP:(bool)arg1;
- (void)set_allowsPowerNapScheduling:(bool)arg1;
- (void)set_allowsReachabilityCheck:(bool)arg1;
- (void)set_allowsResponseMonitoringDuringBodyTranmission:(bool)arg1;
- (void)set_allowsRetryForBackgroundDataTasks:(bool)arg1;
- (void)set_allowsSensitiveLogging:(bool)arg1;
- (void)set_allowsTCPFastOpen:(bool)arg1;
- (void)set_allowsTLSFallback:(bool)arg1;
- (void)set_allowsTLSFalseStart:(bool)arg1;
- (void)set_allowsTLSSessionResumption:(bool)arg1;
- (void)set_allowsTLSSessionTickets:(bool)arg1;
- (void)set_allowsWCA:(bool)arg1;
- (void)set_alternativeServicesStorage:(id)arg1;
- (void)set_alwaysPerformDefaultTrustEvaluation:(bool)arg1;
- (void)set_appleIDContext:(id)arg1;
- (void)set_atsContext:(id)arg1;
- (void)set_authenticatorStatusCodes:(id)arg1;
- (void)set_clientIsNotExplicitlyDiscretionary:(bool)arg1;
- (void)set_companionAppBundleIdentifier:(id)arg1;
- (void)set_companionProxyPreference:(long long)arg1;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_connectionCacheMinimumFastLanePriority:(long long)arg1;
- (void)set_connectionCacheNumFastLanes:(long long)arg1;
- (void)set_connectionCacheNumPriorityLevels:(long long)arg1;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (void)set_connectionPoolName:(id)arg1;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (void)set_customReadBufferSize:(unsigned long long)arg1;
- (void)set_customReadBufferTimeout:(double)arg1;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (void)set_disablesOutOfProcessDirectWiFiUsage:(bool)arg1;
- (void)set_disablesUseOfProxySession:(bool)arg1;
- (void)set_duetPreClearedMode:(long long)arg1;
- (void)set_duetPreauthorized:(bool)arg1;
- (void)set_expiredDNSBehavior:(long long)arg1;
- (void)set_forcedNetworkServiceType:(unsigned long long)arg1;
- (void)set_forcesNewConnections:(bool)arg1;
- (void)set_hstsStorage:(id)arg1;
- (void)set_ignoreDidReceiveResponseDisposition:(bool)arg1;
- (void)set_infersDiscretionaryFromOriginatingClient:(bool)arg1;
- (void)set_loggingPrivacyLevel:(int)arg1;
- (void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_longLivedConnectionCachePurgeTimeout:(double)arg1;
- (void)set_maximumWatchCellularTransferSize:(id)arg1;
- (void)set_multipathAlternatePort:(unsigned long long)arg1;
- (void)set_onBehalfOfPairedDevice:(bool)arg1;
- (void)set_overriddenDelegateOptions:(id)arg1;
- (void)set_overridesBackgroundSessionAutoRedirect:(bool)arg1;
- (void)set_performsEVCertCheck:(bool)arg1;
- (void)set_phskip_alternativeServicesStorage:(id)arg1;
- (void)set_phskip_alternativeServicesStorageSet:(bool)arg1;
- (void)set_phskip_cookieStorage:(id)arg1;
- (void)set_phskip_cookieStorageSet:(bool)arg1;
- (void)set_phskip_credStorage:(id)arg1;
- (void)set_phskip_credStorageSet:(bool)arg1;
- (void)set_phskip_hstsStorage:(id)arg1;
- (void)set_phskip_hstsStorageSet:(bool)arg1;
- (void)set_phskip_urlCache:(id)arg1;
- (void)set_phskip_urlCacheSet:(bool)arg1;
- (void)set_prefersInfraWiFi:(bool)arg1;
- (void)set_preventsAppSSO:(bool)arg1;
- (void)set_preventsDirectWiFiAccess:(bool)arg1;
- (void)set_preventsIdleSleep:(bool)arg1;
- (void)set_preventsIdleSleepOnceConnected:(bool)arg1;
- (void)set_preventsSystemHTTPProxyAuthentication:(bool)arg1;
- (void)set_proxySession:(bool)arg1;
- (void)set_reportsDataStalls:(bool)arg1;
- (void)set_requiresClientToOpenFiles:(bool)arg1;
- (void)set_requiresPowerPluggedIn:(bool)arg1;
- (void)set_requiresSecureHTTPSProxyConnection:(bool)arg1;
- (void)set_requiresSustainedDataDelivery:(bool)arg1;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(bool)arg1;
- (void)set_sessionSendsLaunchOnDemandEvents:(bool)arg1;
- (void)set_shouldPreserveBackgroundSessionDisposition:(bool)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(bool)arg1;
- (void)set_socketStreamProperties:(id)arg1;
- (void)set_sourceApplicationAuditTokenData:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_supportsAVAssetDownloads:(bool)arg1;
- (void)set_suppressedAutoAddedHTTPHeaders:(id)arg1;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (void)set_timingDataOptions:(long long)arg1;
- (void)set_tlsTrustPinningPolicyName:(id)arg1;
- (void)set_usePipeliningHeuristics:(bool)arg1;
- (void)set_watchAppBundleIdentifier:(id)arg1;
- (void)set_watchExtensionBundleIdentifier:(id)arg1;
- (id)sharedContainerIdentifier;
- (bool)shouldUseExtendedBackgroundIdleMode;
- (bool)skip_download_unlink;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (bool)waitsForConnectivity;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (void)aa_registerProtocolClass:(Class)arg1;
- (void)aa_unregisterProtocolClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_URLBagCache;
+ (id)ams_configurationWithClientInfo:(id)arg1 bag:(id)arg2;
+ (id)ams_configurationWithProcessInfo:(id)arg1 bag:(id)arg2;

- (id)ams_configureWithClientInfo:(id)arg1 bag:(id)arg2;
- (void)ams_configureWithProcessInfo:(id)arg1 bag:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)wf_defaultSessionConfiguration;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

- (void)setUpDataUsageWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)geo_configureWithRequest:(id)arg1;
- (bool)geo_hasApplicationAttribution:(id)arg1;
- (bool)geo_isCompatibleWithRequest:(id)arg1;
- (void)geo_setApplicationAttribution:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)im_headerByApplyingStealthStyle:(long long)arg1 toBaseHeaders:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TeaFoundation.framework/TeaFoundation

- (void)setTs_timingDataEnabled:(bool)arg1;
- (bool)ts_timingDataEnabled;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

+ (id)vs_defaultSessionConfigurationForSourceAppWithAuditToken:(id)arg1;

@end