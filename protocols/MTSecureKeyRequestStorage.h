/* Generated by RuntimeBrowser.
 */

@protocol MTSecureKeyRequestStorage

@required

- (bool)keyExistsInStorageFor:(long long)arg1;
- (void)markOfflineKeyFor:(long long)arg1 pendingDeletion:(bool)arg2;
- (void)removeKeyDataFor:(MTContentKeyResponse *)arg1;
- (MTContentKeyResponse *)retrieveKeyDataFor:(MTContentKeyRequest *)arg1;
- (bool)saveKeyDataFor:(MTContentKeyResponse *)arg1;

@end
