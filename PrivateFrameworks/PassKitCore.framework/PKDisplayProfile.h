/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDisplayProfile : NSObject <NSCopying, NSSecureCoding> {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

+ (Class)classForDisplayProfileType:(long long)arg1;
+ (id)displayProfileOfType:(long long)arg1 withDictionary:(id)arg2 bundle:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (long long)type;

@end
