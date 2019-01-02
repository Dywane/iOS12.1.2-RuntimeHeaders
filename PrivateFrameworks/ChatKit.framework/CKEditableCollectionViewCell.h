/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEditableCollectionViewCell : UICollectionViewCell {
    UIImageView * _checkmark;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentAlignmentRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    bool  _editing;
    bool  _hidesCheckmark;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
}

@property (nonatomic, retain) UIImageView *checkmark;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentAlignmentInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentAlignmentRect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) bool hidesCheckmark;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_horizontalSafeAreaInsets;
- (id)checkmark;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentAlignmentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignmentRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)description;
- (bool)hidesCheckmark;
- (bool)isEditing;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setCheckmark:(id)arg1;
- (void)setContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHidesCheckmark:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelected:(bool)arg1;
- (void)updateCheckmarkImage;

@end
