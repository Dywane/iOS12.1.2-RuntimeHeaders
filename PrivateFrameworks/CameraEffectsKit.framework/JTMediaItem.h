/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTMediaItem : NSObject <NSCopying> {
    long long  _captureInterfaceOrientation;
    <JTMediaItemDelegate> * _delegate;
    int  _durationAt30fps;
    int  _mediaLoadState;
    int  _mediaState;
    int  _mediaType;
}

@property (nonatomic) long long captureInterfaceOrientation;
@property (nonatomic) <JTMediaItemDelegate> *delegate;
@property (nonatomic) int durationAt30fps;
@property (nonatomic) int mediaLoadState;
@property (nonatomic) int mediaState;
@property (nonatomic) int mediaType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canBeAddedToSequence;
- (bool)canHaveFilter;
- (bool)canSaveToCameraRoll;
- (long long)captureInterfaceOrientation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)durationAt30fps;
- (bool)hasAudibleCharacteristic;
- (bool)hasPhotoCharacteristic;
- (bool)hasVisualCharacteristic;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (int)mediaLoadState;
- (int)mediaState;
- (int)mediaType;
- (void)setCaptureInterfaceOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDurationAt30fps:(int)arg1;
- (void)setMediaLoadState:(int)arg1;
- (void)setMediaState:(int)arg1;
- (void)setMediaType:(int)arg1;

@end
