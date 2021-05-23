/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIColorPickerViewController : UIViewController <_UIColorPickerColorQueueDelegate, _UIColorPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining> {
    _UIColorPickerViewControllerConfiguration * __remoteConfiguration;
    NSLayoutConstraint * _bottomConstraint;
    _UIColorPickerRemoteViewController * _childViewController;
    _UIColorPickerColorQueue * _colorQueue;
    _UIColorPickerViewControllerConfiguration * _configuration;
    <UIColorPickerViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    struct { 
        unsigned int delegateImplementsDidSelectColorContinuous : 1; 
        unsigned int delegateImplementsDidSelectColor : 1; 
    }  _flags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    UIPresentationController * _presentationController;
    UIColor * _selectedColor;
}

@property (setter=_setChildViewController:, nonatomic, retain) _UIColorPickerRemoteViewController *_childViewController;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (setter=_setRemoteConfiguration:, nonatomic, copy) _UIColorPickerViewControllerConfiguration *_remoteConfiguration;
@property (setter=_setShouldUseDarkGridInDarkMode:, nonatomic) bool _shouldUseDarkGridInDarkMode;
@property (setter=_setUserInterfaceStyleForGrid:, nonatomic) long long _userInterfaceStyleForGrid;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) _UIColorPickerColorQueue *colorQueue;
@property (nonatomic, readonly, copy) _UIColorPickerViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIColorPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *selectedColor;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAlpha;

+ (bool)automaticallyNotifiesObserversOfSelectedColor;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_childViewController;
- (void)_colorPickerDidFinish;
- (void)_commonUIColorPickerViewControllerInit;
- (id)_containedRemoteViewController;
- (void)_dequeue_pickerDidSelectColor:(id)arg1 colorspace:(id)arg2 isVolatile:(bool)arg3;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)arg1;
- (void)_pickerDidSelectColor:(id)arg1 colorspace:(id)arg2 isVolatile:(bool)arg3;
- (void)_pickerDidShowEyedropper;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (void)_processKeyboardNotification:(id)arg1;
- (id)_remoteConfiguration;
- (void)_setChildViewController:(id)arg1;
- (void)_setRemoteConfiguration:(id)arg1;
- (void)_setSelectedColor:(id)arg1;
- (void)_setShouldUseDarkGridInDarkMode:(bool)arg1;
- (void)_setUserInterfaceStyleForGrid:(long long)arg1;
- (bool)_shouldUseDarkGridInDarkMode;
- (void)_tryLaunchingExtension:(long long)arg1;
- (void)_updateRemoteConfiguration;
- (long long)_userInterfaceStyleForGrid;
- (id)bottomConstraint;
- (id)colorQueue;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)remoteViewController;
- (void)repositionChildViewControllerAnimated:(bool)arg1;
- (id)selectedColor;
- (void)setBottomConstraint:(id)arg1;
- (void)setColorQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSupportsAlpha:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)supportsAlpha;
- (void)willMoveToParentViewController:(id)arg1;

@end