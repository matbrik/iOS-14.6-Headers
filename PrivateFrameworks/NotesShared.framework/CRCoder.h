/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface CRCoder : NSObject {
    NSOrderedSet * _clusterTypeSet;
    struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; } * _currentDocument;
    NSMutableOrderedSet * _encodedObjects;
}

@property (nonatomic, readonly) NSOrderedSet *clusterTypeSet;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Document=^^?{basic_string<char' */ struct *currentDocument; /* unknown property attribute:  std::__1::allocator<char>>>=^^viii}^{VectorTimestamp}} */
@property (nonatomic, retain) NSMutableOrderedSet *encodedObjects;
@property (nonatomic, readonly) NSOrderedSet *typeSet;
@property (nonatomic, readonly) NSDictionary *typeToClassDict;

+ (void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(bool)arg3;
+ (void)registerCRClasses;
+ (void)registerClass:(Class)arg1 forType:(id)arg2;

- (void).cxx_destruct;
- (id)clusterTypeSet;
- (struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)currentDocument;
- (id)encodedObjects;
- (void)setCurrentDocument:(struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1;
- (void)setEncodedObjects:(id)arg1;
- (unsigned long long)typeIndexForClass:(Class)arg1;
- (id)typeSet;
- (id)typeToClassDict;

@end
