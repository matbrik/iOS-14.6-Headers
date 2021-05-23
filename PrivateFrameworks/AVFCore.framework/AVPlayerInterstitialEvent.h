/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerInterstitialEvent : NSObject {
    struct OpaqueFigPlayerInterstitialEvent { } * _figEvent;
    AVPlayerItem * _primaryItem;
    NSArray * _templateItems;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) AVPlayerItem *primaryItem;
@property (nonatomic, readonly) unsigned long long restrictions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } resumptionOffset;
@property (nonatomic, readonly) NSArray *templateItems;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)interstitialEventWithPrimaryItem:(id)arg1 date:(id)arg2 templateItems:(id)arg3 restrictions:(unsigned long long)arg4 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 identifier:(id)arg2 date:(id)arg3 templateItems:(id)arg4 restrictions:(unsigned long long)arg5 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 playoutLimit:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 identifier:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 templateItems:(id)arg4 restrictions:(unsigned long long)arg5 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 playoutLimit:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 templateItems:(id)arg2 figEvent:(struct OpaqueFigPlayerInterstitialEvent { }*)arg3;
+ (id)interstitialEventWithPrimaryItem:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 templateItems:(id)arg3 restrictions:(unsigned long long)arg4 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;

- (void).cxx_destruct;
- (id)date;
- (void)dealloc;
- (id)description;
- (struct OpaqueFigPlayerInterstitialEvent { }*)figEvent;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPrimartyItem:(id)arg1 identifier:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 date:(id)arg4 templateItems:(id)arg5 restrictions:(unsigned long long)arg6 resumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 playoutLimit:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8;
- (id)initWithPrimartyItemAndFigEvent:(id)arg1 templateItems:(id)arg2 figEvent:(struct OpaqueFigPlayerInterstitialEvent { }*)arg3;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playoutLimit;
- (id)primaryItem;
- (unsigned long long)restrictions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })resumptionOffset;
- (id)templateItems;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end