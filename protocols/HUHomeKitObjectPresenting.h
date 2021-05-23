/* Generated by RuntimeBrowser.
 */

@protocol HUHomeKitObjectPresenting <NSObject>

@required

- (NAFuture *)presentHomeKitObject:(id <HFHomeKitObject>)arg1 destination:(unsigned long long)arg2 animated:(bool)arg3;

@optional

- (NAFuture *)presentCameraProfile:(id <HFHomeKitObject>)arg1 forCameraClip:(HMCameraClip *)arg2 animated:(bool)arg3;
- (NAFuture *)presentCameraProfile:(id <HFHomeKitObject>)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 animated:(bool)arg4;

@end