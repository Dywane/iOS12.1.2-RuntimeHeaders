/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer {
    unsigned long long  mIndex;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
    }  mLocation;
    bool  mNeedsTileDisplay;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } location;
@property (nonatomic) bool needsTileDisplay;

- (void)display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)index;
- (struct { unsigned long long x1; unsigned long long x2; })location;
- (bool)needsTileDisplay;
- (void)setIndex:(unsigned long long)arg1;
- (void)setLocation:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRectIgnoringBackground:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsTileDisplay:(bool)arg1;
- (id)tileContentsLayer;
- (void)updateFrameWithTileSize:(struct CGSize { double x1; double x2; })arg1 tilesWide:(unsigned long long)arg2 tilesHigh:(unsigned long long)arg3 geometryProvider:(id)arg4;

@end
