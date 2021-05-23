/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLaunchConfiguration : NSObject {
    NSString * _cloudAccountContentPath;
    NSString * _container;
    unsigned long long  _environment;
    NSString * _localAccountArchiveName;
    bool  _resetCloud;
    bool  _resetContainer;
    bool  _resetState;
}

@property (nonatomic, copy) NSString *cloudAccountContentPath;
@property (nonatomic, copy) NSString *container;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, readonly) NSArray *launchArguments;
@property (nonatomic, copy) NSString *localAccountArchiveName;
@property (nonatomic) bool resetCloud;
@property (nonatomic) bool resetContainer;
@property (nonatomic) bool resetState;

+ (id)current;

- (void).cxx_destruct;
- (id)cloudAccountContentPath;
- (id)container;
- (unsigned long long)environment;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEnvironment:(unsigned long long)arg1 container:(id)arg2;
- (id)initWithEnvironment:(unsigned long long)arg1 container:(id)arg2 resetContainer:(bool)arg3 resetCloud:(bool)arg4 resetState:(bool)arg5 localAccountArchiveName:(id)arg6 cloudAccountContentPath:(id)arg7;
- (id)launchArguments;
- (id)localAccountArchiveName;
- (bool)resetCloud;
- (bool)resetContainer;
- (bool)resetState;
- (void)setCloudAccountContentPath:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setLocalAccountArchiveName:(id)arg1;
- (void)setResetCloud:(bool)arg1;
- (void)setResetContainer:(bool)arg1;
- (void)setResetState:(bool)arg1;

@end