/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewControllerWrapperView : UIView {
    bool  _tightWrappingDisabled;
}

@property (nonatomic) bool tightWrappingDisabled;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)existingWrapperViewForView:(id)arg1;
+ (id)wrapperViewForView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)wrapperViewForView:(id)arg1 wrapperFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTightWrappingDisabled:(bool)arg1;
- (bool)tightWrappingDisabled;
- (void)unwrapView;
- (void)unwrapView:(id)arg1;

@end
