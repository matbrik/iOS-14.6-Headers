/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICFileContentKeyStore : NSObject <ICContentKeyStoreProtocol> {
    NSString * _filePath;
}

- (void).cxx_destruct;
- (id)_filePathForKeyIdentifier:(id)arg1;
- (bool)containsKeyForIdentifier:(id)arg1 error:(id*)arg2;
- (void)enumerateKeysUsingBlock:(id /* block */)arg1;
- (id)initWithPath:(id)arg1;
- (id)loadKeyForIdentifier:(id)arg1 renewalDate:(id*)arg2 error:(id*)arg3;
- (id)saveKey:(id)arg1 forIdentifier:(id)arg2 withRenewalDate:(id)arg3;

@end