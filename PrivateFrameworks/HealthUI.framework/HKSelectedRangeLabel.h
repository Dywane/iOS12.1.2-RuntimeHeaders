/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSelectedRangeLabel : UILabel {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;

+ (id)_stringForSelectedRangeData:(id)arg1;
+ (id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefersImageAffixes:(bool)arg4;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedRangeData:(id)arg1;

@end
