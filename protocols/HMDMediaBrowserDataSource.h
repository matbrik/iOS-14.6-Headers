/* Generated by RuntimeBrowser.
 */

@protocol HMDMediaBrowserDataSource

@required

- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedAppleMediaAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 messageDispatcher:(HMFMessageDispatcher *)arg4;
- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedHomePodAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 messageDispatcher:(HMFMessageDispatcher *)arg4;
- (NSString *)currentAccessoryMediaRouteIdentifier;
- (bool)isAppleMediaAccessory;
- (bool)requiresHomePodPairing;
- (HMFSystemInfo *)systemInfo;

@end