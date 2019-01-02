/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIButtonTile : NSObject <PXReusableObject, PXUIViewBasicTile> {
    UIButton * __button;
    NSArray * __layoutConstraints;
    PXButtonSpec * __spec;
    UIView * __view;
    <PXUIButtonTileDelegate> * _delegate;
    bool  _hasScheduledUpdate;
    struct { 
        bool button; 
    }  _needsUpdateFlags;
    NSString * _title;
}

@property (nonatomic, readonly) UIButton *_button;
@property (setter=_setLayoutConstraints:, nonatomic, copy) NSArray *_layoutConstraints;
@property (setter=_setSpec:, nonatomic, retain) PXButtonSpec *_spec;
@property (nonatomic, readonly) UIView *_view;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXUIButtonTileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_button;
- (void)_handleButton:(id)arg1;
- (void)_invalidateButton;
- (id)_layoutConstraints;
- (bool)_needsUpdate;
- (void)_setLayoutConstraints:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setSpec:(id)arg1;
- (id)_spec;
- (void)_updateButtonIfNeeded;
- (void)_updateIfNeeded;
- (id)_view;
- (void)becomeReusable;
- (id)delegate;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)init;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)view;

@end
