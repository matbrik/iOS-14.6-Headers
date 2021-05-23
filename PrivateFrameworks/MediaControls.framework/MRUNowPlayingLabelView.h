/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUNowPlayingLabelView : UIView <MRUVisualStylingProviderObserver> {
    long long  _context;
    long long  _layout;
    bool  _marqueeEnabled;
    UILabel * _placeholderLabel;
    NSString * _placeholderText;
    MPAVRoute * _route;
    MPRouteLabel * _routeLabel;
    bool  _showPlaceholderText;
    MRUVisualStylingProvider * _stylingProvider;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    MPUMarqueeView * _subtitleMarqueeView;
    NSString * _title;
    UILabel * _titleLabel;
    MPUMarqueeView * _titleMarqueeView;
}

@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layout;
@property (getter=isMarqueeEnabled, nonatomic) bool marqueeEnabled;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic, retain) MPAVRoute *route;
@property (nonatomic, retain) MPRouteLabel *routeLabel;
@property (nonatomic) bool showPlaceholderText;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) MPUMarqueeView *subtitleMarqueeView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) MPUMarqueeView *titleMarqueeView;

- (void).cxx_destruct;
- (long long)context;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMarqueeEnabled;
- (long long)layout;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)placeholderText;
- (id)route;
- (id)routeLabel;
- (void)setContext:(long long)arg1;
- (void)setLayout:(long long)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteLabel:(id)arg1;
- (void)setShowPlaceholderText:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleMarqueeView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleMarqueeView:(id)arg1;
- (bool)showPlaceholderText;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (id)subtitle;
- (id)subtitleLabel;
- (id)subtitleMarqueeView;
- (id)title;
- (id)titleLabel;
- (id)titleMarqueeView;
- (void)updateContentSizeCategory;
- (void)updateMarquee;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (id)viewForFirstBaselineLayout;
- (void)visualStylingProviderDidChange:(id)arg1;

@end