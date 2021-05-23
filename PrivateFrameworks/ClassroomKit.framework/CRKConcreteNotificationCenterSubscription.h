/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKConcreteNotificationCenterSubscription : NSObject <CRKCancelable> {
    NSNotificationCenter * _notificationCenter;
    id /* block */  _notificationHandler;
}

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (copy) id /* block */ notificationHandler;

+ (id)subscriptionWithNotificationCenter:(id)arg1 notificationName:(id)arg2 notificationHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1 notificationHandler:(id /* block */)arg2;
- (id)notificationCenter;
- (void)notificationDidFire:(id)arg1;
- (id /* block */)notificationHandler;
- (void)setNotificationHandler:(id /* block */)arg1;

@end