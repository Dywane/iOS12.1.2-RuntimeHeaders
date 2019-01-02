/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKAttachmentView : UIView {
    bool  _contentHidden;
    PKDrawing * _drawing;
    UIView * _tileContainerView;
    NSMutableArray * _tiles;
}

@property (nonatomic) bool contentHidden;
@property (nonatomic, copy) PKDrawing *drawing;
@property (nonatomic, readonly) double drawingScale;
@property (nonatomic, readonly) bool isAtEndOfDocument;
@property (nonatomic, retain) UIView *tileContainerView;
@property (nonatomic, readonly) UIView *tileMaskView;
@property (nonatomic, readonly) NSMutableArray *tiles;

- (void).cxx_destruct;
- (bool)contentHidden;
- (id)drawing;
- (void)drawingDidChange;
- (double)drawingScale;
- (void)drawingWillBegin;
- (void)fingerDrawingEnabledDidChange;
- (bool)hitByTouchLocation:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)hitChrome:(struct CGPoint { double x1; double x2; })arg1 isStylus:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 drawing:(id)arg2;
- (bool)isAtEndOfDocument;
- (void)layoutSubviews;
- (void)setContentHidden:(bool)arg1;
- (void)setDrawing:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTileContainerView:(id)arg1;
- (id)tileContainerView;
- (id)tileMaskView;
- (id)tiles;
- (void)updateDrawingHeight:(double)arg1;
- (void)updateFrameForTextContainer;
- (void)updateTileContainerViewFrame;

@end
