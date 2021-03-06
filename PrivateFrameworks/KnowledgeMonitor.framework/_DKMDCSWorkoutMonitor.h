/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKMDCSWorkoutMonitor : _DKMonitor {
    _CDContextualChangeRegistration * _registration;
    _CDClientContext * _userContext;
    BMWorkoutStream * _workoutStream;
}

@property (nonatomic, retain) BMWorkoutStream *workoutStream;

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (id)createWorkoutPredicate;
- (id)init;
- (void)setWorkoutStream:(id)arg1;
- (void)start;
- (void)stop;
- (id)workoutStream;

@end
