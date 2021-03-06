/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo> {
    bool  _isUserInitiated;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _label;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _placeholder;
    long long  _type;
    struct RetainPtr<NSObject<NSSecureCoding>> { 
        void *m_ptr; 
    }  _userObject;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;
@property (nonatomic, readonly, copy) NSString *value;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFocusedElementInformation:(const struct FocusedElementInformation { struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_1_1_2; } x1; struct ElementContext { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x_2_2_1; } x_2_1_2; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x_3_2_1; } x_2_1_3; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x_4_2_1; } x_2_1_4; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; double x4; double x5; double x6; double x7; bool x8; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_9_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_9_1_2; } x9; bool x10; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_11_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_11_1_2; } x11; bool x12; bool x13; bool x14; bool x15; bool x16; }*)arg1 isUserInitiated:(bool)arg2 userObject:(id)arg3;
- (bool)isUserInitiated;
- (id)label;
- (id)placeholder;
- (long long)type;
- (id)userObject;
- (id)value;

@end
