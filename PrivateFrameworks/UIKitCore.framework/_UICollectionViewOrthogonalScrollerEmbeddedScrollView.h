/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView {
    UICollectionView * _collectionView;
    long long  _section;
    UIFocusContainerGuide * _sectionFocusContainerGuide;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;

- (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_configureSectionFocusContainerGuide;
- (void)_focusedItem:(id)arg1 isMinX:(bool*)arg2 isMaxX:(bool*)arg3 isMinY:(bool*)arg4 isMaxY:(bool*)arg5;
- (id)collectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)section;
- (void)setCollectionView:(id)arg1;
- (void)setSection:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end