/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface _MLCANEModel : NSObject {
    _ANEClient * _connection;
    _ANEModel * _model;
    NSDictionary * _options;
    NSDictionary * _plist;
    unsigned int  _qos;
}

@property (nonatomic, readonly) _ANEClient *connection;
@property (nonatomic, readonly, retain) _ANEModel *model;
@property (nonatomic, readonly, retain) NSDictionary *options;
@property (nonatomic, readonly, retain) NSDictionary *plist;
@property (nonatomic, readonly) unsigned int qos;

+ (id)objectWithModel:(id)arg1 connection:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 plist:(id)arg5;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithModel:(id)arg1 connection:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 plist:(id)arg5;
- (id)model;
- (id)options;
- (id)plist;
- (unsigned int)qos;

@end
