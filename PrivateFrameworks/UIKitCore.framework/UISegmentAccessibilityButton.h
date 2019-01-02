/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISegmentAccessibilityButton : UIButton {
    UISegment * _segment;
}

@property (nonatomic, retain) UISegment *segment;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)buttonWithSegment:(id)arg1;

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)segment;
- (void)setSegment:(id)arg1;

@end
