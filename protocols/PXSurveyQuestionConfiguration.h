/* Generated by RuntimeBrowser.
 */

@protocol PXSurveyQuestionConfiguration <NSObject>

@required

- (UIImage *)contentImageForOneUp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForOneUp;
- (UIView *)contentView;
- (PXSurveyQuestionConfigurationHandlers *)handlers;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHandlers:(PXSurveyQuestionConfigurationHandlers *)arg1;
- (NSString *)title;

@end