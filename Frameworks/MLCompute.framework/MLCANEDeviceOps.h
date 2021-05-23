/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCANEDeviceOps : MLCDeviceOps {
    int  _deviceOpType;
    _MLCANEModel * _model;
    NSDictionary * _networkMap;
    id  _params;
    unsigned long long  _procedureIndex;
    NSDictionary * _procedureMap;
    _ANERequest * _request;
    NSArray * _units;
}

@property (nonatomic, readonly) int deviceOpType;
@property (nonatomic, retain) _MLCANEModel *model;
@property (nonatomic, retain) NSDictionary *networkMap;
@property (nonatomic, readonly, retain) id params;
@property (nonatomic) unsigned long long procedureIndex;
@property (nonatomic, retain) NSDictionary *procedureMap;
@property (nonatomic, retain) _ANERequest *request;
@property (nonatomic, retain) NSArray *units;

+ (id)deviceOpsWithType:(int)arg1 params:(id)arg2;

- (void).cxx_destruct;
- (int)deviceOpType;
- (id)initWithType:(int)arg1 params:(id)arg2;
- (id)model;
- (id)networkMap;
- (id)params;
- (unsigned long long)procedureIndex;
- (id)procedureMap;
- (id)request;
- (void)setModel:(id)arg1;
- (void)setNetworkMap:(id)arg1;
- (void)setProcedureIndex:(unsigned long long)arg1;
- (void)setProcedureMap:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setUnits:(id)arg1;
- (id)units;

@end