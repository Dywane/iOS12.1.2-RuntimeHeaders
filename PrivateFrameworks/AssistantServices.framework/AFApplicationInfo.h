/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFApplicationInfo : NSObject <NSSecureCoding> {
    NSString * _identifier;
    int  _pid;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int pid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (void)setIdentifier:(id)arg1;
- (void)setPid:(int)arg1;

@end
