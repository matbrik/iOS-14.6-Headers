/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
 */

@interface USOGraphNode : NSObject {
    struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; } * _usoGraphNode;
}

- (id)initWithCppGraphNode:(struct UsoGraphNode { int (**x1)(); struct UsoGraph {} *x2; unsigned long long x3; }*)arg1;
- (void)setSuccessor:(const struct OntologyEdgeName { int (**x1)(); int x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; }*)arg1 successor:(id)arg2 enumeration:(unsigned int)arg3;

@end