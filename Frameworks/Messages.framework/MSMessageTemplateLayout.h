/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSMessageTemplateLayout : MSMessageLayout <NSSecureCoding> {
    NSString * _caption;
    UIImage * _image;
    NSString * _imageSubtitle;
    NSString * _imageTitle;
    NSData * _mediaData;
    NSURL * _mediaFileURL;
    NSString * _mediaType;
    NSString * _subcaption;
    NSString * _trailingCaption;
    NSString * _trailingSubcaption;
}

@property (nonatomic, copy) NSString *caption;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *imageSubtitle;
@property (nonatomic, copy) NSString *imageTitle;
@property (nonatomic, retain) NSData *mediaData;
@property (nonatomic, copy) NSURL *mediaFileURL;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic, copy) NSString *subcaption;
@property (nonatomic, copy) NSString *trailingCaption;
@property (nonatomic, copy) NSString *trailingSubcaption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)imageSubtitle;
- (id)imageTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaData;
- (id)mediaFileURL;
- (id)mediaType;
- (void)setCaption:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSubtitle:(id)arg1;
- (void)setImageTitle:(id)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaFileURL:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setSubcaption:(id)arg1;
- (void)setTrailingCaption:(id)arg1;
- (void)setTrailingSubcaption:(id)arg1;
- (id)subcaption;
- (id)trailingCaption;
- (id)trailingSubcaption;

@end
