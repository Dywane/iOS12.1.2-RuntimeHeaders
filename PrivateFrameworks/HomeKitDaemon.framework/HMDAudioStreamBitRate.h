/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioStreamBitRate : NSObject <NSCopying> {
    long long  _bitRate;
}

@property (nonatomic) long long bitRate;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (long long)bitRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithBitRate:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setBitRate:(long long)arg1;

@end
