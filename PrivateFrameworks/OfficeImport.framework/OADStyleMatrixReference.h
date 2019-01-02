/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADStyleMatrixReference : NSObject <NSCopying> {
    OADColor * mColor;
    unsigned long long  mMatrixIndex;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;
- (unsigned long long)matrixIndex;
- (void)setColor:(id)arg1;
- (void)setMatrixIndex:(unsigned long long)arg1;

@end
