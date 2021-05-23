/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating> {
    AFMediaPlaybackStateSnapshot * _baseModel;
    NSString * _groupIdentifier;
    NSString * _mediaType;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasPlaybackState : 1; 
        unsigned int hasNowPlayingTimestamp : 1; 
        unsigned int hasMediaType : 1; 
        unsigned int hasGroupIdentifier : 1; 
    }  _mutationFlags;
    NSDate * _nowPlayingTimestamp;
    long long  _playbackState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setNowPlayingTimestamp:(id)arg1;
- (void)setPlaybackState:(long long)arg1;

@end