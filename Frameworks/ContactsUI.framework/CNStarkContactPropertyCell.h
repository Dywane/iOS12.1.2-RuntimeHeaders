/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;

+ (bool)wantsHorizontalLayout;

- (void)_cnui_applyContactStyle;
- (id)constantConstraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)performDefaultAction;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (bool)shouldShowStar;
- (id)standardTransportIcon;
- (void)transportButtonClicked:(id)arg1;
- (id)variableConstraints;

@end
