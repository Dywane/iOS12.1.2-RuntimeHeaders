/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMutableWebContentConfiguration : SXWebContentConfiguration {
    struct CGSize { 
        double width; 
        double height; 
    }  canvasSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  contentFrame;
    NSString * contentSizeCategory;
    NSLocale * locale;
    NSString * storeFront;
}

@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) NSString *storeFront;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })canvasSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentSizeCategory;
- (id)locale;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (id)storeFront;

@end
