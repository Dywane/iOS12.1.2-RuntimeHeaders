/* Generated by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNImageNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions> {
    bool  _hiddenFromDefaultExpandedView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailClippingRect;
    NSNumber * _thumbnailFrameNumber;
    bool  _thumbnailHidden;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hiddenFromDefaultExpandedView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailClippingRect;
@property (nonatomic, readonly, copy) NSNumber *thumbnailFrameNumber;
@property (nonatomic, readonly) bool thumbnailHidden;

+ (id)optionsFromOptionsDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)hiddenFromDefaultExpandedView;
- (id)initWithCoder:(id)arg1;
- (id)initWithThumbnailHidden:(bool)arg1 thumbnailClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 thumbnailFrameNumber:(id)arg3 hiddenFromDefaultExpandedView:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailClippingRect;
- (id)thumbnailFrameNumber;
- (bool)thumbnailHidden;

@end
