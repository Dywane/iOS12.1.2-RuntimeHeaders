/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAttachmentPreviewImageLoader : NSObject {
    NSData * _data;
    bool  _delayLoadingURLs;
    struct UIImage { Class x1; } * _image;
    id /* block */  _imageDidLoadBlock;
    long long  _imageOrientation;
    struct UIImage { Class x1; } * _orientedImage;
    struct UIImage { Class x1; } * _originalImage;
    NSArray * _previewImageURLs;
    double  _scale;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic) bool delayLoadingURLs;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) id /* block */ imageDidLoadBlock;
@property (nonatomic) long long imageOrientation;
@property (nonatomic, retain) UIImage *orientedImage;
@property (nonatomic, retain) UIImage *originalImage;
@property (nonatomic, copy) NSArray *previewImageURLs;
@property (nonatomic) double scale;

+ (struct UIImage { Class x1; }*)orientedImage:(struct UIImage { Class x1; }*)arg1 withBackground:(int)arg2;
+ (struct UIImage { Class x1; }*)orientedImage:(struct UIImage { Class x1; }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;

- (void).cxx_destruct;
- (bool)canLoadImage;
- (id)data;
- (bool)delayLoadingURLs;
- (struct UIImage { Class x1; }*)image;
- (id /* block */)imageDidLoadBlock;
- (long long)imageOrientation;
- (id)initWithOriginalImage:(struct UIImage { Class x1; }*)arg1 orientedImage:(struct UIImage { Class x1; }*)arg2 data:(id)arg3 scale:(double)arg4 previewImageURLs:(id)arg5 delayLoadingURLs:(bool)arg6;
- (void)loadData;
- (struct UIImage { Class x1; }*)loadImage;
- (struct UIImage { Class x1; }*)loadOrientedImage;
- (struct UIImage { Class x1; }*)orientedImage;
- (struct UIImage { Class x1; }*)originalImage;
- (id)previewImageURLs;
- (double)scale;
- (void)setData:(id)arg1;
- (void)setDelayLoadingURLs:(bool)arg1;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImageDidLoadBlock:(id /* block */)arg1;
- (void)setImageOrientation:(long long)arg1;
- (void)setOrientedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setOriginalImage:(struct UIImage { Class x1; }*)arg1;
- (void)setPreviewImageURLs:(id)arg1;
- (void)setScale:(double)arg1;

@end
