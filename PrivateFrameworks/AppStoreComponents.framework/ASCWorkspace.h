/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCWorkspace : NSObject

@property (getter=isExtension, nonatomic, readonly) bool extension;

+ (id)sharedWorkspace;
+ (void)withSharedWorkspace:(id)arg1 perform:(id /* block */)arg2;

- (id)_init;
- (bool)isExtension;
- (id)openSensitiveURL:(id)arg1;
- (id)openURL:(id)arg1;

@end