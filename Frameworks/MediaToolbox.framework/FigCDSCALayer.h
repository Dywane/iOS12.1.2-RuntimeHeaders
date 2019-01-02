/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCDSCALayer : FigBaseCALayer {
    struct OpaqueFigCDSCALayerInternal { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; void*x5; BOOL x6; void*x7; void*x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; } * layerInternal;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)clear:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)finalize;
- (id)init;
- (void)layoutSublayers;
- (void)setCallbacks:(id)arg1 userEvent:(int (*)arg2 viewportChanged:(int (*)arg3 drawInContext:(int (*)arg4;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
