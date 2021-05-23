/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface TTParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, TTModelAttributeComparable> {
    unsigned long long  _alignment;
    unsigned int  _hints;
    unsigned long long  _indent;
    bool  _needsListCleanup;
    bool  _needsParagraphCleanup;
    unsigned long long  _startingItemNumber;
    unsigned int  _style;
    long long  _writingDirection;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic, readonly) bool canIndent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int hints;
@property (nonatomic) unsigned long long indent;
@property (nonatomic, readonly) bool isHeader;
@property (nonatomic, readonly) bool isList;
@property (nonatomic) bool needsListCleanup;
@property (nonatomic) bool needsParagraphCleanup;
@property (nonatomic, readonly) bool preferSingleLine;
@property (nonatomic) unsigned long long startingItemNumber;
@property (nonatomic) unsigned int style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *trackingUUID;
@property (nonatomic, readonly) bool uniqueToLine;
@property (nonatomic, readonly) bool wantsFollowingNewLine;
@property (nonatomic) long long writingDirection;

+ (id)defaultParagraphStyle;
+ (int)paragraphStyleAlignmentForTextAlignment:(unsigned long long)arg1;
+ (id)paragraphStyleNamed:(unsigned int)arg1;
+ (bool)supportsSecureCoding;
+ (unsigned long long)textAlignmentForParagraphStyleAlignment:(int)arg1;

- (unsigned long long)alignment;
- (bool)canIndent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)hints;
- (unsigned long long)indent;
- (id)init;
- (id)initWithArchive:(const struct ParagraphStyle { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; int x7; int x8; struct Todo {} *x9; unsigned int x10; unsigned int x11; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelComparable:(id)arg1;
- (bool)isEqualToModelParagraphStyle:(id)arg1;
- (bool)isEqualToParagraphStyle:(id)arg1;
- (bool)isHeader;
- (bool)isList;
- (bool)isUnknownStyle;
- (id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsListCleanup;
- (bool)needsParagraphCleanup;
- (bool)preferSingleLine;
- (void)saveToArchive:(struct ParagraphStyle { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; int x7; int x8; struct Todo {} *x9; unsigned int x10; unsigned int x11; }*)arg1;
- (id)serialize;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setHints:(unsigned int)arg1;
- (void)setIndent:(unsigned long long)arg1;
- (void)setNeedsListCleanup:(bool)arg1;
- (void)setNeedsParagraphCleanup:(bool)arg1;
- (void)setStartingItemNumber:(unsigned long long)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setWritingDirection:(long long)arg1;
- (unsigned long long)startingItemNumber;
- (unsigned int)style;
- (id)trackingUUID;
- (bool)uniqueToLine;
- (bool)wantsFollowingNewLine;
- (long long)writingDirection;

@end