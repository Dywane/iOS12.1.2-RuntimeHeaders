/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegAlias : NSObject {
    IMAccount * _account;
    NSString * _alias;
    NSString * _displayName;
}

@property (nonatomic, retain) IMAccount *account;
@property (nonatomic, copy) NSString *alias;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)account;
- (id)alias;
- (id)description;
- (id)displayName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLocalPhoneNumberAlias;
- (bool)isPhoneNumberAliasOnPhoneNumberAccount;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (long long)type;
- (bool)validate;
- (long long)validationErrorReason;
- (long long)validationStatus;

@end
