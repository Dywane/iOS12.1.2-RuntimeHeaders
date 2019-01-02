/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UUID;
    NSString * _displayName;
    bool  _hasRemovalPasscode;
    NSString * _identifier;
    bool  _isEncrypted;
    bool  _isLocked;
    bool  _isManaged;
    NSString * _organization;
    NSArray * _payloads;
    NSString * _profileDescription;
    long long  _profileVersion;
    NSDictionary * _restrictions;
    NSArray * _signerCertificates;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *UUID;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) bool hasRemovalPasscode;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly, copy) NSString *organization;
@property (nonatomic, readonly, copy) NSArray *payloads;
@property (nonatomic, readonly, copy) NSString *profileDescription;
@property (nonatomic, readonly) long long profileVersion;
@property (nonatomic, readonly, copy) NSDictionary *restrictions;
@property (nonatomic, readonly, copy) NSArray *signerCertificates;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRemovalPasscode;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 profileVersion:(long long)arg4 displayName:(id)arg5 organization:(id)arg6 profileDescription:(id)arg7 isManaged:(bool)arg8 isLocked:(bool)arg9 hasRemovalPasscode:(bool)arg10 isEncrypted:(bool)arg11 signerCertificates:(id)arg12 payloads:(id)arg13 restrictions:(id)arg14;
- (bool)isEncrypted;
- (bool)isEqual:(id)arg1;
- (bool)isLocked;
- (bool)isManaged;
- (id)organization;
- (id)payloads;
- (id)profileDescription;
- (long long)profileVersion;
- (id)restrictions;
- (id)signerCertificates;
- (unsigned long long)type;

@end
