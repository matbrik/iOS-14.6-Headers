/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXPBCGRectWrapper : PBCodable <NSCopying> {
    double  _height;
    double  _width;
    double  _x;
    double  _y;
}

@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (double)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (double)width;
- (void)writeTo:(id)arg1;
- (double)x;
- (double)y;

@end