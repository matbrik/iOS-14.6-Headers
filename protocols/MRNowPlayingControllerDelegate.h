/* Generated by RuntimeBrowser.
 */

@protocol MRNowPlayingControllerDelegate <NSObject>

@optional

- (void)controller:(MRNowPlayingController *)arg1 contentItemsDidUpdate:(NSArray *)arg2;
- (void)controller:(MRNowPlayingController *)arg1 deviceLastPlayingDateDidChange:(NSDate *)arg2;
- (void)controller:(MRNowPlayingController *)arg1 didFailWithError:(NSError *)arg2;
- (void)controller:(MRNowPlayingController *)arg1 didLoadArtworkForContentItems:(NSArray *)arg2;
- (void)controller:(MRNowPlayingController *)arg1 didLoadResponse:(MRNowPlayingPlayerResponse *)arg2;
- (void)controller:(MRNowPlayingController *)arg1 didUpdateResponse:(MRNowPlayingPlayerResponse *)arg2;
- (void)controller:(MRNowPlayingController *)arg1 playbackQueueDidChangeFrom:(MRPlaybackQueue *)arg2 to:(MRPlaybackQueue *)arg3;
- (void)controller:(MRNowPlayingController *)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)controller:(MRNowPlayingController *)arg1 playerLastPlayingDateDidChange:(NSDate *)arg2;
- (void)controller:(MRNowPlayingController *)arg1 supportedCommandsDidChangeFrom:(NSArray *)arg2 to:(NSArray *)arg3;
- (void)controllerWillReloadForInvalidation:(MRNowPlayingController *)arg1;

@end
