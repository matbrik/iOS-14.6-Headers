/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVSampleBufferErrorListener : NSObject {
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { 
        struct RetainPtr<AVSampleBufferDisplayLayer> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _layers;
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { 
            struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
        } m_impl; 
    }  _parent;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { 
        struct RetainPtr<AVSampleBufferAudioRenderer> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _renderers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginObservingLayer:(id)arg1;
- (void)beginObservingRenderer:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_1_1; } x1; }*)arg1;
- (void)invalidate;
- (void)layerFailedToDecode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stopObservingLayer:(id)arg1;
- (void)stopObservingRenderer:(id)arg1;

@end
