/* Generated by RuntimeBrowser.
 */

@protocol SHSessionDelegate <NSObject>

@optional

- (void)session:(SHSession *)arg1 didFindMatch:(SHMatch *)arg2;
- (void)session:(SHSession *)arg1 didNotFindMatchForSignature:(SHSignature *)arg2 error:(NSError *)arg3;
- (bool)session:(SHSession *)arg1 shouldAttemptToMatchSignature:(SHSignature *)arg2;

@end