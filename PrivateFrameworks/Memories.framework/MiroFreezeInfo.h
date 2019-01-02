/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroFreezeInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _isAdded;
    bool  _isFreeze;
    bool  _isRemoved;
}

@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) bool isAdded;
@property (nonatomic, readonly) bool isFreeze;
@property (nonatomic, readonly) bool isRemoved;

+ (id)freezeInfoWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isAdded;
- (bool)isFreeze;
- (bool)isRemoved;

@end
