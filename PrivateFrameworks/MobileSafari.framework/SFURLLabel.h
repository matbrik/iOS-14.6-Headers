/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFURLLabel : UIVisualEffectView {
    UIView * _URLContainerClipView;
    UIImageView * _fadeOut;
    long long  _fadeOutEdge;
    UILabel * _label;
    long long  _textAlignmentEdge;
    struct CGSize { 
        double width; 
        double height; 
    }  _urlSize;
}

@property (nonatomic) UIView *URLContainerClipView;
@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic) long long fadeOutEdge;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) double lastLineBaselineFrameOriginY;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignmentEdge;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } urlSize;

- (void).cxx_destruct;
- (id)URLContainerClipView;
- (void)_updateSize;
- (bool)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (id)attributedText;
- (double)baselineOffsetFromBottom;
- (long long)fadeOutEdge;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)lastLineBaselineFrameOriginY;
- (void)layoutSubviews;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFadeOutEdge:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignmentEdge:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setURLContainerClipView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignmentEdge;
- (id)textColor;
- (struct CGSize { double x1; double x2; })urlSize;

@end
