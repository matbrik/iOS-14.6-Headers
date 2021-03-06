/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUNetworkMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientRegistrationDelegate> {
    CoreTelephonyClient * _ctClient;
    NSObject<OS_dispatch_queue> * _ctQueue;
    int  _currentCellularType;
    int  _currentNetworkType;
    NSHashTable * _observers;
    NWPathEvaluator * _pathEvaluator;
    struct __SCNetworkReachability { } * _reachability;
    bool  _roaming;
    NSArray * _subscriptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(bool)arg1;
+ (id)sharedInstance;

- (void)_carrierBundleChanged;
- (void)_initNetworkObservation;
- (bool)_isCurrentlyRoaming;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromCurrentCellularDataRespectingWifiAssist:(bool)arg1;
- (int)_networkTypeFromCurrentCellularDataWithError:(id*)arg1;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_operatorBundleChanged;
- (int)_queue_currentCellularType;
- (int)_queue_currentNetworkType;
- (void)_resetCtClient;
- (void)addObserver:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (int)currentCellularType;
- (int)currentNetworkType;
- (void)dealloc;
- (void)displayStatusChanged:(id)arg1 status:(id)arg2;
- (id)init;
- (bool)isCellularDataRoamingEnabled;
- (bool)isCellularRoaming;
- (bool)isCurrentNetworkTypeCellular;
- (bool)isCurrentNetworkTypeExpensive;
- (bool)isNetworkTypeCellular:(int)arg1;
- (void)operatorBundleChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCellularRoaming:(bool)arg1;
- (void)setCurrentCellularType:(int)arg1;
- (void)setCurrentNetworkType:(int)arg1;
- (void)setSubscriptions;
- (bool)usingWifi;

@end
