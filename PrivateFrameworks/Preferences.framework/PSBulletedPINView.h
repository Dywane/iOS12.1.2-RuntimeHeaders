/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {
    PSPasscodeField * _passcodeField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteLastCharacter;
- (void)hidePasscodeField:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfFields:(int)arg2;
- (bool)isFirstResponder;
- (void)layoutSubviews;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (bool)resignFirstResponder;
- (void)setBlocked:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
