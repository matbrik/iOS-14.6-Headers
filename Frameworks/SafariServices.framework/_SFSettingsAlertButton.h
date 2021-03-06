/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSettingsAlertButton : _SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration> {
    UIView * _accessoryView;
    NSAttributedString * _attributedText;
    NSArray * _componentsArrangement;
    NSArray * _contentConstraints;
    NSString * _detailText;
    UILabel * _detailTextLabel;
    UIImage * _image;
    UIImageView * _imageView;
    bool  _limitToSingleLine;
    NSString * _text;
    UILayoutGuide * _textGuide;
    UILabel * _textLabel;
    NSString * _textStyle;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, copy) NSArray *componentsArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) bool limitToSingleLine;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic, readonly) UIView *trailingView;

- (void).cxx_destruct;
- (id)_arrangedSubviews;
- (void)_didChangeContents;
- (void)_hover:(id)arg1;
- (void)_updateTintColor;
- (id)accessoryView;
- (id)attributedText;
- (id)componentsArrangement;
- (id)detailText;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)limitToSingleLine;
- (void)setAccessoryView:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setComponentsArrangement:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setLimitToSingleLine:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (id)text;
- (id)textLabel;
- (id)textStyle;
- (id)trailingView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
