/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSOperationQueue * _operationQueue;
    id /* block */  _responseHandler;
    long long  _songAdamID;
}

@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) long long songAdamID;

+ (id)_lyricsURLForURLBagDictionary:(id)arg1;
+ (bool)supportsLyricsForURLBagDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(bool)arg3;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)init;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSongAdamID:(long long)arg1;
- (long long)songAdamID;

@end