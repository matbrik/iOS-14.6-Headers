/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFLinkedContentProvider : NSObject <NULinkedContentProvider> {
    <FCContentContext> * _contentContext;
    NSDictionary * _linkedHeadlines;
    NSDictionary * _linkedIssues;
    NSDictionary * _linkedTags;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *linkedHeadlines;
@property (nonatomic, copy) NSDictionary *linkedIssues;
@property (nonatomic, copy) NSDictionary *linkedTags;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentContext;
- (id)headlineForIdentifier:(id)arg1;
- (id)initWithContentContext:(id)arg1;
- (id)issueForIdentifier:(id)arg1;
- (id)linkedHeadlines;
- (id)linkedIssues;
- (id)linkedTags;
- (id)loadLinkedArticlesWithIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)loadLinkedContentForHeadline:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id)loadLinkedIssuesWithIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)loadLinkedTagsWithIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setLinkedHeadlines:(id)arg1;
- (void)setLinkedIssues:(id)arg1;
- (void)setLinkedTags:(id)arg1;
- (id)tagForIdentifier:(id)arg1;

@end