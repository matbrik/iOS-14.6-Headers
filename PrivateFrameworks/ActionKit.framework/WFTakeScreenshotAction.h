/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFTakeScreenshotAction : WFAction {
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
}

@property (nonatomic, retain) FBSDisplayLayoutMonitor *displayLayoutMonitor;

- (void).cxx_destruct;
- (id)displayLayoutMonitor;
- (void)notifyVisibleScenesOfScreenshot:(id /* block */)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)screenshotDisplay:(id)arg1 error:(id*)arg2;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (void)takeScreensot;

@end
