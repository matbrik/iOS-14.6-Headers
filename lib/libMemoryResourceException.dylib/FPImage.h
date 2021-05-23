/* Generated by RuntimeBrowser
   Image: /usr/lib/libMemoryResourceException.dylib
 */

@interface FPImage : NSObject {
    NSString * _name;
    NSString * _ownerPath;
    unsigned char  _segment;
    unsigned long long  _size;
    unsigned long long  _start;
}

@property (nonatomic, readonly) unsigned long long end;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *ownerPath;
@property (nonatomic) unsigned char segment;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long start;

- (void).cxx_destruct;
- (unsigned long long)end;
- (id)name;
- (id)ownerPath;
- (unsigned char)segment;
- (void)setName:(id)arg1;
- (void)setOwnerPath:(id)arg1;
- (void)setSegment:(unsigned char)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)start;

@end