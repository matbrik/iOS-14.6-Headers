/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface CKMemoizingComponentStateWrapper : NSObject {
    id  _memoizationState;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)executeBlockWithMemoizationState:(id /* block */)arg1;

@end