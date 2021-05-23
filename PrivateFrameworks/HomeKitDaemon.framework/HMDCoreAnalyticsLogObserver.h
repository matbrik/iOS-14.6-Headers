/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMDLogEventObserver, HMFLogging> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSDictionary * _homeConfigurationCommonDimensions;
    HMDMetricsManager * _metricsManager;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *homeConfigurationCommonDimensions;
@property (nonatomic, readonly) HMDMetricsManager *metricsManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addHomeConfigurationCommonDimensionsToEventDictionary:(id)arg1;
- (id)clientQueue;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)homeConfigurationCommonDimensions;
- (id)initWithMetricsManager:(id)arg1;
- (id)metricsManager;
- (void)setHomeConfigurationCommonDimensions:(id)arg1;

@end