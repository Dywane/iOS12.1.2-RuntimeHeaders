/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDBorders : NSObject <NSCopying> {
    unsigned long long  mBottomBorderIndex;
    unsigned long long  mDiagonalBorderIndex;
    unsigned long long  mHorizontalBorderIndex;
    unsigned long long  mLeftBorderIndex;
    EDResources * mResources;
    unsigned long long  mRightBorderIndex;
    unsigned long long  mTopBorderIndex;
    unsigned long long  mVerticalBorderIndex;
}

+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6;
+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8;
+ (id)bordersWithResources:(id)arg1;

- (id)bottomBorder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagonalBorder;
- (unsigned long long)hash;
- (id)horizontalBorder;
- (id)initWithResources:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBorders:(id)arg1;
- (id)leftBorder;
- (id)rightBorder;
- (void)setBottomBorder:(id)arg1;
- (void)setDiagonalBorder:(id)arg1;
- (void)setHorizontalBorder:(id)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setVerticalBorder:(id)arg1;
- (id)topBorder;
- (id)verticalBorder;

@end
