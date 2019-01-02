/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {
    FigCaptionLayerPrivate * _priv;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)finalize;
- (id)init;
- (void)layoutSublayers;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)setFontName:(const char *)arg1;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer { }*)arg1;

@end
