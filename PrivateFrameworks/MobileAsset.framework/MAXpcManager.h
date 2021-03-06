/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAXpcManager : NSObject

- (void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(id /* block */)arg3 withPurpose:(id)arg4;
- (void)clearConnection:(id)arg1;
- (void)dealloc;
- (void)ensureConnection;
- (id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2;
- (void)sendAsync:(id)arg1 clientHandler:(id /* block */)arg2 taskDescriptor:(id)arg3;
- (id)sendSync:(id)arg1;
- (void)setClientConnectionHandler;
- (void)setClientName:(id)arg1;

@end
