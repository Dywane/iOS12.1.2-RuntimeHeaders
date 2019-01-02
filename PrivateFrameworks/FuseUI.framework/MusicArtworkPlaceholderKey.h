/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicArtworkPlaceholderKey : NSObject <NSCopying> {
    long long  _integerHeight;
    long long  _integerScale;
    long long  _integerWidth;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
