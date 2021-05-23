/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface KGMemoryEdge : NSObject {
    unsigned long long  _identifier;
    NSArray * _labels;
    NSDictionary * _properties;
    KGMemoryNode * _sourceNode;
    KGMemoryNode * _targetNode;
    float  _weight;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSArray *labels;
@property (nonatomic, retain) NSDictionary *properties;
@property (nonatomic, readonly) KGMemoryNode *sourceNode;
@property (nonatomic, readonly) KGMemoryNode *targetNode;
@property (nonatomic) float weight;

- (void).cxx_destruct;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6;
- (id)labels;
- (id)oppositeNodeFromNode:(id)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (void)setWeight:(float)arg1;
- (id)sourceNode;
- (id)targetNode;
- (float)weight;

@end