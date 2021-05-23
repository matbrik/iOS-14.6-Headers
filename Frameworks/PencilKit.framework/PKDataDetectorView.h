/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKDataDetectorView : UIView <UIContextMenuInteractionDelegate_ForWebKitOnly> {
    NSArray * _allItems;
    NSDictionary * _dataDetectorContext;
    double  _drawingScale;
    PKDataDetectorItem * _item;
    UIContextMenuInteraction * _menuInteraction;
}

@property (nonatomic, copy) NSArray *allItems;
@property (nonatomic, retain) NSDictionary *dataDetectorContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingBounds;
@property (nonatomic) double drawingScale;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKDataDetectorItem *item;
@property (nonatomic, retain) UIContextMenuInteraction *menuInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (void)_highlightWithCompletion:(id /* block */)arg1;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)allItems;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)dataDetectorContext;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingBounds;
- (double)drawingScale;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithDataDetectorItem:(id)arg1 allItems:(id)arg2;
- (id)item;
- (id)menuInteraction;
- (void)setAllItems:(id)arg1;
- (void)setDataDetectorContext:(id)arg1;
- (void)setDrawingScale:(double)arg1;
- (void)setMenuInteraction:(id)arg1;
- (void)tapHandler:(id)arg1;

@end