/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVModalPresenterConfiguration : NSObject {
    bool  _allowsMenuDismissal;
    bool  _allowsModalOverModal;
    NSString * _barButtonID;
    unsigned long long  _configurationType;
    struct CGSize { 
        double width; 
        double height; 
    }  _formSheetSize;
    bool  _navigationBarHidden;
    struct CGSize { 
        double width; 
        double height; 
    }  _popoverSize;
    long long  _presentationStyle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
}

@property (nonatomic) bool allowsMenuDismissal;
@property (nonatomic) bool allowsModalOverModal;
@property (nonatomic, copy) NSString *barButtonID;
@property (nonatomic) unsigned long long configurationType;
@property (nonatomic) struct CGSize { double x1; double x2; } formSheetSize;
@property (nonatomic) bool navigationBarHidden;
@property (nonatomic) struct CGSize { double x1; double x2; } popoverSize;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;

- (void).cxx_destruct;
- (void)_configureWithDictionary:(id)arg1;
- (bool)allowsMenuDismissal;
- (bool)allowsModalOverModal;
- (id)barButtonID;
- (unsigned long long)configurationType;
- (struct CGSize { double x1; double x2; })formSheetSize;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)navigationBarHidden;
- (struct CGSize { double x1; double x2; })popoverSize;
- (long long)presentationStyle;
- (void)setAllowsMenuDismissal:(bool)arg1;
- (void)setAllowsModalOverModal:(bool)arg1;
- (void)setBarButtonID:(id)arg1;
- (void)setConfigurationType:(unsigned long long)arg1;
- (void)setFormSheetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setPopoverSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;

@end
