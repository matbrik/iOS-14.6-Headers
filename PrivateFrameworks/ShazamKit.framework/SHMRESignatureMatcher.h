/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHMRESignatureMatcher : NSObject <SHMatcher> {
    SHLocalStore * _localStore;
    MRE * _mre;
    <SHMatcherDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SHLocalStore *localStore;
@property (nonatomic, retain) MRE *mre;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MRESignaturesFromMatches:(id)arg1;
- (void)buildMRE;
- (id)delegate;
- (id)initWithLocalStore:(id)arg1;
- (id)localStore;
- (id)mediaItemsFromMREResult:(id)arg1;
- (id)mre;
- (void)setDelegate:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)setMre:(id)arg1;
- (void)startRecognitionForRequest:(id)arg1;
- (long long)storeDensityToMREDensity:(long long)arg1;

@end