/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKVideoLayerRemote : CALayer {
    struct RetainPtr<CAContext> { 
        void *m_ptr; 
    }  _context;
    struct Seconds { 
        double m_value; 
    }  _delay;
    struct WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { 
            struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
        } m_impl; 
    }  _mediaPlayerPrivateRemote;
    struct unique_ptr<WebCore::Timer, std::__1::default_delete<WebCore::Timer>> { 
        struct __compressed_pair<WebCore::Timer *, std::__1::default_delete<WebCore::Timer>> { 
            struct Timer {} *__value_; 
        } __ptr_; 
    }  _resolveBoundsTimer;
    bool  _shouldRestartWhenTimerFires;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _videoLayerFrame;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{MediaPlayerPrivateRemote=^^?{WeakPtrFactory<WebKit::MediaPlayerPrivateRemote' */ struct *mediaPlayerPrivateRemote; /* unknown property attribute:  WTF::Optional<bool>>}}}ddqBBBBB} */
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoLayerFrame;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSublayers;
- (struct MediaPlayerPrivateRemote { int (**x1)(); struct WeakPtrFactory<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; int (**x3)(); int (**x4)(); struct Ref<const WTF::Logger, WTF::RawPtrTraits<const WTF::Logger>> { struct Logger {} *x_5_1_1; } x5; void *x6; struct MediaPlayer {} *x7; struct Ref<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>> { struct PlatformMediaResourceLoader {} *x_8_1_1; } x8; struct UniqueRef<WebCore::VideoLayerManager> { struct unique_ptr<WebCore::VideoLayerManager, std::__1::default_delete<WebCore::VideoLayerManager>> { struct __compressed_pair<WebCore::VideoLayerManager *, std::__1::default_delete<WebCore::VideoLayerManager>> { struct VideoLayerManager {} *x_1_3_1; } x_1_2_1; } x_9_1_1; } x9; struct RetainPtr<CALayer> { void *x_10_1_1; } x10; }*)mediaPlayerPrivateRemote;
- (void)resolveBounds;
- (void)setMediaPlayerPrivateRemote:(struct MediaPlayerPrivateRemote { int (**x1)(); struct WeakPtrFactory<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; int (**x3)(); int (**x4)(); struct Ref<const WTF::Logger, WTF::RawPtrTraits<const WTF::Logger>> { struct Logger {} *x_5_1_1; } x5; void *x6; struct MediaPlayer {} *x7; struct Ref<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>> { struct PlatformMediaResourceLoader {} *x_8_1_1; } x8; struct UniqueRef<WebCore::VideoLayerManager> { struct unique_ptr<WebCore::VideoLayerManager, std::__1::default_delete<WebCore::VideoLayerManager>> { struct __compressed_pair<WebCore::VideoLayerManager *, std::__1::default_delete<WebCore::VideoLayerManager>> { struct VideoLayerManager {} *x_1_3_1; } x_1_2_1; } x_9_1_1; } x9; struct RetainPtr<CALayer> { void *x_10_1_1; } x10; }*)arg1;
- (void)setVideoLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoLayerFrame;

@end
