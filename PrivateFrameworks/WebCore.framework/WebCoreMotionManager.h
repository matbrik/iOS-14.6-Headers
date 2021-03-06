/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreMotionManager : NSObject {
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter> { 
        struct HashSet<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>> { 
            struct HashTable<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>, WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>> { 
                struct Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> {} *m_table; 
            } m_impl; 
        } m_set; 
    }  m_deviceMotionClients;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter> { 
        struct HashSet<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>> { 
            struct HashTable<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>, WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>>> { 
                struct Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> {} *m_table; 
            } m_impl; 
        } m_set; 
    }  m_deviceOrientationClients;
    bool  m_gyroAvailable;
    bool  m_headingAvailable;
    bool  m_initialized;
    CLLocationManager * m_locationManager;
    CMMotionManager * m_motionManager;
    NSTimer * m_updateTimer;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(struct MotionManagerClient { int (**x1)(); struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (void)addOrientationClient:(struct MotionManagerClient { int (**x1)(); struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (void)checkClientStatus;
- (void)dealloc;
- (bool)gyroAvailable;
- (bool)headingAvailable;
- (id)init;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(struct MotionManagerClient { int (**x1)(); struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (void)removeOrientationClient:(struct MotionManagerClient { int (**x1)(); struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (void)sendAccelerometerData:(id)arg1;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)update;

@end
