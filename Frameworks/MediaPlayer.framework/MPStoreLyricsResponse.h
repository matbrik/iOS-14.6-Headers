/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLyricsResponse : NSObject {
    bool  _TTML;
    NSString * _lyricsContent;
    NSString * _lyricsID;
}

@property (getter=isTTML, nonatomic) bool TTML;
@property (nonatomic, retain) NSString *lyricsContent;
@property (nonatomic, retain) NSString *lyricsID;

- (void).cxx_destruct;
- (bool)isTTML;
- (id)lyricsContent;
- (id)lyricsID;
- (void)setLyricsContent:(id)arg1;
- (void)setLyricsID:(id)arg1;
- (void)setTTML:(bool)arg1;

@end