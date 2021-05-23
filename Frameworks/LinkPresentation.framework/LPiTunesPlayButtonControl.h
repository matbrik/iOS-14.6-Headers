/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesPlayButtonControl : LPPlayButtonControl {
    double  _currentPlaybackPosition;
    bool  _currentlyPlaying;
    MPModelGenericObject * _enqueuedItem;
    MPModelGenericObject * _enqueuedItemContext;
    bool  _hasStartedPlaying;
    <NSObject> * _playbackDidEndNotificationToken;
    LPInlineMediaPlaybackInformation * _playbackInformation;
    NSTimer * _playbackStateUpdateTimer;
    bool  _wasPlayingMusicWhenLyricExcerptPlaybackStarted;
}

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)createPlaybackQueue;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2 theme:(id)arg3;
- (bool)matchesNowPlayingItem;
- (id)mediaPlaybackApplicationID;
- (void)startListeningForPlayback;
- (void)startPlaybackForLyricExcerpt;
- (void)startPlaying;
- (void)stopListeningForPlayback;
- (void)updatePlayState;
- (void)updatePlaybackState;
- (void)willMoveToWindow:(id)arg1;

@end