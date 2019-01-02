/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo {
    bool  _isOverContent;
}

@property (nonatomic, readonly) bool isOverContent;

- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 alpha:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 zPosition:(double)arg6 hitTestOutset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 coordinateSystem:(id)arg8 isOverContent:(bool)arg9;
- (bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (bool)isOverContent;

@end
