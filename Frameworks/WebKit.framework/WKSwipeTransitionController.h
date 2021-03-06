/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _forwardTransitionController;
    struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; bool x4; struct Timer<WebKit::ViewGestureController> { int (**x_5_1_1)(); struct Ref<WTF::RunLoop, WTF::RawPtrTraits<WTF::RunLoop>> { struct RunLoop {} *x_2_2_1; } x_5_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_5_1_3; struct Function<void ()>={unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>>={__compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>>=^{CallableWrapperBase<void> {} x_5_1_4; } x5; } * _gestureController;
    struct WeakObjCPtr<UIView> { 
        id m_weakReference; 
    }  _gestureRecognizerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)directionForTransition:(id)arg1;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (id)initWithViewGestureController:(struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; bool x4; struct Timer<WebKit::ViewGestureController> { int (**x_5_1_1)(); struct Ref<WTF::RunLoop, WTF::RawPtrTraits<WTF::RunLoop>> { struct RunLoop {} *x_2_2_1; } x_5_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_5_1_3; struct Function<void ()>={unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>>={__compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>>=^{CallableWrapperBase<void> {} x_5_1_4; } x5; }*)arg1 gestureRecognizerView:(id)arg2;
- (bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (void)invalidate;
- (bool)isNavigationSwipeGestureRecognizer:(id)arg1;
- (bool)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)transitionForDirection:(int)arg1;

@end
