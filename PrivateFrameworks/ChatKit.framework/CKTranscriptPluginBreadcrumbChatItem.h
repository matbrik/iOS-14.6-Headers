/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampChatItem {
    UIImage * _iconImage;
    CKTranscriptPluginChatItem * _previousPluginChatItem;
}

@property (nonatomic, readonly) IMTranscriptPluginBreadcrumbChatItem *IMChatItem;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) double iconWidthPlusPadding;
@property (nonatomic, retain) CKTranscriptPluginChatItem *previousPluginChatItem;

- (void).cxx_destruct;
- (unsigned long long)_breadcrumbOptionFlags;
- (bool)_wantsCenteredOrientation;
- (bool)_wantsIconImage;
- (Class)cellClass;
- (id)iconImage;
- (double)iconWidthPlusPadding;
- (id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (id)previousPluginChatItem;
- (void)setPreviousPluginChatItem:(id)arg1;
- (BOOL)transcriptOrientation;

@end