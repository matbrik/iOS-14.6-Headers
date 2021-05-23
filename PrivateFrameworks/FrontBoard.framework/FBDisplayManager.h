/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayManager : FBSDisplayMonitor

@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainDisplay;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

+ (id)mainConfiguration;
+ (id)mainDisplay;
+ (id)mainIdentity;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)mainDisplay;
- (void)postBookendConnections;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)sb_secureMainConfiguration;
+ (id)sb_secureMainIdentity;

@end