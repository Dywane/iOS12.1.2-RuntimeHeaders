/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerQueue : NSObject <NSMutableCopying, NSSecureCoding> {
    NSMutableArray * _items;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) NSMutableArray *mutableItems;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItems:(id)arg1 uuid:(id)arg2;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableItems;
- (id)uuid;

@end
