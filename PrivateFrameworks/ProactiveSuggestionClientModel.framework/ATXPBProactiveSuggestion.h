/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
 */

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying> {
    ATXPBProactiveSuggestionClientModelSpecification * _clientModelSpecification;
    ATXPBProactiveSuggestionExecutableSpecification * _executableSpecification;
    ATXPBProactiveSuggestionScoreSpecification * _scoreSpecification;
    ATXPBProactiveSuggestionUISpecification * _uiSpecification;
    NSString * _uuidString;
}

@property (nonatomic, retain) ATXPBProactiveSuggestionClientModelSpecification *clientModelSpecification;
@property (nonatomic, retain) ATXPBProactiveSuggestionExecutableSpecification *executableSpecification;
@property (nonatomic, readonly) bool hasClientModelSpecification;
@property (nonatomic, readonly) bool hasExecutableSpecification;
@property (nonatomic, readonly) bool hasScoreSpecification;
@property (nonatomic, readonly) bool hasUiSpecification;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic, retain) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification;
@property (nonatomic, retain) ATXPBProactiveSuggestionUISpecification *uiSpecification;
@property (nonatomic, retain) NSString *uuidString;

- (void).cxx_destruct;
- (id)clientModelSpecification;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executableSpecification;
- (bool)hasClientModelSpecification;
- (bool)hasExecutableSpecification;
- (bool)hasScoreSpecification;
- (bool)hasUiSpecification;
- (bool)hasUuidString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)scoreSpecification;
- (void)setClientModelSpecification:(id)arg1;
- (void)setExecutableSpecification:(id)arg1;
- (void)setScoreSpecification:(id)arg1;
- (void)setUiSpecification:(id)arg1;
- (void)setUuidString:(id)arg1;
- (id)uiSpecification;
- (id)uuidString;
- (void)writeTo:(id)arg1;

@end