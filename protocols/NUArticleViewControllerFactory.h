/* Generated by RuntimeBrowser.
 */

@protocol NUArticleViewControllerFactory <NSObject>

@required

- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 issue:(FCIssue *)arg2 context:(NUArticleContext *)arg3 articleHostViewController:(NUArticleHostViewController *)arg4;
- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 issue:(FCIssue *)arg2 context:(NUArticleContext *)arg3 articleHostViewController:(NUArticleHostViewController *)arg4;
- (NSHashTable *)loadingListeners;

@end
