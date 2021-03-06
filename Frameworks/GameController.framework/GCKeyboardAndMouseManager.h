/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCKeyboardAndMouseManager : NSObject {
    GCKeyboard * _coalescedKeyboard;
    GCMouse * _currentMouse;
    NSMutableDictionary * _devicesByRegistryID;
    NSObject<OS_dispatch_queue> * _devicesQueue;
    GCKeyboardAndMouseEmulatedController * _emulatedController;
    int  _emulatedControllerMapping;
}

@property (readonly) GCKeyboard *coalescedKeyboard;
@property (retain) GCMouse *currentMouse;
@property (nonatomic) NSObject<OS_dispatch_queue> *devicesQueue;
@property int emulatedControllerMapping;

- (void).cxx_destruct;
- (void)_queue_removeDevice:(id)arg1 registryID:(id)arg2;
- (bool)addDeviceWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (void)addKeyboard:(id)arg1;
- (void)addMouse:(id)arg1;
- (id)coalescedKeyboard;
- (id)currentMouse;
- (id)devicesQueue;
- (int)emulatedControllerMapping;
- (void)ensureEmulatedControllerWithDevice:(id)arg1 added:(bool)arg2;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)handleKeyboardEventAsFrontmostApp:(id)arg1;
- (void)handleMouseEventAsFrontmostApp:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)mice;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)publishDevice:(id)arg1 withNotificationName:(id)arg2;
- (void)removeDevice:(id)arg1 registryID:(id)arg2;
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (void)setCurrentMouse:(id)arg1;
- (void)setDevicesQueue:(id)arg1;
- (void)setEmulatedControllerEnabled:(int)arg1;
- (void)setEmulatedControllerMapping:(int)arg1;
- (void)storeDevice:(id)arg1;
- (void)unpublishDevice:(id)arg1 withNotificationName:(id)arg2;
- (void)updateCurrentDevice:(id)arg1;
- (void)updateCurrentDeviceAfterDisconnecting:(id)arg1;
- (void)updateCurrentMouseAfterDisconnecting:(id)arg1;

@end
