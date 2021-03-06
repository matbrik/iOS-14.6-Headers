/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVContentKey : NSObject {
    struct OpaqueFigCPECryptor { } * _cryptor;
    AVContentKeySpecifier * contentKeySpecifier;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;

+ (id)contentKeyWithSpecifier:(id)arg1 andCryptor:(struct OpaqueFigCPECryptor { }*)arg2;

- (id)contentKeySpecifier;
- (void)dealloc;
- (struct OpaqueFigCPECryptor { }*)getCryptor;
- (id)initWithSpecifier:(id)arg1 andCryptor:(struct OpaqueFigCPECryptor { }*)arg2;

@end
