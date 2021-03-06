/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAnalyticsPipelineSessionList : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long x1; unsigned long long x2; } * _sessions;
    unsigned long long  _sessionsCount;
    unsigned long long  _sessionsSpace;
}

@property (nonatomic, readonly) struct GEOSessionID { unsigned long long x1; unsigned long long x2; }*sessions;
@property (nonatomic, readonly) unsigned long long sessionsCount;

+ (bool)isValid:(id)arg1;

- (void)addSessions:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)clearSessions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; }*)sessions;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sessionsCount;
- (void)setSessions:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
