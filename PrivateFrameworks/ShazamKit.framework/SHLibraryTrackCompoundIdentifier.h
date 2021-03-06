/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHLibraryTrackCompoundIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _recognitionIdentifier;
    SHShazamKey * _shazamKey;
}

@property (nonatomic, readonly, copy) NSString *libraryItemIdentifier;
@property (nonatomic, readonly, copy) NSString *recognitionIdentifier;
@property (nonatomic, readonly) SHShazamKey *shazamKey;

+ (id)compoundIdentifierFromTrackIdentifier:(id)arg1;
+ (id)identifierWithRecognitionIdentifier:(id)arg1 shazamKey:(id)arg2;
+ (bool)isTrackIdentifier:(id)arg1;
+ (id)recognitionIdentifierFromTrackIdentifier:(id)arg1;
+ (id)shazamKeyFromTrackIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidRecognitionIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognitionIdentifier:(id)arg1 shazamKey:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualCompoundIdentifier:(id)arg1;
- (id)libraryItemIdentifier;
- (id)recognitionIdentifier;
- (id)shazamKey;

@end
