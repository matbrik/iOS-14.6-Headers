/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMListBase : NSObject <NSFastEnumeration> {
    RLMArray * __rlmArray;
    struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo>> { 
        struct __compressed_pair<RLMObservationInfo *, std::__1::default_delete<RLMObservationInfo>> { 
            struct RLMObservationInfo {} *__value_; 
        } __ptr_; 
    }  _observationInfo;
}

@property (nonatomic, retain) RLMArray *_rlmArray;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_rlmArray;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithArray:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)set_rlmArray:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
