/* Generated by RuntimeBrowser.
 */

@protocol SHSessionDriver <SHMatcherDelegate>

@required

- (void)flow:(AVAudioPCMBuffer *)arg1 time:(AVAudioTime *)arg2;
- (SHSignature *)matchingSignature;
- (<SHSessionDriverDelegate> *)sessionDelegate;
- (void)setSessionDelegate:(id <SHSessionDriverDelegate>)arg1;

@end