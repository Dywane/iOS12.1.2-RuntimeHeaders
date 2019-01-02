/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPStoreFollow : NSObject {
    NSNumber * _targetEntityID;
    long long  _targetEntityType;
}

@property (nonatomic, retain) NSNumber *targetEntityID;
@property (nonatomic) long long targetEntityType;

+ (id)followWithPerson:(id)arg1;
+ (id)followWithStoreDictionary:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setTargetEntityID:(id)arg1;
- (void)setTargetEntityType:(long long)arg1;
- (id)targetEntityID;
- (long long)targetEntityType;

@end
