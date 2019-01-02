/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {
    const /* Warning: Unrecognized filer type: '' using 'void*' */ void** _points;
    NSMutableDictionary * _sizedPointsCache;
}

@property (readonly) const struct CGPoint { double x1; double x2; }*normalizedPoints;
@property const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithFaceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 points:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg2 pointCount:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (const struct CGPoint { double x1; double x2; }*)normalizedPoints;
- (void)pointAtIndex:(unsigned long long)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (const struct CGPoint { double x1; double x2; }*)pointsInImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;

@end
