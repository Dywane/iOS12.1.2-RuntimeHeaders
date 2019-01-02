/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout {
    UIColor * _evenColor;
    long long  _numberOfColumns;
    UIColor * _oddColor;
}

@property (nonatomic, copy) UIColor *evenRowBackgroundColor;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic, copy) UIColor *oddRowBackgroundColor;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)evenRowBackgroundColor;
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfColumns;
- (id)oddRowBackgroundColor;
- (void)setEvenRowBackgroundColor:(id)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setOddRowBackgroundColor:(id)arg1;

@end
